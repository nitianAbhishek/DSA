#include<iostream>
#include<vector>
using namespace std;

vector<int>merge(vector<int>&v1,vector<int>&v2){

    vector<int>ans(v1.size()+v2.size());

    int i = 0;
    int j = 0;
    int k = 0;

    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]){
            ans[k] = v1[i];
            i++;
            k++;
        }
        else {
            ans[k] = v2[j];
            j++;
            k++;
        }
    }

    while(i<v1.size()){
        ans[k] = v1[i];
        i++;
        k++;
    }

     while(j<v2.size()){
        ans[k] = v2[j];
        j++;
        k++;
    }


    return ans;
}
int main(){

     int n;
     cin>>n;
     int m;

     cin>>m;

     vector<int>v1;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
    
        vector<int>v2;
        for(int i = 0;i<m;i++){
            int x;
            cin>>x;
            v2.push_back(x);
        } 



    vector<int>result = merge(v1, v2);

     for(int i = 0;i<result.size();i++){
        cout<<result[i]<<" ";
     }
}