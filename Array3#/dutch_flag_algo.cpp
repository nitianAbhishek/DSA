#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>&v){
    for(int i= 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void sort(vector<int>&v){

     int lo = 0;
     int mi = 0;
     int hi = v.size()-1;

     while(mi<=hi){
        if(v[mi]==2){
             swap(v[mi],v[hi]);
             hi--;
        }
        else if(v[mi]==0){
            swap(v[mi],v[lo]);
            lo++;
            mi++;
        }
        else if(v[mi]==1){
             mi++;
        }
     }
}
int main(){

     int n;
     cin>>n;
      
     vector<int>v(n);

     for(int i = 0;i<n;i++){
        cin>>v[i];
     }
     
     sort(v);
     display(v);

}