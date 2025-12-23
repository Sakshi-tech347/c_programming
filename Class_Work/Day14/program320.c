#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    
};

typedef struct node NODE ;
typedef struct node  *PNODE;
typedef struct node **PPNODE;

void InserFirst(PPNODE first , int  no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn ->data = no;
    newn->next = NULL;

    if((*first) == NULL)   //linked list is empty
    {
        (*first) = newn;
    }
    else                //linked  list is  atleast 1 node 
    {
          newn-> next = *first;
        (*first) = newn;
    }
}

    void InserLast(PPNODE first, int  no)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn ->data = no;   //shirt no
    newn->next = NULL;  //hat khali

    if(*first == NULL)   //linked list is empty
    {
        (*first) = newn;
    }
    else                //linked  list is  atleast 1 node 
    {
      temp = (*first);

      while ((temp->next) != NULL)
      {
         temp = temp->next;
      }
      temp->next = newn;
    }
}
void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first =first -> next;
    }
    printf("NULL \n");
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first!= NULL)
    {
        iCount ++;
        first = first->next;

    }
    return iCount;
}
int main()
{
    int iRet = 0;
    PNODE head = NULL;
    InserFirst(&head,75);
    InserFirst(&head,51);
    InserFirst(&head,21);
    InserFirst(&head,11);
    

    Display(head);
    iRet = Count(head);
    printf("number of node are : %d ",iRet);
    
    InserLast(&head,101);
    InserLast(&head,111);
    InserLast(&head,121);

    Display(head);
    iRet = Count(head);
    printf("number of node are : %d ",iRet);
    return 0;
}
