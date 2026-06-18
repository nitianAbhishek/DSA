#include<iostream>
using namespace std;
#include<climits>
int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

   int max = INT_MIN;

   for(int i = 0;i<n;i++){
    if(max<arr[i]) max = arr[i];
   }
//    cout<<max<<endl;

   // sec max

   int smax = INT_MIN ;

   for(int i = 0;i<n;i++){
    if(max !=arr[i] &&smax<arr[i]) smax = arr[i];
   }
   cout<<smax;
  
   


}