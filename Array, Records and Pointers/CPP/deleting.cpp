#include <iostream>
using namespace std;

template <class T> void print_array(T arr[], int length);
template <class T> void delete_in_specific_value_array(T arr[],T value, int* length);
template <class T> void delete_in_specific_position_array(T arr[], int* length, int pos);

int main()
{
    int arr1[1000] = {1,2,3,4,5,6,7,8};
    int length1 = 8;
    delete_in_specific_position_array(arr1,&length1,2);
    string arr2[100] = {"Ayon", "Farbi", "Mahin", "Karim", "Ritu", "Sakura", "Shaoib"};
    int length2 = 7;
    string value = "Karim";
    delete_in_specific_value_array(arr2,value,&length2);
}


template <class T>
void print_array(T arr[], int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

template <class T>
void delete_in_specific_value_array(T arr[],T value, int* length){
    for(int i= 0;i<*length;i++){
        if(arr[i] == value){
            for(int j=i;j<(*length-1);j++){
                arr[j]=arr[j+1];
            }
            break;
        }
    }
    *length = *length -1;
    print_array(arr,*length);
}

template <class T>
void delete_in_specific_position_array(T arr[], int* length, int pos){
    for(int i= pos;i<(*length-1);i++){
        arr[i] = arr[i+1];
    }
    *length = *length-1;
    print_array(arr,*length);
}
