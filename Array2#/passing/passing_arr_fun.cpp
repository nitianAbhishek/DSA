#include<iostream>
using namespace std;

void display(int arr[]){

    for(int i = 0 ;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[7] = {1,2,3,4,5,6,7};

    display(arr);
}