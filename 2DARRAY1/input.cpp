#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"no of rows:";
    cin>>n;

    int m;
    cout<<"no of coulmn:";
    cin>>m;

    int v[n][m];
         
    // input
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m ;j++){
            cin>>v[i][j];
        }
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m ;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}