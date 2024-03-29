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


void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       // 1 Allocate memory
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  // If linked list is empty
    {
        *First = newn;
    }
    else                // If linked list contains atleast one node
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}
void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) 
    {
        *First = newn;
    }
    else                
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}
void DeleteFirst(PPNODE First)
{
      PNODE temp = *First;

      if(*First == NULL)
      {
            return;
      }
      else if((*First)-> next == NULL)
      {
            free(*First);
            *First = NULL;
      }
      else
      {
            (*First) = (*First)->next;
            free(temp);
      }
}
void DeleteLast(PPNODE First)
{
      PNODE temp = *First;

      if(*First == NULL)
      {
            return;
      }
      else if((*First)-> next == NULL)
      {
            free(*First);
            *First = NULL;
      }
      else
      {
            while(temp ->next->next !=NULL)
            {
                  temp = temp -> next;
                  
            }
            free(temp->next);
            temp ->next = NULL;
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

        temp = *First;

        for(iCnt = 1;iCnt<ipos-1;iCnt++)
        {
            temp = temp -> next;
        }

        newn ->next = temp ->next;
        temp->next = newn;

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
            free(temp2);
      }
}
int main()
{
    PNODE Head = NULL;
    int iChoice = 0;
    int ipos = 0 ,iRet = 0,iNo = 0;

      printf("Welcome to the data structure appliction writern by Marvellous Infosystem \n");
    while(1)  //  unconditional loop
    {
      printf("---------------------------------------------\n");
      printf("Plese Select the desired option :\n");
      printf("1 : Insert new node at First Postion\n");
      printf("2 : Insert new node at Last Postion\n");
      printf("3 : Insert new node at given Postion\n");
      printf("4 : Delete new node at First Postion\n");
      printf("5 : Delete new node at Last Postion\n");
      printf("6 : Delete new node at given Postion\n");
      printf("7 : Disply the contaents of Linked List\n");
      printf("8 : Count The Number Of Nodes\n");

      scanf("%d",&iChoice);

      switch(iChoice)
      {
            case 1:
                  printf("Enter the data that you want to insert\n");
                  scanf("%d",&iNo);

                  InsertFirst(&Head,iNo);

                  break;

            case 2:

                  printf("Enter the data that you want to insert\n");
                  scanf("%d",&iNo);

                  InsertLast(&Head,iNo);


                   break;

            case 3:
                   printf("Enter the data that you want to insert\n");
                  scanf("%d",&iNo);

                  printf("Enter The Postion\n");
                  scanf("%d",&ipos);

                  InserAtPost(&Head,iNo,ipos);

                  break;

            case 4:

                  DeleteFirst(&Head);
                  break;
                  
            case 5:
                  DeleteLast(&Head);

                  break;

            case 6:

                  printf("Enter The Postion\n");
                  scanf("%d",&ipos);

                  DeleteAtPos(&Head,ipos);

                  break;

            case 7:

                  Display(Head);

                  break;

            case 8:
                  iRet = Count(Head);
                  printf("Number of Elements are : %d\n",iRet);

                  break;

            case 9:
                  printf("Thank you using the appliction\n");

                  break;

            default:

                  printf("Invalide option\n");
                  return 0;

                  break;
             }
      printf("----------------------------------------\n");
    }


    return 0;

}