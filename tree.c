#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left, *right;
};
struct tree *create()
{
    int n;
    struct tree *new_node;
    new_node = (struct tree *)malloc(sizeof(struct tree));
    printf("Enter Data:");
    scanf("%d", &n);
    if (n == -1)
    {
        return 0;
    }
    new_node->data = n;
    printf("Enter left child of %d:\n", n);
    new_node->left = create();
    printf("Enter right child of %d:\n", n);
    new_node->right = create();
    return new_node;
}
void pre_order(struct tree * root)
{
    if(root==0)
    {
        return;
    }
    printf("%d->",root->data);
    pre_order(root->left);
    pre_order(root->right);
}
void in_order(struct tree * root)
{
    if(root==0)
    {
        return;
    }
    in_order(root->left);
    printf("%d->",root->data);
    in_order(root->right);
}
void post_order(struct tree * root)
{
    if(root==0)
    {
        return;
    }
    post_order(root->left);
    post_order(root->right);
    printf("%d->",root->data);
}
int main()
{
    int key;
    struct tree *root;
    root = 0;
    root = create();
    printf("\nPre_order is: ");
    pre_order(root);
    printf("\nIn_order is: ");
    in_order(root);
    printf("\nPost_order is: ");
    post_order(root);
    printf("\nEnter element you want to delete: ");
    scanf("%d",&key);
    
    return 0;
}