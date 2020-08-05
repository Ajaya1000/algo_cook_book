#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
   int temp=a;
   a=b;
   b=temp;
    }
void quick_sort(int a[],int p,int n){
    if(p>=n)
        return;
        
    if(p+1==n){
        
        if(a[p]>a[n]){
            
           swap(a[p],a[n]);
            return;
            
            }
            return;
        }
        
    int min=n;
    int max=p+1;
    while(min>max){
        if(a[min]<=a[p] && a[max]>a[p]){
            swap(a[min],a[max]);
        }
        if(a[min]>a[p])
            min--;
        if(a[max]<=a[p])
            max++;
    }
   swap(a[p],a[min-1]);
   if(a[p]>a[min])
       swap(a[p],a[min]); 
    quick_sort(a,p,min-1);
    quick_sort(a,min,n);
}
int main(){
    int n;cin>>n;
    int ar[n];

    for(auto &x:ar){
        cin>>x;
    } 
    
    
    quick_sort(ar,0,n-1);
    
    for(auto x:ar)
    cout<<x<<'\t';   

}
