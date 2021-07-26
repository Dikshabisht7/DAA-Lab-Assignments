#include <iostream>
using namespace std;

void findSequence(int arr[],int l,int r,int n){
    int flag=0;
    for(int k=1;k<=n;k++){
        l=1,r=n;
        while(l<r){
            int sum=arr[l]+arr[r];
            if (sum==arr[k]){
                cout<<l<<", "<<r<<", "<<k<<endl;
                return;
            }
            else if (sum<arr[k]) 
                l++;
            else r--;
        }
    }
    cout<<"Sequence not found"<<endl;
}

int main(){
    int n,i,t;
    cin>>t; //Total number of test cases
    while(t--){
        cin>>n; //Size of array
        int arr[n];
        //Elements of array
        for(i=1;i<=n;i++){
            cin>>arr[i];
        }
        findSequence(arr,1,n,n);
    }
    return 0;
}