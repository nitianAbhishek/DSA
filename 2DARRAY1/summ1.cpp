#include<iostream>
using namespace std;
int main(){

    int arr[2][2] = {1,2,3,4};
    int arr1[2][2] = {1,2,3,4};

    int res[2][2];

     for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            res[i][j] = arr[i][j]+arr1[i][j];    
            }
     }
      
       for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
     }

}