#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Stack
{
   int n;
   queue<int> q1;
   queue<int> q2;

public:
   Stack()
   {
       n=0;
   }

  void push (int x)
  {
       q2.push(x);
       n++;
       while(!q1.empty())
       {
           q2.push(q1.front());
           q1.pop();
       }
       
       queue<int> temp = q1;
       q1 = q2;
       q2 = temp;
  }
  
  void pop()
  {
      q1.pop();
      n--;
  }
  int Top()
  {
      return q1.front();
      
  }
  int Size()
  {
      return n;
  }
};

int main ()
{
  Stack q;
  q.push (41);
  q.push (24);
  q.push (44);
  q.push (24);
  q.push (49);
   cout <<"Size of Stack : " <<q.Size()<<endl;
  cout << q.Top()<<" ";
  q.pop();
   cout << q.Top()<<" ";
  q.pop();
   cout << q.Top()<<" ";
  q.pop();
   cout << q.Top()<<" ";
  q.pop();
   cout << q.Top()<<" ";
  q.pop();
   
  
  
 
}

