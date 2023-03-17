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

int SearchFirstOccurnce(PNODE First,int no)
{
    int Count = 1;
    int ipos = -1;
    while(First !=NULL)
    {
        if(First->data == no)
        {
            ipos = Count;
           break;
        }
        First = First->next;
        Count++;
    }
    return ipos;
}
int SearchLastOccurnce(PNODE First,int no)
{
    int Count = 1;
    int ipos = -1;
    while(First !=NULL)
    {
        if(First->data == no)
        {
            ipos = Count;
          
        }
        First = First->next;
        Count++;
    }
    return ipos;
}
int Frequency(PNODE First,int no)
{
    int Count = 0;
   
    while(First !=NULL)
    {
        if(First->data == no)
        {
           Count++;
          
        }
        First = First->next;
       
    }
    return Count;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 151);// InsertFirst(60,51)
    InsertFirst(&Head, 101);// InsertFirst(60,51)
    InsertFirst(&Head, 111);// InsertFirst(60,51)
    InsertFirst(&Head, 101);// InsertFirst(60,51)
    InsertFirst(&Head, 51);// InsertFirst(60,51)
    InsertFirst(&Head, 101);// InsertFirst(60,21)
    InsertFirst(&Head, 11);// InsertFirst(60,11)
    
    Display(Head);

    iRet = SearchLastOccurnce(Head,101);
    if(iRet == -1)
    {
        printf("There is no such element in LL\n");
    }
    else
    {
        printf("Elements is there at index: %d\n",iRet);
    }

    iRet = Frequency(Head,101);
    printf("Freaquency elements are %d\n",iRet);
    return 0;
}
