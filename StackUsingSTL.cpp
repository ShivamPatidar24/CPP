#include <iostream>
#include <stack>
using namespace std;

class Stack_Class
{
private:
    stack<int> s1;

public:
    void push(int i)
    {
        s1.push(i);
    }

    void pop()
    {
        if (!s1.empty())
        {
            std::cout << " " << s1.top() << std::endl;
            s1.pop();
        }
        else
        {
            std::cout << "Stack is empty!" << std::endl;
        }
    }
};

int main()
{
    Stack_Class s11;
    s11.push(12);
    s11.pop();

    return 0;
}
