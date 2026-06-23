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
       //output
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m ;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int t[m][n];

     for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            t[j][i] = v[i][j];
        }
     }

     for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
     }

}