#include <bits/stdc++.h>
#define pi pair<int,int>
typedef unsigned int uint;
typedef unsigned long long ull;
using namespace std;
map<ull,ull> increasing_sequence;
map<ull,ull> decreasing_sequnce;
void form_sequence(ull a[],ull s){
    ull temp=0,temp1=0;
    ull i=0;
    for(;i<s-1;i++){
        if(a[i]>a[i+1]){
            if(temp!=i){
                increasing_sequence.insert(pi(temp,i));
            }
            temp=i+1;
        }
        else{
            if(temp1!=i){
                decreasing_sequnce.insert(pi(temp1,i));
            }
            temp1=i+1;
        }
    }
    if(temp!=(i)){
        increasing_sequence.insert(pi(temp,i));
    }
    if(temp1!=i){
        decreasing_sequnce.insert(pi(temp1,i));
    }
}
bool func(ull a[],ull l,ull r){
    ull max=0;
    ull min=0;
    l--;
    r--;
    for(auto it=increasing_sequence.begin();it!=increasing_sequence.end();it++){
          if((it->first)>=r) break;
        if(it->first>=l)
        max++;
      
    }
    for(auto it=decreasing_sequnce.begin();it!=decreasing_sequnce.end();it++){
        if((it->first)>=r) break;
        if(it->first>=l)
        min++;
    }
    
    if(max==min) return true;
    return false;
}
int main() {
	ull n,q;
	cin>>n>>q;
	ull a[n];
	for(ull i=0;i<n;i++){
	    cin>>a[i];
	}
	form_sequence(a,n);
	ull l,r;
	for(ull i=0;i<q;i++){
	    
	    cin>>l>>r;
	    if(func(a,l,r))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}
