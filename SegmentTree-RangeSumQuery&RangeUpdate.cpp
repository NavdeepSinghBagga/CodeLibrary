#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
int sgtree[MAX]={0};
int lazy[MAX]={0};

void constructsg(int *arr,int front,int back,int index)
{
	if(front==back)
	{
		sgtree[index]=arr[front];
		return;
	}
	int mid=(front+back)/2;
	constructsg(arr,front,mid,index*2+1);
	constructsg(arr,mid+1,back,index*2+2);
	sgtree[index]=sgtree[index*2+1]+sgtree[index*2+2];
}

int sum(int front,int back,int left,int right,int index)
{
	if(lazy[index]!=0)
	{
		sgtree[index]+=(back-front+1)*lazy[index];
		if(front!=back)
		{
			lazy[2*index+1]+=lazy[index];
			lazy[2*index+2]+=lazy[index];
		}
		lazy[index]=0;
	}
	if(front>back || back<left || front>right)
		return 0;
	if(left<=front && right>=back)
		return sgtree[index];
	int mid=(front+back)/2;
	return sum(front,mid,left,right,2*index+1)+sum(mid+1,back,left,right,2*index+2);
}
void update(int front,int back,int left,int right,int value,int index)
{
	if(lazy[index]!=0)
	{
		sgtree[index]+=(back-front+1)*lazy[index];
		if(front!=back)
		{
			lazy[2*index+1]+=lazy[index];
			lazy[2*index+2]+=lazy[index];
		}
		lazy[index]=0;
	}
    if(front>back || front>right || back<left)
        return;
    if(front>=left && back<=right)
	{
		sgtree[index]+=(back-front+1)*value;
		if(front!=back)
		{
			lazy[2*index+1]+=value;
			lazy[2*index+2]+=value;
		}
		return;
	}
    if(back!=front)
    {
        int mid=(front+back)/2;
        update(front,mid,left,right,value,2*index + 1);
        update(mid+1,back,left,right,value,2*index + 2);
        sgtree[index]=sgtree[2*index+1]+sgtree[2*index+2];
    }
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int treesize=1<<((int)(ceil(log2(n)))+1)-1;
	constructsg(arr,0,n-1,0);
	int q;
	cin>>q;
	while(q--)
	{
		//0 based indexing
		string type;
		cin>>type;
		if(type=="update")
		{
			int left,right,value;
			cin>>left>>right>>value;
			update(0,n-1,left,right,value,0);
		}
		else
		{
			int left,right;
			cin>>left>>right;
			cout<<sum(0,n-1,left,right,0)<<endl;
		}
	}
	return 0;
}

/*
Sample Input1:
10
10 4 2 5 7 1 0 6 8 3
6
query 1 5
update 3 5 6
query 1 5
query 5 9
update 7 9 3
query 5 9
Sample Output1:
19
37
24
33
*/
