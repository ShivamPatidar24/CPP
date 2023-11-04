#include<iostream>
using namespace std;
void printmin(int a[5])
{
	
	int min = a[0];
	int max = a[0];
	for(int i =0;i<5;i++)
	{
		if(min>a[i])
		{
			min = a[i];
		}
//		else if(max < a[i])
//		{
//			max=a[i];
//		}
	}	
	cout<<"min number "<<min<<endl;
//	cout<<max;
}
void printmax(int a[5])
{
	

	int max = a[0];
	for(int i =0;i<5;i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
//		else if(max < a[i])
//		{
//			max=a[i];
//		}
	}	
	cout<< "max number = "<<max<<endl;;
//	cout<<max;
}


int main()
{
	int arr[5] ={2,43,1,5,6};
	int arr1[5] = {32,45,12,22,31};
	cout<<"ARRAY ELEMENT ARE ="<<endl;
	
	printmin(arr);
		printmin(arr1);
 printmax(arr);

//	printarray(arr1);
 printmax(arr1);
	
}




