#include<iostream>
using namespace std;
float area(int b,int h);
int main()
{
	int base,height;
	float ar;
	cout<<"enter base";
	cin>>base;
	cout<<"enter height";
	cin>>height;
	ar=area(base,height);
	cout<<"area of triangle is"<<ar;
	return 0;
}
float area(int b,int h)
{
	float a;
	a=0.5*b*h;
	return a;
}
