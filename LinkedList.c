#include <stdio.h>
#include <stdlib.h>
#define EMPTY 0

typedef struct node {
    int data;
    struct node* link;
}LinkedList;

LinkedList* GetNode()
{
    LinkedList* tmp;
    tmp = (LinkedList*)malloc(sizeof(LinkedList));
    tmp->link = EMPTY;
    return tmp;
}

void Insert(LinkedList** head, int data)
{
    if (*head == EMPTY)
    {
        *head = GetNode();
        (*head)->data = data;
    }
    else
    {
        Insert(&(*head)->link, data);   //Recursive 활용
    }
}

void Output(LinkedList** head)
{
    //해제 x
    if (*head)
    {
        printf("%d\n", (*head)->data);
        Output(&(*head)->link);
    }
}

void Search(LinkedList** head, int data)
{
    if (*head == EMPTY)
    {
        printf("%d not exist!!\n", data);
        return;
    }
    else if ((*head)->data == data)
    {
        printf("%d Search!!\n", data);
    }
    else
        Search(&(*head)->link, data);
}

void Delete(LinkedList** head, int data)
{
    LinkedList* tmp;
    if (*head == EMPTY)
    {
        printf("%d not exist!!\n", data);
        return;
    }
    else if ((*head)->data == data)
    {
        tmp = *head;
        *head = (*head)->link;
        free(tmp);
    }
    else
        Delete(&(*head)->link, data);
}

void Add(LinkedList** head, int data1, int data2)
{
    LinkedList* newNode = EMPTY;

    if (*head == EMPTY)
    {
        printf("%d not exist!!\n", data1);
    }
    else if ((*head)->data == data1)
    {
        Insert(&newNode, data2);
        newNode->link = (*head)->link;
        (*head)->link = newNode;
    }
    else
        Add(&(*head)->link, data1, data2);
}

void Sort(LinkedList** head)
{
    LinkedList* tmp;
    int tmp_int;

    //반복문 대체
    if (*head)
    {
        tmp = (*head)->link;
        while (tmp)
        {
            if ((*head)->data < tmp->data)
            {
                tmp_int = (*head)->data;
                (*head)->data = tmp->data;
                tmp->data = tmp_int;
            }
            tmp = tmp->link;
        }
        Sort(&(*head)->link);
    }
}

int main()
{
    //head 선언
    LinkedList* head = EMPTY; 

    Insert(&head, 10);
    Insert(&head, 20);
    Insert(&head, 30);
    //(&head, 40);

    //Search(&head, 30);
    //Search(&head, 50);
    //Search(&head, 40);

    //Delete(&head, 20);
    //Delete(&head, 30);
    Delete(&head, 45);

    Add(&head, 20, 25);
    Add(&head, 30, 35);
    //Add(&head, 50, 55);

    Sort(&head);

    Output(&head);

    return 0;
}
