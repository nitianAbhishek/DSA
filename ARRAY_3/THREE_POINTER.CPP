#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

 void sort012(vector<int>&v){

    int low = 0;
    int mid = 0;
    int high = v.size()-1;

    while(mid<=high){
        if(v[mid]==0){
            swap(v[mid],v[low]);
            low++;
            mid++;
        }

        else if(v[mid]==1){
            mid++;
        }

        else {
            swap(v[mid],v[high]);
            high--;
        }
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

        sort012(v);
        display(v);
     
}