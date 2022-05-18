#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    float fl;
    char ch;
    struct node *nextptr;
} * start_node;
void createNode(int n)
{
    struct node *new_node, *temp;
    int num, i;
    float fl;
    char ch;
    start_node = (struct node *)malloc(sizeof(struct node));

    if (start_node == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Enter data for node 1 : ");
        scanf("%d", &num);
        start_node->num = num;
        start_node->nextptr = NULL;
        temp = start_node;
        for (i = 2; i <= n; i++)
        {
            if (i <= 3)
            {
                new_node = (struct node *)malloc(sizeof(struct node));
                if (new_node == NULL)
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
                else
                {
                    printf(" Enter data for node %d : ", i);
                    scanf(" %d", &num);

                    new_node->num = num;
                    new_node->nextptr = NULL;

                    temp->nextptr = new_node;
                    temp = temp->nextptr;
                }
            }
            if (i > 3 && i <= 6)
            {
                new_node = (struct node *)malloc(sizeof(struct node));
                if (new_node == NULL)
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
                else
                {
                    printf(" Enter data for node %d : ", i);
                    scanf(" %f", &fl);

                    new_node->fl = fl;
                    new_node->nextptr = NULL;

                    temp->nextptr = new_node;
                    temp = temp->nextptr;
                }
            }
            if (i > 6 && i <= n)
            {
                new_node = (struct node *)malloc(sizeof(struct node));
                if (new_node == NULL)
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
                else
                {
                    printf(" Enter data for node %d : ", i);
                    scanf(" %c", &ch);

                    new_node->ch = ch;
                    new_node->nextptr = NULL;

                    temp->nextptr = new_node;
                    temp = temp->nextptr;
                }
            }
        }
    }
}
void display()
{
    int i;
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
            for(i=1;i<=3;i++){
            printf(" Data = %d\n", temp->num);
            temp = temp->nextptr;
            }
            for(i=4;i<=6;i++){
            printf(" Data = %.2f\n", temp->fl);
            temp = temp->nextptr;
            }
            for(i=7;i<=10;i++){
            printf(" Data = %c\n", temp->ch);
            temp = temp->nextptr;
            }

        }
    }
}

int main()
{
    int n;
    printf("Linked List Program:\n\n");
    printf("Enter the number of nodes you want: ");
    scanf("%d", &n);
    createNode(n);
    printf("\n Data entered in the Nodes : \n");
    display();
    return 0;
}
