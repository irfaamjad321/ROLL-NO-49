#include<iostream>
using namespace std;
int sqr(int n);
int cube(int n);
int main()
{
	int a,b,r;
	cout<<"enter an integer";
	cin>>a;
	cout<<"enter an integer";
	cin>>b;
	r=sqr(a) + sqr(b);
	cout<<"result="<<r<<endl;
	return 0;
}
int sqr(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}
