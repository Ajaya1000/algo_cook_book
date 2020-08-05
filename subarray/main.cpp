#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ull;
using namespace std;
vector<ull> my_map;
void func(ull n,ull s){
    ull vec[n];
    ull temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        vec[i]=temp;
    }
    int i=0;int j=0;
    for(;i<n;i++){
        ull sum=0;
        for(j=i;j<n;j++){
            sum+=vec[j];
            if(sum==s){
                my_map.pb(i+1);
                my_map.pb(j+1);
                return;
            }
            if(sum>s)
                break;
        }
        
    }
    my_map.pb(-1);
    my_map.pb(-1);
    return;
}
int main() {
	int t;cin>>t;
	while(t--){
	    ull n;cin>>n;
	    ull s;cin>>s;
	    func(n,s);
	}
	for(int i=0;i<my_map.size();i=i+2){
	    if(my_map[i]<0)
	        cout<<my_map.at(i)<<endl;
	    else
	        cout<<my_map.at(i)<<" "<<my_map.at(i+1)<<endl;
	}
	return 0;
}