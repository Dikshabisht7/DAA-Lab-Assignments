#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,t,key;
    cin>>t; //Total number of test cases
    while(t--){
        cin>>n; //Size of array
        int arr[n]; 
        //Elements of array
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>key;
        sort(arr,arr+n);
        int l=0,r=n-1,f=0;
        while(l<r){
            if(arr[l]+arr[r]==key){
                cout<<arr[l]<<" "<<arr[r]<<",";
                r--;
                f=1;
            }
            else if (arr[l]+arr[r]<key)
                l++;
            else
                r--;
        }
        if(f==0)
            cout<<"\nNo such pair exist"<<endl;
    }
    return 0;
}