#include <iostream>
using namespace std;

template <class T> void merging(T arr1, T arr2, int length1, int length2);
template <class T> void print_array(T arr[], int length);

int main(){
    int arr1[100] = {1,2,5,3,1,56,7};
    int arr2[] = {12,113,3,3,4,5,6,7,8};
    string arr3[100] = {"Farbi", "Shaoib", "Sakura"};
    string arr4[] = {"Ritu", "Mahin", "Rajjak", "Ayon"};

    merging(arr1,arr2,7,9);
    merging(arr3,arr4,3,4);
}

template <class T>
void print_array(T arr[], int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

template <class T> void merging(T arr1, T arr2, int length1, int length2){
    for(int i=length1,j=0;j<length2;j++,i++){
        arr1[i] = arr2[j];
    }

    print_array(arr1,length1+length2);
}
