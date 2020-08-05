#include <bits/stdc++.h>
#define pi pair<int,int>
typedef unsigned int uint;
typedef unsigned long long ull;
using namespace std;
map<ull,ull> increasing_sequence;
map<ull,ull> decreasing_sequnce;
void form_sequence(ull a[],ull s){
    ull max_c=1;
    ull min_c=1;
    ull i=0;
    for(;i<(s-1);i++){
        if(a[i]>a[i+1]){
            if(max_c>1) {increasing_sequence.insert(pi((i+1)-max_c,i));}
            max_c=1;
            min_c++;
        }
        else{
            if(min_c>1) {decreasing_sequnce.insert(pi((i+1)-min_c,i));}
            min_c=1;
            max_c++;
        }
    }
    if(max_c>1) {increasing_sequence.insert(pi((i+1)-max_c,i));}
    if(min_c>1) {decreasing_sequnce.insert(pi((i+1)-min_c,i));}
}
bool func(ull a[],ull l,ull r){
    ull max=0;
    ull min=0;
    l--;
    r--;
    for(auto it=increasing_sequence.begin();it!=increasing_sequence.end();it++){
        if((it->first)>=r) break;
        if(it->first>=l && it->first<r)
        max++;
        
    }
    for(auto it=decreasing_sequnce.begin();it!=decreasing_sequnce.end();it++){
        if((it->first)>=r) break;
        if(it->first>=l && it->first<r)
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
