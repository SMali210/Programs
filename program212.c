#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
      int data;
      struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,PPNODE Last ,int no)
{
      PNODE newn = (PNODE)malloc(sizeof(NODE));

      newn->data = no;
      newn->next = NULL;

      if((*First == NULL)&&(*Last == NULL))  // Empty LL
      {
            *First = *Last = newn;
            (*Last)->next = *First;
      }
      else // At Contains at least 
      {
            newn->next = *First;
            *First = newn;
            (*Last)->next = *First;
      }
}
void InsertLast(PPNODE First,PPNODE Last ,int no)
{
      PNODE newn = (PNODE)malloc(sizeof(NODE));

      newn->data = no;
      newn->next = NULL;

      if((*First == NULL)&&(*Last == NULL))  // Empty LL
      {
            *First = *Last = newn;
            (*Last)->next = *First;
      }
      else // At Contains at least 
      {
            (*Last)->next = newn;
            (*Last) = newn;
            (*Last)->next = *First;
      }
}
void InsertATPoision(PPNODE First,PPNODE Last,int no,int ipos)
{
    int iNodeCnt = 0;
    iNodeCnt = Count(*First,*Last);
    PNODE newn = NULL;
    PNODE temp = *First;
    int icnt = 0;

    if((ipos<1)||(ipos > iNodeCnt + 1))
    {
            return;
    }

    if(ipos == 1)
    {
       InsertFirst(First,Last,no);
    }
    else if(ipos == iNodeCnt + 1)
    {
      InsertLast(First,Last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

         newn->data =no;
         newn->next = NULL;

         for(icnt = 1;icnt<ipos-1;icnt++)
         {
            temp = temp->next;
         }

         newn->next = temp->next;
         temp->next = newn;

    }
     

}
void DeleteFirst(PPNODE First,PPNODE Last)
{
      if((*First == NULL)||(*Last==NULL))
      {
            return;
      }
      else if(*First==*Last) // Singly node in LL
      {
            free(*First);  // (*Last)pn chalele 
            *First = NULL;  
            *Last = NULL; 
      }
      else // more than one Node
      {
            *First = (*First)->next;
            free((*Last)->next);
            (*Last)->next = *First;

            // *First = *First->next
            // free(temp);
            //(*Last)->next = *First;
      }
}
void DeleteLast(PPNODE First,PPNODE Last)
{
      PNODE temp = *First;

      if((*First==NULL)||(*Last==NULL))
      {
            return;
      }
      else if(*First==*Last) // Singly node in LL
      {
            free(*First);
            *First = NULL;  // 
            *Last = NULL; 
      }
      else // more than one Node
      {
            while(temp->next !=*Last)
            {
                  temp = temp->next;
            }

            free(temp->next);  // free(*Last);
            *Last = temp;
            (*Last)->next = *First;
      }
}
void DeleteAtPos(PPNODE First,PPNODE Last,int ipos)
{
      PNODE temp1 = *First;
      PNODE temp2 = NULL;
      int NodeCnt = 0 ,icnt =0;
      NodeCnt = Count(*First,*Last);

      if((ipos < 1)||(ipos >(NodeCnt)))
      {
            return;
      }
      
      if(ipos == 1)
      {
            DeleteFirst(First ,Last);
      }
      else if(ipos == NodeCnt)
      {
            DeleteLast(First,Last);
      }
      else
      {
            for(icnt = 1;icnt<ipos-1;icnt++)
            {
                  temp1 = temp1->next;
            }

            temp2 = temp1->next;
            temp1->next = temp2->next;

            free(temp2);
          
      }
}
void Display(PNODE First,PNODE Last)
{
      printf("Elements of Linked list are : \n");

      do
      {
            printf(" | %d |->",First->data);
            First = First -> next;
      }while(First != Last->next);
      printf("\n");
}
int Count(PNODE First,PNODE Last)
{
      int icnt = 0;
      
      do
      {     
            icnt++;
            First = First -> next;
      }while(First != Last->next);
      printf("\n");
     return icnt;
     
}

int main()
{
      PNODE Head = NULL;
      PNODE Tail = NULL;
      int iRet = 0;

      InsertFirst(&Head,&Tail,51);
      InsertFirst(&Head,&Tail,21);
      InsertFirst(&Head,&Tail,11);

      InsertLast(&Head ,&Tail,101);
      InsertLast(&Head ,&Tail,111);
      InsertLast(&Head ,&Tail,121);

      Display(Head,Tail);

      iRet = Count(Head,Tail);

      printf("Numbers of LinkedList are : %d\n ",iRet);

     InsertATPoision(&Head,&Tail,105,5);
      Display(Head,Tail);

      iRet = Count(Head,Tail);
      printf("Numbers of LinkedList are : %d\n ",iRet);

      DeleteFirst(&Head,&Tail);
      Display(Head,Tail);

      iRet = Count(Head,Tail);
      printf("Numbers of LinkedList are : %d\n ",iRet);

      DeleteLast(&Head,&Tail);
      Display(Head,Tail);

      iRet = Count(Head,Tail);
      printf("Numbers of LinkedList are : %d\n ",iRet);

      DeleteAtPos(&Head,&Tail,3);
       Display(Head,Tail);
      iRet = Count(Head,Tail);
      printf("Numbers of LinkedList are : %d\n ",iRet);

      return 0;
}