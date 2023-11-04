#include<iostream>
using namespace std;

template <typename T, typename Y>
class csv
{
    T a;
    Y b;

public:
    csv(T x, Y y)
    {
        a = x;
        b = y;
    }

    T GetFirstData()
    {
        return a;
    }

    Y GetSecondData()
    {
        return b;
    }
};

int main()
{
    csv<int, int> c(23, 54);
    csv<char, char> c1('s', 'p');

    cout << c.GetFirstData() << " " << c1.GetFirstData() << endl;
    cout << c.GetSecondData() << " " << c1.GetSecondData() << endl;

    return 0;
}

