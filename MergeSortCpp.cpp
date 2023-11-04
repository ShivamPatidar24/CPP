#include<iostream>
using namespace std;

void MergeSort(int a[], int first ,int mid ,int last)
{
    
    cout<<first<<mid<<last<<endl;
    int n1 = mid - first + 1;
    int n2 = last - mid;
    
    int x[n1];
    int y[n2];
    
    for(int i=0;i<n1;i++)
    {
        x[i] = a[first+i];
    }
    
    for(int j=0;j<n2;j++)
    {
        y[j] = a[mid+1+j];
    }
    
    int i = 0;
    int j = 0;
    int k = first;
    
    while (i < n1 && j < n2)
    {
        if(x[i]<y[j])
        {
            a[k] = x[i];
            i++;
            k++;
        }
        else
        {
            a[k] = y[j];
           j++;
           k++;
        }
        
    }
        while(i<n1)
        {
            a[k] = x[i];
            k++;
            i++; 
        }
        
        while(j<n2)
        {
            a[k] = y[j];
            k++;
            j++;
        }
    
}



void Sort(int a[], int first, int last)
{
    int mid;
    if(first<last)
    {
        mid = (first+last)/2;
        
        Sort(a,first,mid);
        
        Sort(a,mid+1,last);
        
        MergeSort(a,first,mid,last);
        
    }
}

int main()
{
    int a[20],x;
    
    cout << "Enter the number of elements : ";
    cin >> x;
    
    for(int i=0; i<x; i++)
    {
        cin>> a[i];
    }
    
    Sort(a,0,x-1);
    
    for(int i=0; i<x; i++)
    {
        cout << a[i] << " ";
    }
}
