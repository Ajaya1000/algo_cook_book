#include<bits/stdc++.h>
using namespace std;
bool isMagicNum(int n){
    if(n==1)
        return true;
    if(n/10==0)
        return false;
    int temp=0;
    int r;
    while(n>0){
        r=n%10;
        temp+=r;
        n=n/10;
    }
    
    if(isMagicNum(temp))
        return true;
    return false;
}
int main(){
    string s;
    cin>>s;
    auto it=s.begin();
    int sum=0;
    while(it!=s.end()){
        sum=sum+(*it-'0');
        it++;
        }
    if(isMagicNum(sum))
        cout<<"It's a magic no.";
    else
        cout<<"It's not a magic no.";
    
    }