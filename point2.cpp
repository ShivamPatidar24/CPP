#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int *b[5];
	
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	for(int j=0;j<5;j++)
	{
		b[j]=&a[j];
	}
	cout<<"the value are"<<"\n";
		for(int i=0;i<5;i++)
	{
		cout<<*b[i]<<"\n";
	}
	
}
