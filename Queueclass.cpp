#include<iostream>
using namespace std;

#define n 100

class Queue
{
    int* arr;
    int front;
    int rear;
    
    public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }
    
    void push(int x)
    {
        if(rear == n-1)
        {
            cout<<"Queue is full : ";
        }
          rear++; 
        arr[rear] = x;
        if(front == -1)
        {
            front++;
        }
        
    }
    void pop()
    {
        if(front == -1 || front>rear)
        {
            cout << "Queue is empty : ";
        }
        
        front++;
    }
    int peek()
    {
        if(front == -1 || front>rear)
        {
            cout << "Queue is empty : ";
        }
        
        return arr[front];
    }
    
    bool empty()
    {
        if(front == -1 || front>rear)
        {
            return true;
        }
         return false;
    }
    
};

int main()
{
    Queue s;
    s.push(1);
    s.push(5);
    s.push(7);
    cout << s.peek() <<endl;
    s.pop();
  cout << s.peek() <<endl;
    s.pop();
      cout << s.peek() <<endl;
    s.pop();
      cout << s.empty() <<endl;
    


    
    
    
}
