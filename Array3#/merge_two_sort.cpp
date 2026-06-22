#include<iostream>
#include<vector>
using namespace std;
 
vector<int> merge(vector<int>&v1,vector<int>&v2){
      
    int n = v1.size();
    int m = v2.size();

     vector<int>res(n+m);
      int i = 0;
      int j = 0;
      int k = 0;

      while(i<n && j<m){
           if(v1[i]<v2[j]) {
            res[k] = v1[i];
            i++;
            k++;
           }
           else{
            j++;
            k++;

           }
      }

    while(i<n){
        res[k++] = v1[i++];
    }

    while(j<m){
        res[k++] = v2[j++];
    }
      return res;

}

int main(){

    int n;
    cin>>n;
    vector<int>v1(n);

    for(int i = 0;i<n ;i++){
        cin>>v1[i];
        
    }
    int m;
    cin>>m;

    vector<int>v2(m);

    for(int i = 0;i<m;i++){
        cin>>v2[i];
    }
    
    vector<int> v3 = merge(v1,v2);

    for(int i = 0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }


    }

