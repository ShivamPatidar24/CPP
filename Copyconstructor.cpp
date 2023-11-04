#include<iostream>
using namespace std;;

class Wall
{
   int height;
   int weight;
   
   public:
    Wall(int height, int weight)
    {
        this->height=height;
        this->weight=weight;
    }
    
    Wall(Wall &obj)
    {
        height =obj.height;
        weight =obj.weight;
    }
    
    void SetData(int a,int b)
    {
    	height = a;
    	weight = b;
	}
    
    void printdata()
    {
        cout<<height*weight<<endl;;
    }
};

int main()
{
    Wall wall1(2,4);
    Wall wall2 = wall1;
    wall1.printdata();
    wall2.printdata();
    wall2.SetData(6,7);
    wall1.printdata();
    wall2.printdata();
    
    
    
    
    return 0;
}
