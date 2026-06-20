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
     // reverse;

     vector<int>v2(v.size());

     for(int i = 0;i<n;i++){
        // 
        int j;

        j = v.size()-1-i;
        v2[i] = v[j];
     }

     for(int i = 0;i<v.size();i++){
        cout<<v2[i]<<" ";
     }



}