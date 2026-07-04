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
for(int i=1;i<n;i++){
    int k=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>k){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=k;
}
cout<<"sorted array is \n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<"\n";
}
}
