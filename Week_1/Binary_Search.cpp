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
        c++;
    }
    cout<<"Not Present "<<c<<endl;
}
  
int main(){
    int n,key,i,t;
    cout<<"Enter number of test cases: ";
    cin>>t;
    while(t--){
        cout<<"Enter size of array: ";
        cin>>n;
        int arr[n];
        cout<<"Enter elements of array: ";
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Enter element to be found: ";
        cin>>key;
        binarySearch(arr,0,n-1,key);
    }
    return 0;
}