#include<iostream>
using namespace std;
int main()
{
    int i,j,t=0,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        j=i;
        while(j>0&&t<a[j-1])
        {
            a[j]=a[j-1];
            j=j-1;
        }
        a[j]=t;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
