#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&a){

     for(int i = 0 ;i<a.size();i++){
        cout<<a[i]<< " ";
     }
     cout<<endl;
}
int main(){

   int n;
   cin>>n;

   vector<int>v;

    for(int i = 0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    display(v);

    vector<int>v2(v.size());

     for(int i = 0 ;i<v2.size();i++){
        // i+j = size-1;

        int j = v.size()-1-i;
        v2[i] = v[j];
     }
      
     display(v2);


}