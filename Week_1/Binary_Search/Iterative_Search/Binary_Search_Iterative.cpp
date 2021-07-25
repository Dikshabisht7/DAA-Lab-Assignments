#include <iostream>
using namespace std;

void binarySearch(int arr[],int l,int r,int key){
    int c=0,mid;
    while(r>=l){
        mid=l+(r-l)/2;
        c++;
        if(arr[mid]==key){
            cout<<"Present "<<c<<endl;
            return;
        }
        else if(arr[mid]>key)
            r=mid-1;
        else
            l=mid+1;
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
        binarySearch(arr,0,n-1,key);
    }
    return 0;
}