#include<bits/stdc++.h>
#define pb push_back
typedef unsigned long long ull;
using namespace std;
// ull func(vector<ull> vec){
    
//     if(vec.size()==1)
//         return 0;
    
//     auto it=min_element(vec.begin(),vec.end());
    
//     ull count=(it-vec.begin());
//     vec.erase(it);
//     count+=func(vec);
//     return count;
// }

ull func(vector<ull> &vec){
    ull count=0;
    auto it=vec.begin();
    while(vec.size()>1){
        it=min_element(vec.begin(),vec.end());
        count+=(it-vec.begin());
        vec.erase(it);
    }
}
int main()
 {
	int t;cin>>t;
	while(t--){
	    ull n;cin>>n;
	    vector<ull> vec;
	    ull temp;
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        vec.pb(temp);
	    }
	    cout<<func(vec)<<endl;
	
	}
	return 0;
}