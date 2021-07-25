#include <iostream>
using namespace std;

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
        for(i=0;i<n;i++){
            if(key==arr[i]){
                cout<<"Present "<<i+1<<endl;
                break;
            }
        }
        if(i==n){
            cout<<"Not Present "<<n<<endl;
        }
    }
    return 0;
}