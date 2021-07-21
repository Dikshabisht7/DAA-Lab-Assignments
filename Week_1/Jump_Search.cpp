#include <iostream>
#include <cmath>
using namespace std;
void jumpSearch(int arr[],int n,int key){
    int step=sqrt(n);
    int prev=0,c=0;
    while(arr[min(step,n)-1]<key){
        prev=step;
        step+=sqrt(n);
        c++;
        if(prev>=n){
            cout<<"Not Present "<<c<<endl;
            return;
        }
    }
    c++;
    while(arr[prev]<key){
        prev++;
        c++;
        if (prev==min(step,n)){
            cout<<"Not Present "<<c<<endl;
            return;
        }
    }
    c+=2;
    if(arr[prev]==key){
        cout<<"Present "<<c<<endl;
        return;
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
        jumpSearch(arr,n,key);
    }
    return 0;
}