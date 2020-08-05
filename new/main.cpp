#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
int main()
 {
	int t;cin>>t;
	while(t--){
	    ull n;
	    cin>>n;   //don't forget to input n
	    if(n==1){cout<<1<<endl;continue;}
	    vector<ull> vec;
	    ull temp;
	    ull sum=0;
	    for(ull i=0;i<n;i++){
	        cin>>temp;
	        sum+=temp;
	        vec.push_back(temp);
	    }
	    ull s=0;
        bool flag=false;
	    ull i=1;
	    for(;i<n;i++){
	        s+=vec.at(i-1);
	        temp=sum-vec.at(i);
	        if((2*s)==temp){flag=true;break;}
	        
	        if(2*s>temp) break;
	    }
	    if(flag)
	    cout<<i+1<<endl;
        else cout<<"-1"<<endl;
	}
	return 0;
}