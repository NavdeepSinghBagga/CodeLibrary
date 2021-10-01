#include<bits/stdc++.h>
using namespace std;

void update(int fenwick[],int ind,int n)
{
	while(ind<=n)
	{
		fenwick[ind]++;
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
int main()
{
	int n;
	cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int maxelement=*max_element(arr,arr+n),inversion=0;
	int fenwick[maxelement+1]={0};
	for(int i=n-1;i>=0;i--)
	{
		update(fenwick,arr[i],maxelement);
		inversion+=query(fenwick,arr[i]-1);
	}
	cout<<inversion;
	return 0;
}

/*
Sample Input1:
10
1 2 3 4 5 6 7 8 10 9
Sample Output1:
1
Sample Input2:
10
10 9 8 7 6 5 4 3 2 1
Sample Output2:
45
Sample Input3:
10
10 4 2 5 7 1 1 6 8 3
Sample Output3:
24
*/
