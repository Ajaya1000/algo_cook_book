#include <bits/stdc++.h>
using namespace std;
int func1(const int &x){
    
    return x*2;
    
}
int func2(const int &x) const {
    
    return x*2;
    
}
int main(){
    int a=6;
    const int b=8;
    cout<<func1(a)<<"\t"<<func1(b)<<"\n";
    
    cout<<func2(a)<<"\t"<<func2(b)<<"\n";
    
    
    
    
}