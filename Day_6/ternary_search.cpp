#include<iostream>
using namespce std;
int ternary(int a[],int low,int high,int key)
{
	if(high>=low)
	{
		int m1,m2;
		m1=low+(high-low)/3;
		m2=high-(high-low)/3;
		if(a[m1]==key)
		{
			cout<<"present";break;
		}
		if(a[m2]==key)
		{
			cout<<"present";break;
		}
		if(key<a[m1])
		{
			ternary(a,low,m1-1,key);
		}
		else if(key>a[m2])
		{
			ternary(a,m2+1,high,key);
		}
		else
		{
			ternary(a,m1+1,m2-1,key);
		}
	}
	else
	{
		cout<<"not present";
	}
}
int main()
{
	int n,k;cin>>n;cin>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ternary(a,0,n-1,k);
}
