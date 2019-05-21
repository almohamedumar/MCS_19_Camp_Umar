#include<iostream>
using namespace std;
int main()
{
	int n,k;cin>>n;cin>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==k)
		{
			cout<<"present";exit(1);
		}
	}
}
	
