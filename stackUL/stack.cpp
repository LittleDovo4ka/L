#include "stack.hpp"

stack::stack(char b) {
    a = b;
    tail = NULL;
}
stack::stack(){
        cout<<"Enter a: ";
        cin>>a;
        tail = NULL;
    }
    
stack* stack::Push(stack* s1, stack* s2) {
        s2->tail = s1;
        return s2;
    }
    
stack* stack::Pop(stack* s1) {
    stack* del = s1;
        s1 = s1->tail;
        delete del;
        return s1;
    }
    
    void stack::CoutS(stack* s1) {
        if(s1 == NULL) {
            cout<<"NULL\n";
            return;
        }
        for(stack* I = s1; I!=NULL; I = I->tail) {
            cout<<I->a<<" ";
        }
        cout<<"\n";
    }
    
    int stack::TopV(stack* s1) {
        return s1->a;
    }
    
    bool stack::CLEAR(stack* s1) {
        if(s1!=NULL) return 1;
        if(s1==NULL) return 0;
        return 0;
    }
    
stack* stack::Clear(stack* s1) {
    stack* I = s1;
        while (I!=NULL) {
            stack* N = I->tail;
            delete I;
            I = N;
        }
        return NULL;
    }
