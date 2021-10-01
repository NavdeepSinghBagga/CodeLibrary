#include<bits/stdc++.h>
using namespace std;

void update(int fenwick[],int ind,int val,int n)
{
	while(ind<=n)
	{
		fenwick[ind]+=val;
		ind+=(ind&(-ind));
	}
}
int query(int fenwick[],int ind)
{
    int sum=0;
    while(ind>0)
    {
        sum+=fenwick[ind];
        ind-=(ind&(-ind));
    }
    return sum;
}
int range(int fenwick[],int l,int r)
{
    return query(fenwick,r)-query(fenwick,l-1);
}

int main()
{
	int n;
	cin>>n;
	int arr[n+1]={0};
	int fenwick[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		update(fenwick,i,arr[i],n);
	}
	int q;
	cin>>q;
	while(q--)
	{
		//1 based indexings
		string type;
		cin>>type;
		if(type=="update")
		{
			int location,value;
			cin>>location>>value;
			int diff=value-arr[location];
			update(fenwick,location,diff,n);
			arr[location]=value;
		}
		else
		{
			int l,r;
			cin>>l>>r;
			cout<<range(fenwick,l,r)<<endl;
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
update 3 6
query 1 5
query 3 9
update 4 7
update 7 9
query 3 9
Sample Output1:
28
32
33
*/
