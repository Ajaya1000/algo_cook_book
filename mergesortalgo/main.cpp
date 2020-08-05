#include <bits/stdc++.h>
//#define pb push_back
using namespace std;
void merge(int vec[],int l,int m,int r){
    int n1,n2;
    n1=m-l+1;
    n2=r-m;
    int i=0,j=0,k=l;
    int a[n1];
    int b[n2];
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
            count++;
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
void mergesort(int vec[],int l,int r){
    
    if(l<r){
        
        int m=l+(r-l)/2;
        mergesort(vec,l,m);
        mergesort(vec,m+1,r);
        
        merge(vec,l,m,r);
    }
    
}
int main(){
    int n;
    cin>>n;
    int vec[n];
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        vec[i]=temp;
    }
    mergesort(vec,0,n-1);
    
    for(auto x:vec){
        cout<<x<<" ";
        }
    
}