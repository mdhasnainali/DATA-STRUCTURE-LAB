#include <iostream>

using namespace std;

typedef struct node Node;
struct node
{
    int data;
    Node *next_pointer;
};

Node *create_node();
void insert_in_ending(int value, Node **start);
void insert_in_specific_position(int value, Node *start);
void linked_list_print(Node *start);
void deleting(int value, Node **start);

int main()
{
    int arr[] = {5, 3, 9, 42, 0, 10};
    int length = 6;
    Node *start = NULL;

    for (int i = 0; i < length; i++)
    {
        insert_in_ending(arr[i], &start);
    }
    linked_list_print(start);
    deleting(5, &start);
    linked_list_print(start);
}

Node *create_node()
{
    Node *node = (Node *)malloc(sizeof(Node));

    if (node == NULL)
    {
        cout << "Error while creating new node" << endl;
    }
    return node;
}

void linked_list_print(Node *start)
{
    if (start == NULL)
    {
        cout << "Empty Linked List" << endl;
        exit(1);
    }
    Node *current_node = start;
    while (current_node != NULL)
    {
        cout << current_node->data << " ";
        current_node = current_node->next_pointer;
    }
    cout << endl;
}

void insert_in_ending(int value, Node **start)
{
    Node *current_node = *start;
    Node *new_node = create_node();

    if (current_node == NULL)
    {
        *start = new_node;
        current_node = new_node;
        current_node->next_pointer = NULL;
    }
    while (current_node->next_pointer != NULL)
    {
        current_node = current_node->next_pointer;
    }
    new_node->data = value;
    current_node->next_pointer = new_node;
    new_node->next_pointer = NULL;
}

/*
    Deleting
*/
void deleting(int value, Node **start)
{
    Node *current_node = *start;
    Node *next_node = current_node->next_pointer;

    if (current_node == NULL)
    {
        cout << "Underflow" << endl;
        exit(1);
    }
    else if(current_node->data==value){
        *start = current_node->next_pointer;
        return ;
    }
    while (current_node->next_pointer != NULL && next_node->data != value)
    {
        current_node = current_node->next_pointer;
        next_node = current_node->next_pointer;
    }
    
    current_node->next_pointer = next_node->next_pointer;
    free(next_node);
}
