#include<iostream>
#include<queue>
using namespace std;
int main()
{
    std::queue<std::string> qu;
    qu.push("pinakin");
    qu.push("Mr & mrs :");
    qu.push("shivam");
    qu.push("neetu");
    qu.push("patidar");

            qu.pop();

    cout << "size of qu : " <<qu.size()<<endl;
    while(!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }

}
