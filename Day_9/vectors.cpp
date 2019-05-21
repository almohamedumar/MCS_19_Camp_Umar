#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	vector<int> b;
	for(i=0;i<10;i++)
	{
		a.push_back(i);
		b.push_back(i*i);
	}
	for(i=a.begin;i!=a.end;i++)
	{
		cout<<i;
	}
	cout<<a.size();
	cout<<a.capacity();
	cout<<a.max_size();
	cout<<a.at(3);
	cout<<a.front();
	cout<<a.back();
	a.swap(b);
}
