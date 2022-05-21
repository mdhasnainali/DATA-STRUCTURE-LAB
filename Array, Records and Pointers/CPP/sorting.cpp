#include <iostream>
using namespace std;


template <class T> void print_array(T arr[], int length);
template <class T> void bubble_sort(T arr[], int length);


int main()
{
    int arr1[] = {1,2,5,3,1,56,12,113,3,3,4,5,6,7,8};
    string arr2[] = {"Farbi", "Shaoib", "Sakura", "Ritu", "Mahin", "Rajjak", "Ayon"};
    int length1 = 15;
    int length2 = 7;

    bubble_sort(arr1,length1);
    bubble_sort(arr2,length2);
}


template <class T>
void print_array(T arr[], int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

template <class T> 
void bubble_sort(T arr[], int length){
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(arr[j]>arr[j+1]){
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    print_array(arr,length);
}
