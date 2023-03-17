#include<iostream>
using namespace std;

template<class T>
struct node
{
      T data;
      struct node * next;
};
template<class T>
class Stack
{
      public:
         struct node<T> * First;
         int iCount;

         Stack();

         bool InStackEmpty();
         void Push(T no); // Insert
         T Pop();    // Delete
         void Display();
};
template<class T>
Stack<T> :: Stack()
{
      First = NULL;
      iCount = 0;
}
template<class T>
bool Stack <T>:: InStackEmpty()
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
template<class T>
void Stack<T> :: Push(T no)    // InsertFirst
{
      struct node<T> * newn = new node<T>;
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
template<class T>
T Stack<T> :: Pop()     // DeleteFirst
{
      if(First == NULL)
      {
            cout<<"Unable to pop the elemnts as stack is empty"<<"\n";
            return -1;

      }
      else
      {
            int value = First ->data;
            struct node<T> * temp = First;

            First = First->next;
            delete temp;

            iCount --;
            return value;
      }
}
template<class T>
void Stack<T> :: Display()
{
      if(First == NULL)
      {
            cout<<"stack is empty"<<"\n";
      }
      else
      {
            cout<<"Elements of Linked List are :";
            struct node<T> * temp = First;

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

      Stack<int> obj;

      obj.Push(11);
      obj.Push(21);
      obj.Push(51);
      obj.Push(101);
      
      obj.Display();
      
      int iRet = obj.Pop();
      cout<<"Poped element is :"<<iRet<<"\n";
      obj.Display();
      

      Stack<float> objf;

      objf.Push(11.5);
      objf.Push(21.5);
      objf.Push(51.25);
      objf.Push(101.58);
      
      objf.Display();
      
      int fRet = objf.Pop();
      cout<<"Poped element is :"<<fRet<<"\n";
      objf.Display();
      

      return 0;
}