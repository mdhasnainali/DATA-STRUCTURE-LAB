#include <iostream>
using namespace std;

int const MAX = 100;
int stack[MAX];
int top = -1;

void push(int n);
int pop();
int isEmpty();
int isFull();

int main()
{
    // push items on to the stack
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);

    // delete and print stack top element
    int data = pop();
    cout << data << " ";
}

void push(int n)
{
    if (!isFull())
    {
        top++;
        stack[top] = n;
    }
    else
        cout << "Stack Full" << endl;
}

int pop()
{
    if (!isEmpty())
    {
        int temp = stack[top];
        top--;
        return temp;
    }
    cout << "Stack Empty" << endl;
    return -1;
}

int isEmpty()
{

    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{

    if (top == MAX)
        return 1;
    else
        return 0;
}