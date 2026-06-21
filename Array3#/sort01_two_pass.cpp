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

void sort01(vector<int>&v){
    int n = v.size();
    int noz = 0;
    int noo = 0;

    for(int i = 0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }

    for(int i = 0;i<n;i++){
        if(i<noz){
            v[i] =0;
        }
        else v[i]=1;
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
    
    sort01(v);
    display(v);

}