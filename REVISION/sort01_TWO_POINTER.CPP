
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>v){
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
  
void sort(vector<int>&v){

     int i = 0;
     int j = v.size()-1;

     while(i<j){

        if(v[i]==0){
            i++;
        }
        else if(v[j]==1){
            j--;
        }
        else {
            swap(v[i],v[j]);
            i++;
            j--;
        }
        }
        }

     


int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }


    sort(v);
    display(v);

}