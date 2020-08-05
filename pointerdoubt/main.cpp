#include <bits/stdc++.h>
#define pb push_back
typedef unsigned long long ull; 
using namespace std;
void trans(vector<ull> &vec,vector<ull>::iterator it){
    auto it2=vec.begin();
    while(it2!=it){
        *it2-=(*it);
        it2++;
        }
}
int dist(vector<ull> &vec,vector<ull>::iterator it){
    int t=0;
    while(it!=num.begin()){
        t++;
        it--;
    }
    return t;
}
ull func(vector<ull> &vec){
    ull sum=0;
    auto it_end=vec.end();
    auto it_min=min_element(vec.begin(),it_end);
    while(it_end!=vec.begin()){
        
        it_min=min_element(vec.begin(),it_end);
        sum=sum+dist(vec,it_end)*(*it_min);
        trans(vec,it_min);
        it_end=min_element(vec.begin(),it_min);
      
    }
    return sum;
}
int main() {
	int t;cin>>t;
	std::vector<ull> vec;
	while(t--){
	    int n;cin>>n;
	    vector<ull> num;
	     ull temp;
	    while(n--){
	       cin>>temp;
	       num.pb(temp);
	    }
	    vec.pb(func(num));
	}
	
	for(auto x:vec)
	    cout<<x<<endl;
	return 0;
}
