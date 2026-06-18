#include<iostream>
using namespace std;
int main(){
         
    int n;
    cout<<"Number of student:";
    cin>>n;

    int arr[n];

    cout<<"Marks of students:";
     
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0;i<n;i++){
        if(arr[i]<35){
            cout<<i<<endl;
        }
    }
    


}