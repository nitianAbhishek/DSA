#include<iostream>
using namespace std;
int main(){
        
    int n;
    cout<<"Enter row 1:";
    cin>>n;

    int m;
    cout<<"Enter coulmn 1:";
    cin>>m;

    int p;
    cout<<"Enter row 2:";
    cin>>p;

    int q;
    cout<<"Enter coulmn 2:";
    cin>>q;

    if(m==p){

        int a[n][m];

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cin>>a[i][j];
            }
        }

        int b[p][q];

        for(int i = 0;i<p;i++){
            for(int j = 0;j<q;j++){
                cin>>b[i][j];
            }
        }

        int res[n][q];
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<q;j++){
                 res[i][j] = 0;
                for(int k = 0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    else{
        cout<<"matrix not multyplied ";
    }
}