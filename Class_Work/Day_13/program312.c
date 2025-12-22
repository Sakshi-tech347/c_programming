#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node 
{
    int data;
    struct node * next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

    //call by value
    void Display(PNODE first)
    {

    }

    int count(PNODE first)
    {
        return 0;
    }

    //call by address
    void InsertFirst(PPNODE first ,int no)
    {}

    void InsertLast(PPNODE ,int no)
    {}

    void InsertAtpos(PPNODE ,int no , int pos)
    {}



int main()
{
    PNODE head = NULL;

    Display(head);
    count(head);

    InsertFirst(&head , 11);
    InsertLast(&head, 21);
    InsertAtpos(&head,51,5);

    return 0;
}
