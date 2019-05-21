#include<iostream>
using namespace std;
int main()
{
	int n,j=0,k=0;cin>>n;
	int a[n],i,p[n];
	for(i=0;i<n;i++)
	{
		cin>>a[n];
		if(a[i]>0)
		{
			p[j]=a[i];
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(j>0)
		{
			a[i]=p[k];
			j--;k++;
		}
		else
		{
			a[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}

}
