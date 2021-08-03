#include <iostream>
#include <cmath>
using namespace std;

void binarySearch(int arr[], int l, int r, int key,int c){
    if (r>=l){
        c++;
        int mid=l+(r-l)/2;
        if (arr[mid]==key){
            cout<<"Present "<<c<<endl;
            return;
        }
        if (arr[mid]>key)
            return binarySearch(arr,l,mid-1,key,c);
        return binarySearch(arr,mid+1,r,key,c);
    }
    cout<<"Not Present "<<c<<endl;
}

void exponentialSearch(int arr[],int n,int key){
    int i=1,c=1;
    if (arr[0]==key){
        cout<<"Present "<<c<<endl;
        return;
    }
    while(i<n && arr[i]<=key){
        i=i*2;
        c++;
    }
    binarySearch(arr,i/2,min(i,n-1),key,c);
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
        exponentialSearch(arr,n,key);
    }
    return 0;
}