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
     // last occur

     int x;
     cin>>x;
     int idx = -1;

     for(int i = n;i>=0;i--){
         if(v[i]==x){
           
            idx = i;
            
            break;
         }

     }
     cout<<idx;


}