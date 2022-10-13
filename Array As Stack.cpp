#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 1000
//a c++ code to implement an array in the as a std::stack

class Stack{
    int size;
    public:
    int stack[MAXSIZE];
    Stack(){
        size=-1;
    }
    bool push(int x);
    int pop();
};
//push function to determine whether the stack is empty in order to be able to push a new element into it
bool Stack::push(int x){
    if(size>=1000){
        cout<<"Stack is full and can't accept any more elements";
        return false;
    }
    else{
       stack[size++]=x;
       cout<<x<<" pushed into stack\n";
       return true;
    }
    
}
//pop function to return the top of the stack after it is popped
int Stack::pop(){
   if(size<0){
       cout<<"stack underflow";
       return 0;
   } 
   else{
       int x=stack[size-=1];
       return x;
   }
  
}
int main(){
    
    Stack stacky;
    stacky.push(1);
    stacky.push(2);
    stacky.push(3);
    int popped=stacky.pop();
    cout<<popped<<" was popped from the stack";
    
    return 0;
}
