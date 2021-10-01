#include<bits/stdc++.h>
using namespace std;

int constructsg(vector<int>&arr,int front,int back,vector<int>&sgtree,int index)
{
	if(front==back)
	{
		sgtree[index]=arr[front];
		return arr[front];
	}
	int mid=(front+back)/2;
	sgtree[index]=min(constructsg(arr,front,mid,sgtree,index*2+1),constructsg(arr,mid+1,back,sgtree,index*2+2));
	return sgtree[index];
}
int minm(vector<int>&sgtree,int front,int back,int left,int right,int index)
{
	if(left<=front && right>=back)
		return sgtree[index];
	if(back<left || front>right)
		return INT_MAX;
	int mid=(front+back)/2;
	return min(minm(sgtree,front,mid,left,right,2*index+1),minm(sgtree,mid+1,back,left,right,2*index+2));
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int treesize=1<<((int)(ceil(log2(n)))+1)-1;
	vector<int>sgtree(treesize);
	constructsg(arr,0,n-1,sgtree,0);
	int q;
	cin>>q;
	while(q--)
	{
		//0 based indexing
		int left,right;
		cin>>left>>right;
		cout<<minm(sgtree,0,n-1,left,right,0)<<endl;
	}
	return 0;
}

/*
Sample Input1:
10
10 4 2 5 7 1 0 6 8 3
5
1 5
3 6
8 9
0 3
2 5
Sample Output1:
1
0
3
2
1
*/
