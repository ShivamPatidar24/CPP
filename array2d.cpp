#include<iostream>
using namespace std;
int main()
{
//	int arr[2][2];
//	arr[0][0]=1;
//	arr[0][1]=2;
//	arr[1][0]=3;
//	arr[1][1]=4;
	int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	
	for(int i= 0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		
		cout<<"\n";
	}
	
}
