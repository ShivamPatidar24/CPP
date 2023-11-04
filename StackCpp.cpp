#include<iostream>
using namespace std;

#define Size 50 
  
int Top=-1, stack[Size];
int i;
void Push();
void Pop();
void display();
void peek();
  
int main()
{
    int choice;
    char flag;
     
    do   
    {
        cout << "STACK OPERATION WITH INTEGER : ";
        cout << "\n1.PUSH .1\n2.POP .2\n3.DISPLAY .3\n4.PEEK .4\n5.EXIT .5";
        cout << "\n\nEnter the choice:";
        cin >> choice;
         
        switch(choice)
        {
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: display();
                    break;
            case 4: peek();
                    break;
            case 5: exit(0);
                    
             
            default: cout << "\nInvalid choice!!";
            break;
        }cout << "\n Do you want to Continue ? press y or n \n";
        cin >> flag;

    }while(flag=='y');
    
}
  
void Push()
{
    int x;
     
    if(Top==Size-1)
    {
        cout << "\nSTACK OVERFLOW";
    }
    else
    {
        cout << "\n ENTER THE ELEMENT = ";
        cin >> x;
        Top=Top+1;
        stack[Top]=x;
    }
}
  
void Pop()
{
    if(Top==-1)
    {
        cout << "\n Stack Underflow";
    }
    else
    {
        cout << "\nPopped element:  " << stack[Top];
        Top=Top-1;
    }
}
  
void display()
{
     
     
    if(Top==-1)
    {
        cout << "\n  Stack Underflow";
    }
    else
    {
        cout << "\nELEMENT IN STACK \n";
        
        for( i=Top;i>=0;--i)
            cout << ":" << " " <<stack[i];
    }
}

void peek()
{
     
     
    if(Top==-1)
    {
            cout << "STACK UNDERFLOW";
    }
    else
    {
        cout << "\nTOP ELEMENT OF STACK \n";
        
      
            cout << "Top is : " << stack[Top];
    }
}
