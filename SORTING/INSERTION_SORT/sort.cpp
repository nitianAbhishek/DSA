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

    // algorithm

    for(int i = 1;i<n-1;i++){
        int j = i;
        while (j>=1){
           
            if(v[j]>v[j-1]){
                break;
            }

            if(v[j]<v[j-1]){
                swap(v[j],v[j-1]);
            }
           j--;
        }
        
    }
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

}