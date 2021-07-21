#include <iostream>
using namespace std;

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