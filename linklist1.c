#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *nextptr;
} * start_node;
void createNode(int n)
{
    struct node *new_node, *temp;
    int num, i;
    start_node = (struct node *)malloc(sizeof(struct node));

    if (start_node == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        start_node->num = num;
        start_node->nextptr = NULL;
        temp = start_node;
        for (i = 2; i <= n; i++)
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            if (new_node == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                new_node->num = num;
                new_node->nextptr = NULL;

                temp->nextptr = new_node;
                temp = temp->nextptr;
            }
        }
    }
}
void display()
{
    struct node *temp;
    if (start_node == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp = start_node;
        while (temp != NULL)
        {
            printf(" Data = %d\n", temp->num);
            temp = temp->nextptr;
        }
    }
}

int main()
{
    int n;
    printf("Linked List Program:\n\n");
    printf("Input the number of nodes : ");
    scanf("%d", &n);
    createNode(n);
    printf("\n Data entered in the list : \n");
    display();
    return 0;
}
