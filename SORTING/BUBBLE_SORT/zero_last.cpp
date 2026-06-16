#include<iostream>
#include<vector>
#include<algorithm>
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

    for(int i = 0 ;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(v[j]==0){
                swap(v[j],v[j+1]);
            }
        }
    }

       for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

}