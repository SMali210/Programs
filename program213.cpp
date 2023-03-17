#include<iostream>
using namespace std;

#pragma pack(1)
struct node      
{
      int data;
      struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCircular
{
      public:
      PNODE First;
      PNODE Last;
      //int iCount;

      SinglyCircular();   // constructor

      void InsertFirst(int no);  // Behaviour 
      void InsertLast(int no);
      void InsertATPosition(int no ,int ipos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteATPosition(int ipos);

      void Display();
      int Count();
};
SinglyCircular :: SinglyCircular()
{
      First = NULL;
      Last = NULL;
      //iCount = 0;
}
void SinglyCircular :: InsertFirst(int no)
{
      //PNODE newn = (PNODE)malloc(sizeof(NODE));
      PNODE newn = new NODE;

      newn->data = no;
      newn->next = NULL;

      if((First == NULL)&&(Last == NULL))  // Empty LL
      {
            First = Last = newn;
            (Last)->next = First;
      }
      else // At Contains at least 
      {
            newn->next = First;
            First = newn;
            (Last)->next = First;
      }
}
void SinglyCircular ::InsertLast(int no)
{
      //PNODE newn = (PNODE)malloc(sizeof(NODE));
      PNODE newn = new NODE;
      newn->data = no;
      newn->next = NULL;

      if((First == NULL)&&(Last == NULL))  // Empty LL
      {
            First = Last = newn;
            (Last)->next = First;
      }
      else // At Contains at least 
      {
            (Last)->next = newn;
            (Last) = newn;
            (Last)->next = First;
      }
}
void SinglyCircular :: InsertATPosition(int no ,int ipos)
{
    int iNodeCnt = 0;
    iNodeCnt = Count();
    PNODE newn = NULL;
    PNODE temp = First;
    int icnt = 0;

    if((ipos<1)||(ipos > iNodeCnt + 1))
    {
        return;
    }

    if(ipos == 1)
    {
       InsertFirst(no);
    }
    else if(ipos == iNodeCnt + 1)
    {
      InsertLast(no);
    }
    else
    {
       // newn = (PNODE)malloc(sizeof(NODE));
         newn = new NODE;
         newn->data = no;
         newn->next = NULL;

         for(icnt = 1;icnt<ipos-1;icnt++)
         {
            temp = temp->next;
         }

         newn->next = temp->next;
         temp->next = newn;
    }

}
void SinglyCircular :: DeleteFirst()
{
      if((First == NULL)||(Last==NULL))
      {
            return;
      }
      else if(First==Last) // Singly node in LL
      {
            //free(*First);  // (*Last)pn chalele 
            delete First;
            First = NULL;  
            Last = NULL; 
      }
      else // more than one Node
      {
            First = (First)->next;
           // free((*Last)->next);
           delete Last->next;
            (Last)->next = First;

            // *First = *First->next
            // free(temp);
            //(*Last)->next = *First;
      }
}
void SinglyCircular::DeleteLast()
{
      PNODE temp = First;

      if((First==NULL)||(Last==NULL))
      {
            return;
      }
      else if(First==Last) // Singly node in LL
      {
           // free(*First);
           delete First;
            First = NULL;  // 
            Last = NULL; 
      }
      else // more than one Node
      {
            while(temp->next !=Last)
            {
                  temp = temp->next;
            }

           // free(temp->next);  // free(*Last);
           delete temp->next;
            Last = temp;
            (Last)->next = First;
      }
}
void SinglyCircular::DeleteATPosition(int ipos)
{
      PNODE temp1 = First;
      PNODE temp2 = NULL;
      int NodeCnt = 0 ,icnt =0;
      NodeCnt = Count();

      if((ipos < 1)||(ipos >(NodeCnt)))
      {
            return;
      }
      
      if(ipos == 1)
      {
            DeleteFirst();
      }
      else if(ipos == NodeCnt)
      {
            DeleteLast();
      }
      else
      {
            for(icnt = 1;icnt<ipos-1;icnt++)
            {
                  temp1 = temp1->next;
            }

            temp2 = temp1->next;
            temp1->next = temp2->next;

            //free(temp2);
            delete temp2;
          
      }
}
void SinglyCircular::Display()
{
      PNODE temp = First;

      cout<<"Elements of Linked list are :"<<" \n";

      do
      {
            cout<<"|"<<temp->data<<"|->";
            temp = temp -> next;
      }while(temp != Last->next);
      cout<<"\n";
}
int SinglyCircular::Count()
{
      int icnt = 0;
      PNODE temp = First;
      
      do
      {     
            icnt++;
            temp = temp -> next;
      }while(temp != Last->next);
      printf("\n");
     return icnt;
     
}

int main()
{
      SinglyCircular obj;
      int  iRet = 0;

      cout<<"Size of Object are :"<<sizeof(obj)<<"\n";

      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);
      obj.Display();

      obj.InsertLast(101);
      obj.InsertLast(111);
      obj.InsertLast(121);

      obj.Display();
      iRet = obj.Count();

      cout<<"Numbers of Nodes Of LinkedList are :"<<iRet<<"\n";

     obj.InsertATPosition(105,5);

      obj.Display();
      iRet = obj.Count();
      cout<<"Numbers of Nodes Of LinkedList are :"<<iRet<<"\n";

      obj.DeleteFirst();
      obj. Display();
      iRet = obj.Count();
      cout<<"Numbers of Nodes Of LinkedList are :"<<iRet<<"\n";

      obj.DeleteLast();
      obj. Display();
      iRet = obj.Count();
      cout<<"Numbers of Nodes Of LinkedList are :"<<iRet<<"\n";

    obj.DeleteATPosition(4);
     obj. Display();
     iRet = obj.Count();
      cout<<"Numbers of Nodes Of LinkedList are :"<<iRet<<"\n";

      return 0;

}