#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    signed int a[n],fre[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(fre[i]!=0){
            fre[i]=count;
        }
    }
    int max=fre[0];
    for(int i=0;i<n;i++){
        if(fre[i]>max){
            max=fre[i];
        }
    }
    for(int i=0;i<n;i++){
        if(fre[i]==max){
            cout<<a[i];
        }
    }
    return 0;
}