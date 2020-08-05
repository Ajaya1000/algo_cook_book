#include<bits/stdc++.h>
using namespace std;
void permutation(string s,int i,int n){
    if(i==n-1){
        cout<<s<<" ";
        return ;
    }
    
    
    
    for(int j=i;j<n;j++){
        
        swap(s[i],s[j]);
        permutation(s,i+1,n);
        swap(s[i],s[j]);
        
    }
    
    
    
}
int main()
 {
	int t;cin>>t;
	while(t--){
	    string s;
	    permutation(s,0,s.size());
	    cout<<endl;
	}
	return 0;
}