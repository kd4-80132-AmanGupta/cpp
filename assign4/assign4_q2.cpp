// Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
// Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
// given, allocate stack of size 5.
// Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().
#include<iostream>
using namespace std;

class Stack{

private :
int size;
int top;
int *arr;

public :
Stack(){
  this->size=5;
  this->top=-1;
   arr = new int[this->size];
  }
Stack(int size){
  this->size=size;
  this->top=-1;
  arr = new int[this->size];
}

void push(){
  if(top<size-1){
    ++top;
    cout<<"enter a value to push into stack:";
    cin>>arr[top];
    cout<<"value pushed into the stack\n";
  }
  else 
  cout<<"cannot be pushed, stack if full\n";

}
void pop(){
  if(top==-1){
    cout<<"stack is empty,cannot be pop\n";
  }
  else
  arr[top]=0;
  --top;
  cout<<"one element popped\n";
}
void peek(){
if(top==-1)
cout<<"stack is empty,nothing to peek\n";
else
cout<<arr[top]<<endl;
}
void isEmpty(){
  if(top==-1)
  cout<<"stack is empty\n";
  else
  cout<<"stack is not empty\n";
}
void isFull(){
  if(top==size-1)
  cout<<"stack is full\n";
  else
  cout<<"stack is not full\n";
}
void print(){
  for(int i=0;i<size;i++){
    cout<<"for index : "<<i<<" :value = "<<arr[i]<<endl;
  }
}
void destroy(){
  delete[] arr;
}

};
int main(){
  Stack s(5);
  int choice;
  do{
    cout<<"****************************************\n";
    cout<<"enter 1. to push\n";
    cout<<"enter 2. to pop\n";
    cout<<"enter 3. to peek\n";
    cout<<"enter 4. to check stack isEmpty\n";
    cout<<"enter 5. to check stack isFull\n";
    cout<<"enter 6. to print the values of satck\n";
    cout<<"enter any no. to EXIT\n";
    cout<<"****************************************\n";
    cin>>choice;

    switch(choice){
      case 1 : s.push();
      break;
      case 2 : s.pop();
      break;
      case 3 : s.peek();
      break;
      case 4 : s.isEmpty();
      break;
      case 5 : s.isFull();
      break;
      case 6 : s.print();
      break;
      default :choice=0;
      break; 
    }

  }while(choice);
  s.destroy();

  return 0;
}
