#include<iostream>
using namespace std;

class Singleton
{
    private:
    int data;
    static Singleton *instance;
    Singleton()
    {
        
    }
    Singleton(int data)
    {
        this->data=data;
    }
    public:
    
    static Singleton* GetInstance()
    {
        if(instance!=NULL)
        {
            return instance;
        }
        else
        {
            return new Singleton();
        }
    }
    
    void SetData(int data)
    {
        this->data=data;
        cout << "set data is : " << data << endl;
    }
    
    int GetData()
    {
        return data;
    }
    
};

Singleton* Singleton::instance = NULL;
  
int main()
{
 Singleton* s = Singleton::GetInstance();
 s->SetData(8);
 cout << "get data is : " << s->GetData();
}
