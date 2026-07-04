#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
cout<<"Enter the number of elements"<<"\n";
cin>>n;
int arr[n];
cout<<"enter the array element"<<"\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
cout<<"sorted array is \n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<"\n";
}
}
