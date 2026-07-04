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
for(int i=0;i<n;i++){
    int minn=i;
    for(int j=i+1;j<n;j++){
        if(arr[minn]>arr[j]){
            minn=j;
        }
    }
    if(arr[minn]!=arr[i]){
       swap(arr[minn],arr[i]);
    }
}
cout<<"sorted array is \n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<"\n";
}
}
