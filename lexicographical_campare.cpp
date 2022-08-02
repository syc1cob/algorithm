/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// C++ code to demonstrate the working of 
// lexicographical_compare()
  
#include<iostream>
#include<algorithm> // for lexicographical_compare()
#include <string.h>
using namespace std;

// helper function to convert all into lower case:
bool comp (char s1, char s2)
{
    return tolower(s1)<tolower(s2);
}

int main()
{
    // initializing char arrays
    char one[] = "getoutofthehouse";
    char two[] = "gfg";
    

    // using lexicographical_compare for checking 
    // is "one" is less than "two"
    if( lexicographical_compare(one, one+13, two, two+3))
    {
        cout << "getoutofthehouse is lexicographically less than gfg\n";
          
    }
    else
    {
        cout << "getoutofthehouse is not lexicographically less than gfg\n";
          
    }
    
    char three[] = "Gfg";
    // using lexicographical_compare for checking 
    // is "one" is less than "two"
    // returns true this time as all converted into lowercase
    if( lexicographical_compare(one, one+13, three, three+3, comp))
    {
        cout << "getoutofthehouse is lexicographically less ";
        cout << "than Gfg( case-insensitive )\n";
          
    }
    else
    {
        cout << "getoutofthehouse is not lexicographically less";
        cout<< "than Gfg( case-insensitive )\n";
          
    }
    
    char dictionary[][100] = {
        {'a','b','a','c','u','s'},
        {'a','p','p','l','e'},
        {'c','a','r'},
        {'a','b','b','a'}
    };
    
    char min[] = "zzzzzzz";
    
    for (auto item: dictionary){
        if(lexicographical_compare(item, item+strlen(item),
                               min, min+strlen(min))){
            strcpy(min, item);
        }
    }
    std::cout<<"First item in dictionary is: "<< min<<std::endl;
      
}
