#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;cin>>t;
	while(t--){
	    long n;
	    cin>>n;
	    long a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long max=0;
	    stack<long> vec;
	    for(long i=n-1;i>=0;i--){
	        if(max<=a[i]){
	            max=a[i];
	            vec.push(max);
	            
	        }
	    }
	    while(!vec.empty()){
	        cout<<vec.top()<<" ";
	        vec.pop();
	    }
	    cout<<endl;
	
	}
	return 0;
}