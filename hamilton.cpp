#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag,i;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++){
        flag=1;
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
            flag=0;
            break;
            }
        }
        if(flag==1)
        cout<<a[i]<<" ";
        
    }
    
}
   