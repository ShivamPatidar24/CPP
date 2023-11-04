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
    
    for(i=0;i<n;i++)
    {
        min = i;
        
        
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            }
        }
        
        if(min!=i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    cout << "Sorted elements are = ";
    for(i=0;i<n;i++)
    {
        cout << " " << a[i];
    }
} 
