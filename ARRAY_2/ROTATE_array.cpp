#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

 void reversepart(int i ,int j,vector<int>&v){

     while(i<=j){
        int temp = v[j];
        v[j] = v[i];
        v[i] = temp;
        i++;
        j--;
     }
     
}

int main(){

    int n ;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int k;
    cin>>k;

   if(k>n){
       k = k%n;
   }
    

    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
     
    display(v);




}