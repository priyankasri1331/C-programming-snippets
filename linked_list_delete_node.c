#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* next;
    int val;
};

void insert_end(struct node* node, int num)
{
    struct node* curr_ptr = node;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    if(curr_ptr == NULL)
    {
        return;
    }

    while(curr_ptr->next != NULL)
    {
        curr_ptr = curr_ptr->next;
    }

    curr_ptr->next = new_node;
    new_node->val = num;
    new_node->next = NULL;

}

void insert_at(struct node* node, int loc, int value)
{
    struct node* curr_ptr = node;
    struct node* new_node = (struct node*)(malloc(sizeof(struct node)));
    new_node->val = value;
    int index = 2;

    while(curr_ptr != NULL)
    {
        if(index == loc)
        {
            new_node->next = curr_ptr->next;
            curr_ptr->next = new_node;
            break;
        }
            curr_ptr = curr_ptr->next;
            index++;
    }

}

void delete_node(struct node* node, int loc)
{
    struct node* curr_ptr = node;
    struct node* curr_ptr_next;

    int index = 1;
    while (curr_ptr->next != NULL)
    {
        if(index == (loc - 1))
        {        
            curr_ptr_next = curr_ptr->next;
            curr_ptr->next = curr_ptr->next->next;
            free(curr_ptr_next);
            break;
        }
        curr_ptr = curr_ptr->next;
        index++;
    }

}

void delete_num(struct node* node, int num)
{
    struct node* curr_ptr = node;
    struct node* curr_ptr_prev = node;


    while(curr_ptr->next != NULL)
    {
        if(curr_ptr->val == num)
        {
            //printf("%d", curr_ptr->val);
            curr_ptr_prev->next = curr_ptr->next;
            free(curr_ptr);
            curr_ptr = curr_ptr_prev->next;
            continue;
        }
            //printf("%d\n", curr_ptr->val);
            curr_ptr_prev = curr_ptr;
            curr_ptr = curr_ptr->next;
    }

}


int main()
{
    struct node head;

    struct node* curr_node;
    curr_node = &head;

    head.val = 4;
    head.next = NULL;
    insert_end(&head, 5);
    insert_end(&head, 6);
    insert_end(&head, 7);
    insert_end(&head, 8);
    insert_at(&head, 2, 2);
    insert_at(&head, 3, 3);
    insert_at(&head, 3, 3);
    insert_at(&head, 6, 3);
    //delete_node(&head, 3);
    //delete_node(&head, 6);
    delete_num(&head, 3);
    //delete_num(&head, 5);



    while(curr_node != NULL)
    {
        printf("%d \t", curr_node->val);
        curr_node = curr_node->next;
        
    }
    return 0;
}



