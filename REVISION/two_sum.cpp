#include<iostream>
#include<vector>
using namespace std;
int main(){

      int n;
      cin>>n;

      vector<int>v;

      for(int i = 0;i<n;i++){
          int x;
          cin>>x;
          v.push_back(x);
      }

       int target ;
       cin>>target;

       for(int i = 0;i<n-1;i++){
          for(int j = i+1;j<n;j++){
            if(v[i]+v[j]==target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
          }
       }
}