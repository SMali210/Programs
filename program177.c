#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
      int data;
      struct node * next;
      struct node  *prev;     // X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
      PNODE newn = (PNODE)malloc(sizeof(NODE));

      newn ->data = no;
      newn -> next = NULL;
      newn ->prev = NULL;  // X

      if(*First == NULL)
      {
            *First = newn;
      }
      else
      {
            newn->next = *First;
            (*First)->prev = newn;  //x
            *First = newn;
            
      }

}
void InsertLast(PPNODE First,int no)
{
      PNODE newn = (PNODE)malloc(sizeof(NODE));
      PNODE temp =*First;
      newn ->data = no;
      newn -> next = NULL;
      newn ->prev = NULL;  // X

      if(*First == NULL)
      {
            *First = newn;
      }
      else
      {
            while(temp ->next !=NULL)
            {
                  temp = temp->next;
            }
            temp->next = newn;
            newn->prev = temp;  //X
      }

}
void Display(PNODE First)
{
      printf("Elements of Linked list : \n");

      while(First !=NULL)
      {
            printf("| %d |<=>",First->data);
            First = First->next;
      }
      printf("NULL \n");
}
int Count(PNODE First)
{
      int iCnt = 0;
      while(First !=NULL)
      {
            iCnt++;
            First = First->next;
      }
      return iCnt;
}
void DeleteFirst(PPNODE First)
{
      
      if(*First == NULL)
      {
            return;
      }
      else if((*First)->next==NULL) // LL conatin 1 node
      {
            free(*First);
            *First = NULL;
      }
      else
      {
            *First = (*First)->next;
            free((*First)->prev);  //X
            (*First)->prev = NULL;  //X
      }
}
void DeleteLast(PPNODE First)
{
      PNODE temp = *First;
      if(*First == NULL)
      {
            return;
      }
      else if((*First)->next==NULL) // LL conatin 1 node
      {
            free(*First);
            *First = NULL;
      }
      else
      {
            while(temp ->next->next !=NULL)
            {
                  temp = temp->next;

            }

            free(temp->next);
            temp->next = NULL;
      }
}
void InserAtPost(PPNODE First,int no,int ipos)
{
    int NodeCnt = 0 , iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);

    if((ipos < 1)||(ipos >(NodeCnt + 1)))
    {
        printf("Invalid Position \n");
        return;
    }

    if(ipos==1)
    {
        InsertFirst(First,no);

    }
    else if(ipos == NodeCnt+1)
    {

        InsertLast(First,no);
    }
    else
    {

        newn = (PNODE)malloc(sizeof(NODE));
        newn ->data = no;
        newn ->next = NULL;
        newn->prev  = NULL;

        temp = *First;

        for(iCnt = 1;iCnt<ipos-1;iCnt++)
        {
            temp = temp -> next;
        }

        newn ->next = temp ->next;
        temp->next->prev = newn;  //X
        temp->next = newn;
        newn->prev = temp;   //X
    }
}
void DeleteAtPos(PPNODE First,int ipos)
{
      PNODE temp1 = NULL;
      int iCnt = 0;
     int  NodeCnt = 0;
      PNODE temp2 = NULL;

      NodeCnt = Count(*First);

      if((ipos < 1)||(ipos >NodeCnt))
      {
            return;
      }

      if(ipos == 1)
      {
            DeleteFirst(First);
      }
      else if(ipos == NodeCnt)
      {
            DeleteLast(First);
      }
      else
      {
            temp1 = *First;

            for(iCnt=1;iCnt < ipos-1;iCnt++)
            {
                  temp1 = temp1-> next;
            }

            temp2 = temp1 ->next;

            temp1->next = temp2->next;  //
            temp2->next->prev =temp1;
            free(temp2);
      }
}
int main()
{

      PNODE Head = NULL;
      int iRet = 0;

      InsertFirst(&Head,51);
      Display(Head);

      InsertFirst(&Head,21);
      Display(Head);

      InsertFirst(&Head,11);
      Display(Head);

      InsertLast(&Head,101);
      Display(Head);

      InsertLast(&Head ,111);
      Display(Head);

      InsertLast(&Head,121);
      Display(Head);

      iRet = Count(Head);

      printf("Number of element are :%d\n",iRet);

      InserAtPost(&Head,105,5);
       Display(Head);

      iRet = Count(Head);

      printf("Number of element are :%d\n",iRet);

      DeleteAtPos(&Head,5);
       Display(Head);

      iRet = Count(Head);

      printf("Number of element are :%d\n",iRet);


      DeleteFirst(&Head);
      DeleteLast(&Head);

       Display(Head);

      iRet = Count(Head);

      printf("Number of element are :%d\n",iRet);

      return 0;
}