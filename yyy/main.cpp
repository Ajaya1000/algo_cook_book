#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;    //m--no. of visit  by the king
	cin>>n>>m;  //n--no. of citizen
    n+=m;
	int temp;
	std::vector<int> vec;
	vector<int> ans;
	vector<int>::iterator max_it;
	int count=m;
	for(int i=0;i<n;i++){
	    cin>>temp;
	    if(temp<0){
	        count--;
	        max_it=max_element(vec.begin(),vec.end());
	       ans.push_back(*max_it);
	        vec.erase(max_it);
	    }
	    if(count==0) break;
	    vec.push_back(temp);
	}
	for(auto x:ans){
	    cout<<x<<endl;
	}
	return 0;
}
