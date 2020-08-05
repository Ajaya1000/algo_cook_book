#include <bits/stdc++.h>
using namespace std;
bool palindrom(vector<vector<int>> &a,int x,int y,int i){
    i=i/2;
    bool v=true;
    bool h=true;
    
    //for horizontal
    for(int j=1;j<=i;j++){
        if(a[x][y-j]!=a[x][y+j]){
            h=false;
            break;
        }
    }
    
    //for vertical
    for(int j=1;j<=i;j++){
        if(a[x-j][y]!=a[x+j][y]){
            v=false;
            break;
        }
    }
    if(v && h)
        return true;
    return false;
}

int validpair(vector<vector<int>> &a,int n,int m,int i){
    int count=0;
    int min=(i-1)/2;
    for(int x=min;x<n-min;x++){
        for(int y=min;y<m-min;y++){
            
           if(palindrom(a,x,y,i))
            count++;
        }
    }
    
    return count;
}
int func(vector<vector<int>> &a,int n,int m){
    int x=(n>m)?m:n;
    int sum=0;
    for(int i=1;i<=x;i+=2){
        sum+=validpair(a,n,m,i);
    }
    
    return sum;
    
}
int main() {
	int t;
	cin>>t;
	while(t--){
        int row,column;
	    cin>>row>>column;
	    vector<vector<int>> a(row,vector<int>(column,0));
        int temp;
	    for(int i=0;i<row;i++){
	        for(int j=0;j<column;j++){
	            cin>>temp;
	            a[i][j]=temp;
	            
	        }
	    }
	    
	    cout<<func(a,row,column)<<endl;
	    
	    
	}
	return 0;
}
