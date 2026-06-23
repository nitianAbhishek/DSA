#include<iostream>
#include<climits>
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

    cout<<endl;

    int max = INT_MIN;
       
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m ;j++){
            if(max<v[i][j]){
                max = v[i][j];
            }
        }
    }
    cout<<max;
}