#include<iostream>
#include<vector>
using namespace std;
int main(){
       
     int n;
     cin>>n;

     vector<int>v(n);

     for(int i = 0;i<n;i++){
        cin>>v[i];

     }

    //   for(int i = 0;i<n;i++){
    //     cout<<v[i]<<" ";;

    //  }

    bool flag = false;

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(v[i]==v[j]){
                cout<<v[i];
                flag = true;
                break;
            }
        }

        if(flag==true){
           break;
        }
    }



}