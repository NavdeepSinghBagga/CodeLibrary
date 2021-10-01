#include<bits/stdc++.h>
using namespace std;

void prefixsum(int arr[],int n,int prefix[])
{
	prefix[0]=arr[0];
	for(int i=1;i<=n;i++)
		prefix[i]=prefix[i-1]+arr[i];
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int prefix[n];
	prefixsum(arr,n,prefix);
	for(int i=0;i<n;i++)
		cout<<prefix[i]<<" ";
	return 0;
}

/*
Sample Input1:
10
10 4 2 5 7 1 0 6 8 3
Sample Output1:
10 14 16 21 28 29 29 35 43 46 
*/
