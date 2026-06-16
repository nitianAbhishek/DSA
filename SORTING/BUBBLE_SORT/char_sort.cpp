#include<iostream>
#include<string>
using namespace std;
int main(){

    string str = "ZYZXX";

    for(int i = 0;i<str.size()-1;i++){
        for(int j = 0;j<str.size()-1;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
                
            }
        }
    }

    for(int i = 0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
}