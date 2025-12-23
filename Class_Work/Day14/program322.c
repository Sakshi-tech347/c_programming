#include<stdio.h>
#include<stdlib.h>
#pragma pack (1)

struct node
{
    int  data ;
    struct node * next ;

};

typedef struct node NODE;
typedef struct node*  PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
    while(first !=  NULL)
    {
        printf("| %d |->\t",first->data);
        first = first->next;
    }
        printf("Null \n");
}

int count(PNODE first)
{
    int iCount =0;
    while(first != 0)
    {
       iCount++;
       first = first ->next; 
    }
    return iCount;
}

void InsertFirst(PPNODE first ,int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn ->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
        
    }
    else
    {
        newn ->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first ,int no)
{   PNODE temp = NULL;
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn ->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
        
    }
    else
    {
        temp =(*first);
        while (temp-> next  != NULL)
        {
            temp = temp-> next;
        
        }
        temp ->next = newn;
        

    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;
    if(*first == NULL)
    {
        return;
    }
    else if((*first)-> next == NULL)
    {
      free(*first);
      (*first) = NULL;
    }
    else
    {
        temp =(*first);
        (*first) = (*first) ->next;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;
    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp =(*first);
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
           
        }
             free(temp->next);
            temp -> next = NULL;

    }
}




int main()
{

    PNODE head = NULL;
    int iRet = 0;
    

    InsertFirst(&head , 51);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);
    iRet  =count(head);
    printf("number of nodes are :%d\n",iRet);

    InsertLast(&head,10);
    InsertLast(&head,20);
    InsertLast(&head,30);

    Display(head);
    iRet =count(head);
    printf("number of nodes are :%d\n",iRet);

    DeleteFirst(&head);
    Display(head);
    iRet  =count( head);
    printf("number of nodes are :%d\n",iRet);

    DeleteLast(&head);
    Display(head);
    iRet  =count( head);
    printf("number of nodes are :%d\n",iRet);

    return  0;
}
