#include<bits/stdc++.h>
using namespace std;
void merge(string &vec,int l,int m,int r){
    int n1,n2;
    n1=m-l+1;
    n2=r-m;
    int i=0,j=0,k=l;
    char a[n1];
    char b[n2];
    while(i<n1){
        
        a[i]=vec[l+i];
        i++;
    }
    while(j<n2){
        
        b[j]=vec[m+1+j];
        j++;
    }
    i=0;j=0;
    while(i<n1 && j<n2){
        
        if(a[i]<b[j]){
            vec[k]=a[i];
            i++;
        }
        else{
            vec[k]=b[j];
            j++;
            //count++;
        }
        k++;
    }
    while(j<n2){
        vec[k]=b[j];
        j++;
        k++;
    }
    while(i<n1){
        vec[k]=a[i];
        i++;
        k++;
        //count++;
    }
    
}
void mergesort(string &s,int l,int r){
    
    if(l<r){
        
        int m=l+(r-l)/2;
        mergesort(s,l,m);
        mergesort(s,m+1,r);
        
        merge(s,l,m,r);
    }
    
}
void permutation(string s,int i,int n){
    if(i==n-1){
        cout<<s<<" ";
        return ;
    }
    
    mergesort(s,i,n-1);
    
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
	    string s;cin>>s;
	    permutation(s,0,s.size());
	    cout<<endl;
	}
	return 0;
}