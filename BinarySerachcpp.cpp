#include<iostream>
using namespace std;
int main()
{
    int a[100],i,top,bot,min,k,x;
    cout << "Enter the number of Element = ";
    
    cin >> k;
    
    cout << "Enter the Element's : ";
    
    for(i=0;i<k;i++)
    {
        cin >> a[i];
    }
    
    cout << "Find the number is : ";
    cin >> x;
    
    top = 0;
    bot = k-1;
    
    while(top<=bot)
    {
        min = (top+bot)/2;
        if(x==a[min])
        {
            cout << "Number will be Find !!!!!!!!";
            exit(0);
        }
        else if(x<a[min])
        {
            bot = min - 1;
        }
        else
        {
            top = min + 1;
        }
    }
    
    cout << "Number is not found ???";
    
    return 0;
}
