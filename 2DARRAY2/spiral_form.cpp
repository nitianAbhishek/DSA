#include<iostream>
using namespace std;
int main(){

     int n;
     cin>>n;

     int m;
     cin>>m;

     int arr[n][m];

      for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
      }

      int minr = 0;
      int minc = 0;
      int maxr = n-1;
      int maxc = m-1;

  while(minr<=maxr && minc<=maxc){

    // right
    for(int j=minc;j<=maxc;j++)
        cout<<arr[minr][j]<<" ";
    minr++;

    // down
    for(int i=minr;i<=maxr;i++)
        cout<<arr[i][maxc]<<" ";
    maxc--;

    if(minr<=maxr){
        // left
        for(int j=maxc;j>=minc;j--)
            cout<<arr[maxr][j]<<" ";
        maxr--;
    }

    if(minc<=maxc){
        // up
        for(int i=maxr;i>=minr;i--)
            cout<<arr[i][minc]<<" ";
        minc++;
    }
}
}