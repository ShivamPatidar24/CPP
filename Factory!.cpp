#include<iostream>
using namespace std;
class Tyre{
    public:
    Tyre()
    {
        
    }
    
    virtual void tyre() = 0;
    
    virtual ~Tyre()
    {
        
    }
    
    static Tyre* factory(int);
    
    
};

class Car: public Tyre 
{
    public:
void tyre()
{
    
cout << "car have four tyre " << endl;
    
}
};

class Bike: public Tyre
{
    void tyre()
    {
        cout << "bike have two tyre " << endl;

    }
};

Tyre* Tyre::factory(int op)
{
    if(op == 1)
    {
        return new Car();
    }
    else if(op == 2)
    {
        return new Bike();
    }
    else
    return NULL;
}

int main()
{
   Tyre* t1 = Tyre::factory(1);
   t1->tyre();
   t1 = Tyre::factory(2);
   t1->tyre();
   
   

}
