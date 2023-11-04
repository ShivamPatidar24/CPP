//#include<iostream>
//using namespace std;
//class Singleton
//{
//    private:
//    Singleton()
//    {
//        
//    }
//    
//    public:
//     static Singleton& getInstance()
//     {
//         static Singleton instance;
//           return instance;
//     }
//     
//     void Message()
//     {
//         cout << "msg was print" << endl;
//     }
//};
//
//int main()
//{
//    Singleton& s = Singleton::getInstance();
//    s.Message();
//}


#include<iostream>
using namespace std;
class Singleton
{
    private:
    static Singleton *instance;
    int data;
    Singleton()
    {
        
    }
    Singleton(int data)
    {
        this->data = data;
    }
    
    public:
     static Singleton* getInstance()
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
         this->data = data;
         cout << "Set the Data" << endl;
     }
     int GetData()
     {
         return data;
     }
};

Singleton* Singleton::instance =NULL;
int main()
{
    Singleton* s = Singleton::getInstance();
    s->SetData(120);
    cout << "Data is : " << s->GetData();
}

