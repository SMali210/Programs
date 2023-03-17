#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool LoopCheak(PNODE First)
{
      PNODE Student = First;
      PNODE Teacher = First;
      bool flag  = false;

      while((Teacher !=NULL)&&(Teacher->next !=NULL))
      {
            Student = Student->next;
            Teacher = Teacher->next->next;

            if(Student == Teacher)
            {
                  flag =true;
                  break;
            }
      }
      return flag;
}
int main()
{
    PNODE Head = NULL;
    bool bRet = false;

    InsertFirst(&Head, 151);// 
    InsertFirst(&Head, 101);// 
    InsertFirst(&Head, 111);//  
    InsertFirst(&Head, 51);//
    InsertFirst(&Head, 21);// 
    InsertFirst(&Head, 11);// 
    
    PNODE  temp1 = Head;
     PNODE temp2 = Head;

      temp1 = temp1->next->next;
      temp2 = temp2->next->next->next->next->next;

      temp2->next = temp1; // Loop Craete

      bRet = LoopCheak(Head);
      if(bRet == true)
      {
            printf("There is Loop\n");
      }
      else
      {
            printf("There is no Loop\n");
      }

    return 0;
}
