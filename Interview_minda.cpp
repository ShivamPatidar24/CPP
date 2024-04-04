#include<iostream>
#include<string>

int main()
{
     std::string s1 = "my- name- is- shivam- patidar";
     
     std::string result = "";
     
     for(int i = 0; i < s1.length(); i++)
     { 
         if(s1[i] != ' ')
         {
             result += s1[i];
         }
     }
     
     std::cout << result << std::endl;
}
