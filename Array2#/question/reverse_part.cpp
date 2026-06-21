#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>&v){
    int n = v.size();

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

void rotate(int i,int j ,vector<int>&v){

     while(i<=j){
        swap(v[i],v[j]);
         i++;
         j--;
     }
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
    int k;
    cin>>k;
    if(k>n){
        k = k%n;
    }

    rotate(0,n-k-1,v);
    rotate(n-k,n-1,v);
    rotate(0,n-1,v);
    display(v);


}