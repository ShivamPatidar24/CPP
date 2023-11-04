#include<iostream>
using namespace std;

int main()
{
    int i,j,k,z, a[15],n;
    
    cout<< "enter the number of element = "<< " ";
    cin>>n;
    
    cout<< "enter the element = "<< " ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i = 0 ; i<n-1 ; i++)
    {
        z=0;
        for(j = 0 ; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                z++;
                k = a[j];
                a[j] = a[j+1];
                a[j+1] = k ;
            }
        }
        if(z==0) 
        {
            break;
        }
    }
    cout<<"Sorted element are ="<< " ";
    for(i=0; i<n;i++)
    {
        cout<<" "<<a[i];
    }
    
    
}
