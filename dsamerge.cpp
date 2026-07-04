#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    int i=start,j=mid+1;
    int k=0;
    int temp[100];
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i];
            i++;
        }
        else{
            temp[k++]=arr[j];
            j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=end){
        temp[k]=arr[j];
        k++;
        j++;
    }
    for(int j=0;j<k;j++){
        arr[start+j]=temp[j];
    }
}
void mergesort(int arr[],int start,int end){
    int mid;
    if(start<end){
        mid=(start+end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
int main(){
    int arr[5]={4,1,6,2,3};
    mergesort(arr,0,4);
    cout<<"sorted array is \n";
    for(int i=0;i<5;i++){
    cout<<arr[i]<<"\n";
}
}