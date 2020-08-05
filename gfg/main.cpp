#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x){
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main() {
	int t;cin>>t;
	vector<vector<int>> vec(t);
	for(int x=0;x<t;x++){
	    
	    int n;
	    bool tf=false;
	    for(int i=2;i<=n/2;i++){
            if(isPrime(i)){
                if(isPrime(n-i)){
                    vec.at(x).push_back(i);
                    vec.at(x).push_back(n-i);
                    tf=true;
                    break;
                }
            }
        }
        if(!tf)
            vec.at(x).push_back(-1);
	}
	for(int i=0;i<t;i++){
	    for(int j=0;j<vec.at(i).size();j++){
	       cout<<vec.at(i).at(j)<<" " ;
	    }
	    cout<<endl;
	}
	return 0;
}

