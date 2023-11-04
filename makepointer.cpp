#include <iostream>
#include <memory>

class Base
{
    int a;
    
    public:
    
    ~Base()
    {
        std::cout << "Dest";    
    }
};


int main()
{
    Base *b = new Base;
    delete b;
    
    std::unique_ptr<Base> ptr = std::make_unique<Base>();
}
