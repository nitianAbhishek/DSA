#include<iostream>
#include<vector>
using namespace std;

 void display(vector<int>v){
     for(int i = 0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
 }

int main(){

    int n;
    cin>>n;
    vector<int>v;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

     display(v);

      vector<int>v2(v.size());

      for(int i = 0;i<n;i++){
        // i+j = size-1;

        int j = v.size()-1-i;
        v2[i] = v[j];
      }
      display(v2);

}