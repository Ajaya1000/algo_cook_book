#include<bits/stdc++.h>
typedef unsigned long long cpp_int;
using namespace std;
cpp_int gcd(cpp_int,cpp_int);
int main()
{
    cpp_int a,b,count=0;
    cin>>a>>b;
    cpp_int c=gcd(a,b);
    for(cpp_int i=1;i*i<c;i++)
    {
        if(c%i==0){
                count+=((c/i==i)?1:2);
        }
        
    }
    cout<<count;
    
}
cpp_int gcd(cpp_int a,cpp_int b){
if(a==0)
return b;

return gcd(b%a,a);
}