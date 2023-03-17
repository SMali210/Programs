#include<iostream>
using namespace std;

struct node
{
      int data;
      struct node * next;
};
class Stack
{
      public:
         struct node * First;
         int iCount;

         Stack();

         bool InStackEmpty();
         void Push(int no); // Insert
         int Pop();    // Delete
         void Display();
}
Stack :: Stack()
{

}
bool Stack :: InStackEmpty()
{

}
void Stack :: Push(int no)
{

}
int Stack :: Pop()
{

}
void Stack :: Display()
{
      
}
int main()
{


      return 0;
}