#include<iostream>
using namespace std;
int main()
{
    int a[30],n,i,j,temp,min;
    
    cout << "Enter the Number of element = ";
    
    cin >> n;
    
    cout << "Enter the element = ";
    
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    for(i=1;i<n;i++)
    {
        temp = a[i];
        j = i-1;
        
        while(j>=0&&temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
       
    }
    cout << "Sorted elements are = ";
    for(i=0;i<n;i++)
    {
        cout << " " << a[i];
    }
}
