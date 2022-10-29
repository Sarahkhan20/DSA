//creating linked list in sorted way
#include <stdio.h>
#include <stdlib.h>
struct ll_node{
    int data;
    struct ll_node *next;
};

struct ll_node* insert(struct ll_node *myList, int val)
{
    struct ll_node *hptr;
    hptr=myList;
    struct ll_node *pnew= (struct ll_node*)malloc(sizeof(struct ll_node));
    (*pnew).data=val;
    (*pnew).next=NULL;
    if(hptr==NULL||(*myList).data>val)
    {
        pnew->next=myList;
        myList=pnew;
        return myList;
    }
    else                                            
    {
        while(hptr->next!=NULL && hptr->next->data<val)
        {
            hptr=hptr->next;
        }
        pnew->next=hptr->next;
        hptr->next=pnew;
        return myList;
    }
}

struct ll_node *del(struct ll_node *myList,int val)
{
    struct ll_node *hptr, *nodetodel;
    hptr=myList;
    if(hptr!=NULL)
    {
        if(hptr->data==val)
        {
            myList=hptr->next;
            free(hptr);
            return myList;
        }
        else
        {
            if(hptr->next->data==val)
            {
                nodetodel=hptr->next;
                hptr->next=hptr->next->next;
                free(nodetodel);
                return myList;
            }
            hptr=hptr->next;
        }
    }
    else{
        printf("\n List is empty\n");
    }
}

void display(struct ll_node *myList)
{
    struct ll_node *hptr;
    for(hptr=myList;hptr!=NULL;hptr=hptr->next)
    {
        printf("%d \n",hptr->data);
    }
}

void main()
{
    struct ll_node *head=NULL;
    int choice, val;
    head= insert(head,1);
    head= insert(head,7);
    head= insert(head,8);
    head= insert(head,6);
    head= insert(head,4);
    display(head);
    
    head=del(head,7);
    head=del(head,8);
    printf("\nAfter deleting\n");
      display(head);
}
