#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
     
    // selction sort;

    for(int i = 0;i<n-1;i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j = i;j<n;j++){
            if(v[j]<min) {
               min = v[j];
                minidx = j;
            }
        }
        swap(v[i],v[minidx]);
    }
   for(int i = 0;i<n;i++){
    cout<<v[i]<<" ";
   }
}

