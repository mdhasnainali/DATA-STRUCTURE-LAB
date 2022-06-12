#include <iostream>
using namespace std;

int const MAX = 100;
char stack[MAX];
int top = -1;

void push(char n);
char pop();
int isEmpty();
int isFull();
int precedence(char x);

int main()
{

    string infix = "A+(B*C-(D/E^F)*G)*H";
    // cin>>infix;

    push('(');
    infix += ")";

    int length = infix.length();
    // cout << length << endl;

    for (int i = 0; i < length; i++)
    {
        char exp = infix[i];
        if (exp >= 'A' && exp <= 'Z')
        {
            cout << exp;
        }
        else
        {
            char top_in_stack = stack[top];
            if (exp == ')')
            {
                while (stack[top] != '(')
                {
                    cout << pop();
                }
                pop();
            }
            else if (precedence(top_in_stack) > precedence(exp) && exp != '(')
            {
                cout << pop();
                push(exp);
            }
            else
            {
                push(exp);
            }
        }
    }
}

void push(char n)
{
    if (!isFull())
    {
        top++;
        stack[top] = n;
    }
    else
        cout << "Stack Full" << endl;
}

char pop()
{
    if (!isEmpty())
    {
        char temp = stack[top];
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

int precedence(char x)
{
    if (x == '(')
        return 0;
    else if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else
        return 3;
}