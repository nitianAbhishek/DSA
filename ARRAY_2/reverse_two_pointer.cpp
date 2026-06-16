#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>&v){
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
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
    

    int i = 0;
    int j = v.size()-1;

    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }

    display(v);




}