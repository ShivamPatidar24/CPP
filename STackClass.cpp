#include<iostream>
using namespace std;

#define n 100

class Stack
{
    int* arr;
    int top;
    
    public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    
    void push(int a)
    {
        if(top == n-1)
        {
            cout << "Stack is Full || ";
        }
        else
        {
            top++;
            arr[top] = a;
        }
        
    }
    void pop()
    {
        if(top == -1)
        {
            cout << "Stack is Empty || ";
        }
        else
        {
            top--;
        }
    }
    int Top()
    {
        
        if(top == -1)
        {
            cout << "Stack is Empty || ";
            return -1;
        }

        return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
    
};

int main()
{
    Stack s;
    s.push(1);
    s.push(5);
    s.push(7);
    cout << s.Top() <<endl;
    s.pop();
        cout << s.Top() <<endl;
            cout << s.empty() <<endl;

        

    
    
    
}
