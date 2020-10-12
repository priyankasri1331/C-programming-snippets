#include <stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    struct node *right;
    int val;
};

void insert_bst(struct node* node, int value)
{
    struct node* curr_node = node;
    struct node* curr_node_prev;
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->val = value;
    new_node->right = NULL;
    new_node->left = NULL;
    
    while(curr_node != NULL)
    {
        if(value < curr_node->val)
        {
            curr_node_prev = curr_node;
            curr_node = curr_node->left;
        }
        else
        {
            curr_node_prev = curr_node;
            curr_node = curr_node->right;
        }
    }
    if(value < curr_node_prev->val)
        curr_node_prev->left = new_node;
    else
        curr_node_prev->right = new_node;
}

void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->val); 
        inorder(root->right); 
    } 
}

int main()
{
    struct node root;
    root.val = 50;
    root.right = NULL;
    root.left = NULL;

    insert_bst(&root, 30);
    insert_bst(&root, 20);
    insert_bst(&root, 40);
    insert_bst(&root, 70);
    insert_bst(&root, 60);
    insert_bst(&root, 80);

    inorder(&root);

    return 0;
}

