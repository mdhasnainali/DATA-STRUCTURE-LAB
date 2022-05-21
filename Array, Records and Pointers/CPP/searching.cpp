#include <iostream>
using namespace std;

template <class T> int searching(T arr[],int length,T value);

int main()
{
    int arr1[] = {1,2,5,3,1,56,77,12,113,3,3,4,5,6,7,8};
    string arr2[] = {"Farbi", "Shaoib", "Sakura", "Ritu", "Mahin", "Rajjak", "Ayon"};
    int length1 = 16;
    int length2 = 7;

    string value = "Karim";

    cout<<searching(arr1,length1,77)<<endl;
    cout<<searching(arr2,length2,value)<<endl;
}


template <class T> 
int searching(T arr[],int length, T value){
    for(int i=0;i<length;i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
}
