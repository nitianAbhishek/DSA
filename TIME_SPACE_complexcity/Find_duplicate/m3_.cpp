#include<iostream>
#include<vector>
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

    int sum = 0;
     
    for(int i = 0;i<n;i++){
        sum = sum+v[i];

    }

    int s = n*(n-1)/2;
    cout<<sum-s;

    
}