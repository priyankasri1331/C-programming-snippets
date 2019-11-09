#include <stdio.h>

struct Node
{
int data;
struct Node* NextNodePtr;
};

struct Head
{
struct Node* NextNodeToHead;
};
void insert(struct Head *h,struct Node *n);
int main()
{

struct Head h;
struct Node n1,n2,n3;
n1.data = 1;
n1.NextNodePtr = &n2;
n2.data = 2;
n2.NextNodePtr = &n3;
n3.data = 3;
n3.NextNodePtr = NULL;
h.NextNodeToHead = &n1;

struct Node* temp = h.NextNodeToHead;

while(temp != NULL)
{
    printf("%d-",(*temp).data);
    printf("%p-",(*temp).NextNodePtr);
    temp = (*temp).NextNodePtr;
}
/*---------------------------------------------------*/

struct Head thale = {NULL};
struct Node x = {6,NULL};
struct Node y = {3,NULL};
struct Node z = {1,NULL};


insert(&thale,&x);
insert(&thale,&z);
insert(&thale,&y);

struct Node* temp1 = thale.NextNodeToHead;

while(temp1 != NULL)
{
    printf("\n%d",(*temp1).data);
    temp1 = (*temp1).NextNodePtr;
}

return 0;
}

void insert(struct Head *h,struct Node *n)
{
    struct Node* temp = h->NextNodeToHead;

    if(temp == NULL)
    {
        h->NextNodeToHead = n;
    }

    printf("Enter---");

    while(temp!=NULL)
    {
        printf("Loop---");

        if(temp->NextNodePtr == NULL)
        {
            temp->NextNodePtr = n;
            break;
        }

        temp = temp->NextNodePtr;

    }
    printf("Exit---");

}

