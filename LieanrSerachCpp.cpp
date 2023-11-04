#include<iostream>
using namespace std;

int main()
{
    
    int a[10],i,j,k;
    cout << "Enter the number of element = ";
    cin >> k;
    
    cout << "Enter the elements = ";
    
    for(i=0;i<k;i++)
    {
        cin >> a[i];
    }
    
    cout << "Number Search = ";
    cin >> j;
    
    for(i=0;i<k;i++)
    {
        if(a[i] == j)
        {
            cout << "Number will be Prasent !!!";
            
            break;
        }
    }
    
    if(i == k)
    {
        cout << "Number is not Prasent ???";
    }
    
}
