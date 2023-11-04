#include<iostream>
using namespace std;


int main()
{
 int a=3;
 int *p;
 int **k;
  p = &a;
  k = &p;
  k++;
  
  cout << k;
 
}
