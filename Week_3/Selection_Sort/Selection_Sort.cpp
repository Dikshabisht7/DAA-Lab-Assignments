#include <iostream>
using namespace std;


void Selection_Sort(int arr[],int n){
    int min,t,c=0,s=0;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
            c++;
        }
        t=arr[min];
        arr[min]=arr[i];
        arr[i]=t;
        s++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nComparisons: "<<c<<endl;
    cout<<"Swaps: "<<s<<endl;
    cout<<endl;
}

int main(){
    int n,i,t;
    cin>>t; //Total number of test cases
    while(t--){
        cin>>n; //Size of array
        int arr[n];
        //Elements of array
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        Selection_Sort(arr,n);
    }
    return 0;
}