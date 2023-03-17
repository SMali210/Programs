#include<iostream>
using namespace std;

struct node
{
      int data;
      struct node *next;    // selfreferntial pointer
      struct node *prev;
};

typedef struct node NODE;    
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyLinear
{
      public:   // Access Specifier

      PNODE First;  // Charechteristic of Pointer
      int iCount;   // charcteristic 

      DoublyLinear();   // Default constructor Declerition

      void InsertFirst(int no);  // Function / Behaviour of class decleration
      void InsertLast(int no);
      void InsertAtPosition(int no,int ipos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteATPosition(int ipos);

      void Display();
};

DoublyLinear :: DoublyLinear()   // definationn of constructor
{
      First = NULL;
      iCount = 0;
}
void DoublyLinear :: InsertFirst(int no)  // Define All The Fucnction
{
      PNODE newn = new NODE;

      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;

      if(First==NULL)
      {
            First = newn;
            iCount++;
      }
      else 
      {
            newn->next = First;
            First->prev = newn;
            First = newn;
            iCount++;
      }
}
void DoublyLinear :: InsertLast(int no)
{
      PNODE newn = new NODE;

      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;

      if(First==NULL)
      {
            First = newn;
      }
      else 
      {
           PNODE temp = First;

           while(temp->next!=NULL)
           {
              temp = temp->next;
           }

           temp->next = newn;
           newn->prev = temp;
           iCount++;
      }
}
void DoublyLinear :: InsertAtPosition(int no ,int ipos)
{
      PNODE newn = new NODE;
      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;

      PNODE temp = First;

      if((ipos < 1)||(ipos>iCount+1))
      {
            cout<<"Invalid Poistion :"<<"\n";
            return;
      }

      if(ipos==1)
      {
            InsertFirst(no);
      }
      else if(ipos == iCount)
      {
            InsertLast(no);
      }
      else
      {
            for(int icnt = 1;icnt<ipos-1;icnt++)
            {
                  temp = temp->next;;
            }

            newn->next = temp->next;
            temp->next->prev = newn;
            temp->next = newn;
            newn->prev = temp;
            iCount++;
      }
}
void DoublyLinear :: DeleteFirst()
{
      if(First==NULL)
      {
            return;
      }
      else if(First->next==NULL)
      {
            delete First;
            First = NULL;
            iCount--;
      }
      {
            First = First->next;

            delete First->prev;
            First->prev = NULL;
            iCount--;
      }
}
void DoublyLinear :: DeleteLast()
{
      if(First==NULL)
      {
            return;
      }
      else if(First->next==NULL)
      {
            delete First;
            First = NULL;
            iCount--;
      }
      else
      {
            PNODE temp = First;
          
            while(temp->next->next!=NULL)
            {
                  temp = temp->next;
            }

            delete temp->next;
            temp->next = NULL;
            iCount--;

      }
}     
void DoublyLinear :: DeleteATPosition(int ipos)
{
      PNODE temp1 = First;
      PNODE temp2 = NULL;

      if((ipos < 0)||(ipos > iCount))
      {
            return;
      }

      if(ipos == 1)
      {
            DeleteFirst();
      }
      else if(ipos==iCount)
      {
            DeleteLast();
      }
      else
      {
            for(int icnt =1;icnt<ipos-1;icnt++)
            {
                  temp1 = temp1->next;
            }

            temp2 = temp1->next;
            temp1->next = temp2 ->next;
            temp2->next->prev = temp1;
            delete temp2;
            iCount--;
      }
}
void DoublyLinear :: Display()
{
      cout<<"elements of Linked list are :"<<"\n";
      PNODE temp = First;

      while(temp!=NULL)
      {
            cout<<"|"<<temp->data<<"|<->";

            temp = temp->next;
      }
      cout<<"NULL"<<"\n";
}
int main()
{
      DoublyLinear obj;

      //cout<<"Size of object :"<<sizeof(obj)<<"\n";

      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);
      obj.Display();

      cout<<"Numbers Of nodes of a LinkedList :"<<obj.iCount<<"\n";

      obj.InsertLast(101);
      obj.InsertLast(111);
      obj.InsertLast(121);
      obj.Display();
      cout<<"Numbers Of nodes of a LinkedList :"<<obj.iCount<<"\n";

      obj.InsertAtPosition(105,5);
      obj.Display();
      cout<<"Numbers Of nodes of a LinkedList :"<<obj.iCount<<"\n";

      obj.DeleteFirst();
      obj.Display();
      cout<<"Numbers Of nodes of a LinkedList :"<<obj.iCount<<"\n";

      obj.DeleteLast();
      obj.Display();
      cout<<"Numbers Of nodes of a LinkedList :"<<obj.iCount<<"\n";

      obj.DeleteATPosition(4);
      obj.Display();
      cout<<"Numbers Of nodes of a LinkedList :"<<obj.iCount<<"\n";

      return 0;
}