#include <iostream>
using namespace std;

int leftPosition(int arr[],int l,int r,int key){
    int mid;
    while(r-l>1){
        mid=l+(r-l)/2;
        if( arr[mid]>=key)
            r=mid;
        else
            l=mid;
    }
    return r;
}

int rightPosition(int arr[],int l,int r,int key){
    int mid;
    while(r-l>1){
        mid=l+(r-l)/2;
        if( arr[mid]<=key )
            l = mid;
        else
            r = mid;
    }
    return l;
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
        int l=leftPosition(arr,-1,n-1,key);
        int r=rightPosition(arr,0,n,key);
        if((r-l)+1==0 || (l==r && arr[l]!=key))
            cout<<"Key not present"<<endl;
        else
            cout<<key<<"->"<<(r-l)+1<<endl;
    }
    return 0;
}