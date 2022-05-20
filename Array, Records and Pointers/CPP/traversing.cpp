// #include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int get_maximum(int arr[], int length)
{
    int max = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int get_minimum(int arr[], int length)
{
    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int get_total(int arr[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

double get_average(int arr[], int length)
{
    int sum = get_total(arr, length);
    double average = (double)sum / average;
    return average;
}

double get_sign_value(int value)
{
    double sinValues;
    double pi = 3.14159265359;
    sinValues = asin(value * (pi / 180));

    return sinValues;
}

int main()
{
    int arr[] = {30, 24, 46, 2, 56, 24, 12, 646, 12, 35, 464, 121};

    cout << get_maximum(arr, 12) << endl;
    cout << get_minimum(arr, 12) << endl;
    cout << get_total(arr, 12) << endl;
    cout << get_average(arr, 12) << endl;
    cout << get_sign_value(30) << endl;
}