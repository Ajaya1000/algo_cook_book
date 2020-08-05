#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
    
    for(int i=1;i<n;i++){
        int temp=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[i]>=a[j]){
                    a[j+1]=temp;
                    break;
                }
            
         
            a[j+1]=a[j];
        }
    }
}
int main(){
    int n;cin>>n;
    int ar[n];

    for(auto &x:ar){
        cin>>x;
    } 
    
    
    insertion_sort(ar,n);
    
    
    
    for(auto x:ar)
    cout<<x<<'\t';   

}
