#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int s;
	    cin>>s;
	    int a[3];
	    for(int i=0;i<3;i++){
	        cin>>a[i];
	    }
	    int sum=0;
	    int count=0;
	    for(int i=0;i<3;i++){
	        sum+=a[i];
	        
	        if(sum>s){
	            count++;
	            sum=a[i];
	        }
	        
	        if(sum==s){
	            count++;
	            sum=0;
	            continue;
	        }
	        
	    }
	    if(sum!=0)  count++;
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}
