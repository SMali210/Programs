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
};
Stack :: Stack()
{
      First = NULL;
      iCount = 0;
}
bool Stack :: InStackEmpty()
{
      if(iCount == 0)
      {
            return true;
      }
      else
      {
            return false;
      }
}
void Stack :: Push(int no)    // InsertFirst
{
      struct node * newn = new node;
      newn->data = no;
      newn->next = NULL;

      if(First == NULL)
      {
            First = newn;
      }
      else
      {
            newn->next = First;
            First = newn;
      
      }
      iCount++;
      cout<<"gets Pushed in the stack Succesfuly"<<"\n";
}
int Stack :: Pop()     // DeleteFirst
{
      if(First == NULL)
      {
            cout<<"Unable to pop the elemnts as stack is empty"<<"\n";
            return -1;

      }
      else
      {
            int value = First ->data;
            struct node * temp = First;

            First = First->next;
            delete temp;

            iCount --;
            return value;
      }
}
void Stack :: Display()
{
      if(First == NULL)
      {
            cout<<"stack is empty"<<"\n";
      }
      else
      {
            cout<<"Elements of Linked List are :";
            struct node * temp = First;

            while(temp !=NULL)
            {
                  cout<<"|"<<temp->data<<"|->";
                  temp = temp->next;
            }
            cout<<"NULL"<<"\n";
      }
}
int main()
{

      Stack obj;

      obj.Push(11);
      obj.Push(21);
      obj.Push(51);
      obj.Push(101);
      
      obj.Display();
      
      int iRet = obj.Pop();
      cout<<"Poped element is :"<<iRet<<"\n";

      return 0;
}