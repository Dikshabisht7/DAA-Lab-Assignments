#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Duplicate_elements(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int n,i,t;
    cin>>t; //Total number of test cases
    while(t--){
        cin>>n; //Size of array
        int arr[n]; 
        //Elements of array
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        Duplicate_elements(arr,n);
    }
    return 0;
}