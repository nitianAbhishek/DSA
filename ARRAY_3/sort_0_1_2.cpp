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

     int noz = 0;
     int noo = 0;
     int notw = 0;

     for(int i = 0;i<v.size();i++){

         if(v[i]==0){

            noz++;

         }
         else if(v[i]==1){
            noo++;
         }
         else {
            notw++;
         }
     }

     // fiiling

     for(int i = 0;i<v.size();i++){
        if(i<noz){
            v[i]=0;
            
        }
        else if(i<noz+noo){
            v[i]=1;
        }
        else {
            v[i]=2;
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