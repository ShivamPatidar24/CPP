#include <iostream>
#include <string>


int main() {
    std::string input = "11101100";
    int one = 0;
    int zero = 0;
    int x = input.length();
    for(int i=0;i<x;i++)
    {
        if(input[i]=='1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    
    
    // std::string s2 = "";
    // for(int i=0;i<one;i++)
    // {
    //     s2 += '1';
    // }
    // for(int i=0;i<zero;i++)
    // {
    //     s2 += '0';
    // }
    
    
    
    
    // std::string s2 = "";
    // for(int i=0;i<x;i++)
    // {
    //     if(i<one)
    //     {
    //         s2 += '1';
    //     }
    //     else
    //     {
    //         s2 += '0';
    //     }
    // }
    
    
    
    for(int i=0;i<x;i++)
    {
        if(i<one)
        {
            input[i] = '1';
        }
        else
        {
            input[i] = '0';
        }
    }
    std::cout << "Sorted string: " << input << std::endl;
    return 0;
}

