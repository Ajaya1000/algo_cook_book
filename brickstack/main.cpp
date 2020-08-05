#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    ull max=pow(10,n)-1;
	    
	    ull a,b,c;
	    cin>>a;
	    ull s=2*(max)+2+a;
	    cout<<s<<endl<<flush;
	    cin>>b;
	    s=s-(a+b);
	    
	    ull temp=max+1;
	    if(s-temp>max){
	        cout<<max<<endl<<flush;
	        cin>>c;
	        s=s-c-max;
	        cout<<s<<endl<<flush;
	    }
	        
	    else {
	        
	        
	        cout<<(s-temp)<<endl<<flush;
	        cin>>c;
	        temp=temp-c;
	        cout<<temp<<endl<<flush;
	        
	    }
	    
	    int x;
	    cin>>x;
	    
	    if(x<0)
	        return 0;
        
        
    }
	return 0;
}
