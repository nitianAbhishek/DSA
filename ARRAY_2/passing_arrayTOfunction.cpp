#include<iostream>
using namespace std;

 void display(int a[5]){

    for(int i = 0;i<5 ;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

 void change(int b[5]){

     b[0] = 10;
        

}

int main(){

  int arr[5] = {1,2,3,4,5};
  display(arr);
  change(arr);
  display(arr);

}