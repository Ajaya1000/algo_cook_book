#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;cin>>t;
    int j;
    for(int i=1;i<=t;i++){
        j=1;
        cout<<setw(11-2*i)<<"\0"<<"\b";
        while(j<i){
            cout<<j<<" ";
                j++;
            }
        while(j){
        cout<<j<<" ";
            j--;
        }
            cout<<"\n";
        }
    }