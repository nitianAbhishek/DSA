#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sort01(vector<int>&v){

     int noz = 0;
     int noo = 0;

     for(int i = 0;i<v.size();i++){
        if(v[i]==0){
            noz++;
        }
        else{
            noo++;
        }
     }

     // fiiling

     for(int i = 0;i<v.size();i++){
        if(i<noz){
            v[i] = 0;

        }
        else {
            v[i]= 1;
        }
     }

}

int main(){

    int n;
    cin>>n;

    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort01(v);
    display(v);


}