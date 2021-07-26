#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countPairs(int arr[],int n,int key){
    int c=0,l=0,r=0;
    sort(arr,arr+n); 
    while(r<n){
         if(arr[r]-arr[l]==key){
              c++;
              l++;
              r++;
        }
         else if(arr[r]-arr[l]>key)
              l++;
         else 
              r++;
    }  
    return c;
}

int main(){
    int n,key,i,t;
    cin>>t; //Total number of test cases
    while(t--){
        cin>>n; //Size of array
        int arr[n];
        //Elements of array
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>key; //Element to be found
        cout<<countPairs(arr,n,key)<<endl;
    }
    return 0;
}