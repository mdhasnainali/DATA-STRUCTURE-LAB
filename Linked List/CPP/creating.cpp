#include <iostream>
using namespace std;

typedef struct node Node;
struct node
{
    int data;
    Node *next_pointer;
};

Node *create_node();
Node *insert_in_beginning(int value, Node *start);
void insert_in_ending(int value, Node *start);
void print_linked_list(Node *start);

int main()
{
    int arr[] = {5, 3, 9, 42, 0, 10};
    int length = 6;
    Node *start = NULL;

    for (int i = 0; i < length; i++)
    {
        start = insert_in_ending(arr[i], start);
    }

    print_linked_list(start);
}

Node *create_node()
{
    Node *new_node = (Node *)malloc(sizeof(Node));

    if (new_node == NULL)
    {
        cout << "Error in creating new node" << endl;
        exit(1);
    }
    return new_node;
}

Node *insert_in_beginning(int value, Node *start)
{
    Node *new_node = create_node();

    new_node->data = value;
    new_node->next_pointer = start;
    return new_node;
}

// void insert_in_ending(int value, Node *start)
// {
//     Node *current_node = start;
//     while (current_node->next_pointer != NULL)
//     {
//         current_node = current_node->next_pointer;
//     }
//     Node *new_node = create_node();
//     new_node->data = value;
//     current_node->next_pointer = new_node;
//     new_node->next_pointer = NULL;
// }

// For checking
void print_linked_list(Node *start)
{

    Node *current_node = start;
    while (current_node != NULL)
    {
        cout << current_node->data << endl;
        current_node = current_node->next_pointer;
    }
}
