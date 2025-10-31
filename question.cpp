#include<iostream>
using namespace std;

void swapalter(int arr[],int size){
    int first = 0;
    int second = 1;
    while(second <= size - 1){
        swap(arr[first],arr[second]);
        first = first + 2;
        second = second + 2;
    }
}

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={1,2,3,4,5};
    swapalter(arr,6);
    swapalter(brr,5);
    printarray(arr,6);
    printarray(brr,5);
    return 0;
}