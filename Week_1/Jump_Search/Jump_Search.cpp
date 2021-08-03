#include <iostream>
#include <cmath>
using namespace std;
void jumpSearch(int arr[],int n,int key){
    int step=sqrt(n);
    int prev=0,c=0;
    while(arr[min(step,n)-1]<key){
        c++;
        prev=step;
        step+=sqrt(n);
        if(prev>=n){
            cout<<"Not Present "<<c<<endl;
            return;
        }
    }
    while(arr[prev]<key){
        prev++;
        c++;
        if (prev==min(step,n)){
            cout<<"Not Present "<<c<<endl;
            return;
        }
    }
    if(arr[prev]==key){
        c++;
        cout<<"Present "<<c<<endl;
        return;
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
        jumpSearch(arr,n,key);
    }
    return 0;
}