#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //if you want to update

    v[0] = 10; // this will update the first element of the vector to 10

    // cout<<v[0]<<" "; // Output: 10
    // cout<<v[1]<<" "; // Output: 2
    // cout<<v[2]<<" "; // Output: 3

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    v.pop_back();

    
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    

}