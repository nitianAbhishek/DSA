#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>&v){
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void reverse(vector<int>&v){
     
    int n = v.size();
    int i = 0;
    int j = n-1;

    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    
    }
        
}

int main(){

    int n;
    cin>>n;

     vector<int>v;
     for(int i = 0 ;i<n ;i++){
        int x;
        cin>>x;
        v.push_back(x);

     }
     display(v);
     cout<<endl;
     reverse(v);
     display(v);
       



}