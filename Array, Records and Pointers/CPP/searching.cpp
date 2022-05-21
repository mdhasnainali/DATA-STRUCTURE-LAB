#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <class T> int linear_searching(T arr[],int length,T value);
template <class T> int binary_searching(T arr[],int start,int end,T value);

int main()
{
    int arr1[] = {1,2,5,3,1,1,56,77,12,113,3,3,4,5,6,7,8};
    string arr2[] = {"Farbi", "Shaoib", "Sakura", "Ritu", "Mahin", "Rajjak", "Karim"};
    int length1 = 17;
    int length2 = 7;

    string value = "Karim";

    cout<<linear_searching(arr1,length1,77)<<endl;
    cout<<linear_searching(arr2,length2,value)<<endl;

    sort(arr1,arr1+length1);
    sort(arr2,arr2+length2);

    cout<<binary_searching(arr1,0,length1,77)<<endl;
    cout<<binary_searching(arr2,0,length2,value)<<endl;
}


template <class T> 
int linear_searching(T arr[],int length, T value){
    for(int i=0;i<length;i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
}

template <class T> 
int binary_searching(T arr[],int start,int end,T value){
    int mid = (start + end)/2;
    if(start>end) return -1;
    else if(arr[mid]==value){
        return mid;
    }
    else if(arr[mid]<value){
        return binary_searching(arr,mid+1,end,value);
    }
    else return binary_searching(arr,start,mid-1,value);
}


