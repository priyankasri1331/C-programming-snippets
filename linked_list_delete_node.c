#include<stdio.h>
/*
struct{
    struct node* node;
    struct node* next;
    int val;
};

int main()
{


    
    
    
    return 0;
}


void insert(struct node* node, int num)
{
    struct node* curr_ptr = node;
    struct node* new_node;
    
    while(curr_ptr->next != NULL)
    {
        curr_ptr = curr_ptr->next;
    }

    
    curr_ptr->next = new_node;
    new_node->val = num;


}*/

/*void delete_node(struct node* node, int num)
{
    struct node* curr_ptr;
    struct node* curr_ptr_next = curr_ptr->next;
    

    while(curr_ptr_next!= NULL)
    {
        if(curr_ptr->val == num)
        {


        }


    }



}*/
void foo(int x)
{
    printf("Function called\n");
    int *p;
    printf("%p\n", p);
    printf("%d\n", x);
    x = 10;
    p = &x;

    printf("happened");

}

int main()
{
    int a = 5;
    foo(a);

    printf("\n%d\n", a);
}





