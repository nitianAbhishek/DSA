#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;

     vector<int>v;
     for(int i = 0 ;i<n ;i++){
        int x;
        cin>>x;
        v.push_back(x);

     }
     // two sum

     int x ;
     cin>>x;

     for(int i = 0;i<=n-2;i++){
        for(int j = i+1;j<=n-1;j++){
            if((v[i]+v[j])==x){
                cout<<i<<","<<j<<endl;
            }
        }
     }



}