#include <iostream>
using namespace std;

int main(){
    int m,n,i,j;
    cin>>m; //Size of array
    int arr1[m]; 
    //Elements of array
    for(i=0;i<m;i++){
        cin>>arr1[i];
    }
    cin>>n; //Size of array
    int arr2[n]; 
    //Elements of array
    for(i=0;i<n;i++){
        cin>>arr2[i];
    }
    i=0,j=0;
    while(i<m && j<n) {
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    return 0;
}