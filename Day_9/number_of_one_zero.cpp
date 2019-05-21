#include<iostream>
using namespace std;
bool one(int i)
{
	if(i==1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int count = count_if(a,a+n,one);
	cout<<count;
}
