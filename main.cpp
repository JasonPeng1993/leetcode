#include <iostream>
#include "leetcode.h"


union U{
    int age;
    char c;
};

int main(int, char**) 
{


    U u;
    
    u.c = 'h';
    u.age = 10;
    std::cout << u.age << " " << u.c;
}
