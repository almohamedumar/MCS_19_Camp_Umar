#include<iostream>
using namespace std;
int partition(int a[],int start,int end)
{
	int i=start+1;
	int pivot=a[start];
	for(int j=start+1;j<=end;j++)
	{
		if(a[j]<pivot)
		{
			swap(a[i],a[j]);
			i+=1;
		}
	}
	swap(a[start],a[i-1]);
	return i-1;
}
void quick_sort(int a[],int start,int end)
{
	if(start<end)
	{
		int pivot=partition(a,start,end);
		quick_sort(a,start,pivot);
		quick_sort(a,pivot+1,end);
	}
}
using namespace std;
int main()
{
	int n,i;cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quick_sort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

