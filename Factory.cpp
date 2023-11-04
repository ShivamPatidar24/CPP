//class Animal {  
//public:  
//    virtual void speak() = 0;  
//    static Animal* createAnimal(int type);  
//};  
//  
//class Dog : public Animal {  
//public:  
//    void speak() {  
//        std::cout << "Woof!" << std::endl;  
//    }  
//};  
//  
//class Cat : public Animal {  
//public:  
//    void speak() {  
//        std::cout << "Meow!" << std::endl;  
//    }  
//};  
//  
//Animal* Animal::createAnimal(int type) {  
//    if (type == 1) {  
//        return new Dog();  
//    } else if (type == 2) {  
//        return new Cat();  
//    } else {  
//        return nullptr;  
//    }  
//}  
//  
//int main() {  
//    Animal* dog = Animal::createAnimal(1);  
//    dog->speak();  
//  
//    Animal* cat = Animal::createAnimal(2);  
//    cat->speak();  
//  
//    return 0;  
//}  

#include<iostream>
using namespace std;

class Gadi
{
    public:
    Gadi()
    {
        
    }
    virtual void name() = 0;
    virtual ~Gadi()
    {
        
    }
    
    static Gadi* factory(int);
};

class Honda: public Gadi
{
    public:
    void name()
    {
        cout << " SHINE " << endl;
    }
    
};

class Tata: public Gadi
{
    public:
    void name()
    {
        cout << " NEXON " << endl;
    }
    
};

Gadi* Gadi::factory(int choice)
{
    if(choice == 1)
    {
        return new Honda();
    }
    else if(choice == 2)
    {
        return new Tata();
    }
    else
    {
        return NULL;
    }
}

int main()
{
    Gadi* g = Gadi::factory(1);
     g->name();
    g = Gadi::factory(2);
    g->name();
    
}








