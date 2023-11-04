#include<iostream>
#include<queue>
using namespace std;
int main()
{
    
  std::priority_queue<int> maxi;
  std::priority_queue<int, vector<int>, greater<int>> mini;
  maxi.push(34);
  maxi.push(2);
  maxi.push(12);
  maxi.push(56);
  maxi.push(7);
  maxi.push(22);
  
  int a = maxi.size();
  for(int i =0; i<a;i++)
  {
      cout << maxi.top() <<" ";
      maxi.pop();
  }
  cout<<endl;
  
  mini.push(34);
  mini.push(2);
  mini.push(12);
  mini.push(56);
  mini.push(7);
  mini.push(22);
  
  int b= mini.size();
 for(int i =0; i<b;i++)
  {
      cout << mini.top() <<" ";
      mini.pop();
  }
  
  

  
}
