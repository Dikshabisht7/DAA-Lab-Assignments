#include <iostream>
using namespace std;


void Insertion_Sort(int arr[],int n){
    int t,j,c=0,s=0;
    for(int i=1;i<n;i++){
        t=arr[i];
        j=i-1;
        while(arr[j]>t && j>=0){
            arr[j+1]=arr[j];
            j=j-1;
            c++;
            s++;
        }
        arr[j+1]=t;
        s++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nComparisons: "<<c<<endl;
    cout<<"Shifts: "<<s<<endl;
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
        Insertion_Sort(arr,n);
    }
    return 0;
}