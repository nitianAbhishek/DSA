#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    int idx = -1;

    for(int i = n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx = i;
            break;
        }
    }

    if(idx==-1){
        reverse(v.begin(),v.end());
    }

    reverse(v.begin()+idx+1,v.end());

    int j = -1;
    for(int i = idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j = i;
            break;
        }
    }
    swap(v[idx],v[j]);

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }

	return 0;
}