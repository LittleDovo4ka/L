#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

struct stack {
    char a;
    struct stack* tail;
    
    stack(char b);
    stack();
    
    stack* Push(stack* s1, stack* s2);
    
    stack* Pop(stack* s1);
    
    void CoutS(stack* s1);
    
    int TopV(stack* s1);
    
    bool CLEAR(stack* s1);
    
    stack* Clear(stack* s1);
};

#endif /* stack_hpp */
