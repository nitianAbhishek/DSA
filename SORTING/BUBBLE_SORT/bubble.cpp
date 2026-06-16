#include<iostream>
#include<vector>
using namespace std;
int main (){

     int n;
     cin>>n;

     vector<int>v;
     for(int i = 0 ;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
     }

     for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
     }

     cout<<endl;

     // bubble sort algorithm

     for(int i = 0;i<n-1 ;i++){
        // traverse
        for(int j = 0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }

     }
         for(int i = 0;i<n;i++){
          cout<<v[i]<<" ";
     }

}
