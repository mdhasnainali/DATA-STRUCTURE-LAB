#include <iostream>
using namespace std;

template <class T> void print_array(T arr[], int length);
template <class T> void insert_in_sorted_array(T arr[],T value, int* length);
template <class T> void insert_in_specific_position_array(T arr[],T value, int* length, int pos);

int main()
{
    int arr1[1000] = {1,2,3,4,5,6,7,8};
    int length1 = 8;
    insert_in_sorted_array(arr1,54,&length1);
    string arr2[100] = {"Ayon", "Farbi", "Mahin", "Razzak", "Ritu", "Sakura", "Shaoib"};
    string value = "Rahim";
    int length2 = 7;
    insert_in_sorted_array(arr2,value,&length2);

    string value2 = "Karim";
    insert_in_specific_position_array(arr1,99,&length1,5);
    insert_in_specific_position_array(arr2,value2,&length2,5);
}


template <class T>
void print_array(T arr[], int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

template <class T>
void insert_in_sorted_array(T arr[],T value, int* length){
    for(int i= *length-1;i>0;i--){
        arr[i+1] = arr[i];
        if(arr[i] < value){
            arr[i+1] = value;
            break;
        }
    }
    *length = *length +1;
    print_array(arr,*length);
}

template <class T>
void insert_in_specific_position_array(T arr[],T value, int* length, int pos){
    for(int i= *length-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    *length = *length +1;
    print_array(arr,*length);
}
