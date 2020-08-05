#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define pb push_back
typedef unsigned long long ull;
typedef long long ll;
using namespace std;
vector<ll> phi;
ll gcd (ll a,ll b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
void totient(ll n){
    for(ll i=0;i<=n;i++){
        phi.pb(i);
    }
    for(ll i=2;i<=n;i++){
        if(phi[i]==i){
            phi[i]=i-1;

            for(ll j=2*i;j<=n;j+=i){
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }

}

int main() {
    ll n;cin>>n;   //accepting n
    totient(n);     //initializing totient value for every i<=n;
    ll t;
    ll d;
    ull sum=0;
    for(ll i=2;i<=n;i++){
        t=i-phi[i];
        d=i-1;
        ll g=gcd(t,d);
        t=t/g;
        d=d/g;
        if(t==1)
            sum+=i;
    }
    cout<<sum;
    return 0;
}
