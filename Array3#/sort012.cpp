#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    int n = v.size();
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

void sort(vector<int>&v){
    int n = v.size();
    int noz = 0;
    int noo = 0;
    int notw = 0;

     for(int i = 0;i<n;i++){
        if(v[i]==0) noz++;
        if(v[i]==1) noo++;
        if(v[i]==2) notw++; 
     }

     for(int i = 0;i<n;i++){
        if(i<noz) {
            v[i] = 0;
        }
        else if(i>=noz&&i<noo+noz){
            v[i]=1;
        }

        else {
            v[i] = 2;
        }
     }
}   

int main(){
   
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    sort(v);
    display(v);

}