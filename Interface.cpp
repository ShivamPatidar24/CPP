#include<iostream>
class ILogger
{
    public:
   virtual void log() = 0;
};
class ConLogger:public ILogger
{
    public:
    void log()
    {
        std::cout<<"ConLogger";
    }
};

class DdsLogger:public ILogger
{
    public:
    void log()
    {
        std::cout<<"DdsLogger";
    }
};

int main()
{
    ILogger *c = new ConLogger;
    c->log();
    
    c = new DdsLogger;
    c->log();
}



