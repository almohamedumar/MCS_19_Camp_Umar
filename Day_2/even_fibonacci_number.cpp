#include<iostream>
using namespace std;
int main()
{
    long int n=4000000;
    long int a=0,b=2; 
    long int sum=a+b; 
    while (b<=n) 
    { 
        long int c =4*b+a; 
        if (c>n) 
        {
            break; 
        }
        a = b; 
        b = c; 
        sum += b; 
    } 
    cout<<sum;
}
