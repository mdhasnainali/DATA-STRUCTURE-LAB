#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int const MAX = 100;
int stack[MAX];
int top = -1;
vector<int> digit;

void push(int n);
int pop();
int isEmpty();
int isFull();
void doOperations(char x);
void addExactDigit();

int main()
{
    string postFix = "5,6,7+-";
    int length = postFix.length();

    for (int i = 0; i < length; i++)
    {
        if (!(postFix[i] >= '0' && postFix[i] <= '9'))
        {
            addExactDigit();
        }
        if (postFix[i] >= '0' && postFix[i] <= '9')
        {
            digit.push_back(postFix[i] - '0');
        }
        else if (postFix[i] != ',')
        {
            doOperations(postFix[i]);
        }
    }

    cout << pop() << endl;
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

void doOperations(char x)
{
    int digit2 = pop();
    int digit1 = pop();

    switch (x)
    {
    case '+':
        push(digit1 + digit2);
        break;
    case '-':
        push(digit1 - digit2);
        break;
    case '*':
        push(digit1 * digit2);
        break;
    case '/':
        push(digit1 / digit2);
        break;
    case '^':
        push(pow(digit1, digit2));
        break;
    }
}

void addExactDigit()
{
    int length = digit.size();
    int value = 0;

    if (length != 0)
    {
        for (int i = length - 1, j = 1; i >= 0; i--, j *= 10)
        {
            value += (digit[i] * j);
        }
        digit.clear();
        push(value);
    }
}