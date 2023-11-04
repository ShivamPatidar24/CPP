#include<iostream>
#include<string>

std::string compress_string(std::string s)
{
    std::string result = "";
    int count = 1;
    int x = s.length();
    for(int i=1; i<x; i++)
    {
        if(s[i] == s[i-1])
        {
            count++;
        }
        else
        {
            result += s[i-1];
            result += std::to_string(count);
            count = 1;
        }
    }
    
            result += s[s.length()-1];
            result += std::to_string(count);
            return result;
}



int main()
{
    std::string s1 = "SHHIIIVVVVAAAAAMMMMMM";
    std::string s2 = compress_string(s1);
    std::cout << "this is output : " <<s2<<std::endl; 
}
