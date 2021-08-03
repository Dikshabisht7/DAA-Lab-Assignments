#include <iostream>
using namespace std;

void binarySearch(int arr[],int l,int r,int key,int c){
    int mid;
    if (r>=l) {
        mid=l+(r-l)/2;
        c++;
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
        binarySearch(arr,0,n-1,key,0);
    }
    return 0;
}