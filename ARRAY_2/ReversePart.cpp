#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>&v){
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void reversepart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i = 0;i<n ;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    reversepart(0,3,v);
    display(v);


}