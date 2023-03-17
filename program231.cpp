#include<iostream>

using namespace std;

#pragma pack(1)
struct node
{
      int data;
      struct node *next;
      struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyCircularL
{
      public:
     PNODE First;
     PNODE Last;
      DoublyCircularL();

      void InsertFirst(int no);
      void InsertLast(int no);
      void InserAtPost(int no,int ipos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int ipos);

      void Display();
      int Count();
};    

DoublyCircularL :: DoublyCircularL()
{
      First = NULL;
      Last = NULL;
}
void DoublyCircularL:: InsertFirst(int no)
{
      PNODE newn = new NODE;

      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;

      if((First == NULL)&&(Last == NULL))
      {
            First = newn;
            Last = newn;
           
      }
      else
      {
           newn->next = First;
           (First)->prev = newn;
           First = newn;
      }
      (First)->prev = Last;
      (Last)->next = First;
}
void DoublyCircularL:: InsertLast(int no)
{
      PNODE newn = new NODE;

      newn->data = no;
      newn->next = NULL;
      newn->prev = NULL;

      if((First == NULL)&&(Last == NULL))
      {
           First = newn;
            Last = newn;
      }
      else
      {
            (Last)->next = newn;
            newn->prev = Last;
            Last = newn;
      }
      (First)->prev = Last;
      (Last)->next = First;
}
void DoublyCircularL:: Display()
{
      PNODE temp = First;

      if((First == NULL)&&(Last == NULL))
      {
            cout<<"LinkedList are empty\n";
            return;
      }

      cout<<"Elements of DoublyCircularLinkedList are :\n";

      do
      {
            cout<<"| "<<temp->data<<" | <=>";
            temp = temp->next;
      }while(temp != Last->next);

      cout<<"\n";
}
int DoublyCircularL:: Count()
{
      PNODE temp = First;
     int iCnt = 0;
      if((First == NULL)&&(Last == NULL))
      {
           
            return iCnt;
      }

      do
      {
           iCnt++;
            temp = temp->next;
      }while(temp != Last->next);

      return iCnt;
}
void DoublyCircularL :: DeleteFirst()
{
      if(First == NULL && Last == NULL)
      {
            return;
      }
      else if(First == Last) // singal node
      {
            delete First;
            First = NULL;
            Last = NULL;
      }
      else   // More than one node
      {
            First = (First)->next;

            delete Last->next; // free9(*First ->prev)

            (First)->prev = Last;
            (Last)->next = First;

      }
      
}
void DoublyCircularL:: DeleteLast()
{
      if(First == NULL && Last == NULL)
      {
            return;
      }
      else if(First == Last) // singal node
      {
            delete First;  // (*Last )pn chalel
            First = NULL;
            Last = NULL;
      }
      else   // More than one node
      {
            Last = (Last)->prev;

            free((First)->prev); // Free(*Last->next)

            (First)->prev = Last;
           (Last)->next = First;
      }
     
}
void DoublyCircularL:: InserAtPost(int no ,int ipos)
{
      int iCnt = 0;
      int NodeCnt = 0;
      PNODE newn = NULL;

      PNODE temp  = NULL;

      NodeCnt = Count();

      if((ipos < 1)||(ipos > NodeCnt + 1))
      {
            cout<<"Invalid postion \n";
            return;
      }

      if(ipos == 1)
      {
            InsertFirst(no);
      }
      else if(ipos == NodeCnt +1)
      {
            InsertLast(no);
      }
      else
      {
           PNODE newn = new NODE;
           newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            temp = First;

            for(iCnt = 1;iCnt < ipos-1;iCnt++)
            {
                  temp = temp->next;
            }

            newn->next = temp->next;
            temp->next->prev = newn;

            temp->next = newn;
            newn->prev = temp;
      }
}
void DoublyCircularL:: DeleteAtPos(int ipos)
{
      int iCnt = 0;
      int NodeCnt = 0;

      PNODE temp  = NULL;

      NodeCnt = Count();

      if((ipos < 1)||(ipos > NodeCnt ))
      {
            cout<<"Invalid postion \n";
            return;
      }

      if(ipos == 1)
      {
            DeleteFirst( );
      }
      else if(ipos == NodeCnt )
      {
            DeleteLast();
      }
      else
      {
           
            temp = First;

            for(iCnt = 1;iCnt < ipos-1;iCnt++)
            {
                  temp = temp->next;
            }

           temp->next = temp->next->next;
           delete temp->next->prev;
           temp->next->prev = temp;
      }
}
int main()
{
      DoublyCircularL obj;

      int iRet = 0;

      PNODE Head = NULL;
      PNODE Tail = NULL;

     obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.InsertLast(101);
      obj.InsertLast(111);
      obj.InsertLast(121);

      obj.Display();
      iRet = obj.Count();
      cout<<"Numbers of nodes are : "<<iRet<<"\n";

      obj.InserAtPost(105,5);
      obj.Display();
      iRet = obj.Count();
      cout<<"Numbers of nodes are : "<<iRet<<"\n";
      obj.DeleteAtPos(5);
      obj.Display();
      iRet = obj.Count();
      cout<<"Numbers of nodes are : "<<iRet<<"\n";

      obj.DeleteFirst();
      obj.DeleteLast();

      obj.Display();
      iRet = obj.Count();
      cout<<"Numbers of nodes are : "<<iRet<<"\n";
      
      return 0;
}