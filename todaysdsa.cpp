#include<bits/stdc++.h>
using namespace std;
int fmax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int findsecondmax(int arr[],int n){
    int max=arr[0];
    int secondlargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            secondlargest=max;
            max=arr[i];
        }
        else if(arr[i]>secondlargest){
            secondlargest=arr[i];
        }


    }
    return secondlargest;
}
bool isSorted(int nums[],int n){
		for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }	
        return true;
}
int r_dup(int nums[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(nums[i]!=0){
            i++;
            nums[i]=nums[j];
        }
    }
    i++;
    return i;
}
void movezero(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
             i++;
        }
    }
    return ;
}
void leftrotate(int nums[],int n){
    int a=nums[0],i;
    for( i=1;i<n;i++){
        nums[i-1]=nums[i];
    }
    nums[i-1]=a;
}
void reversek(int nums[],int start,int end){
    end--;
    while(start<=end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
    return ;
}
void leftrotatek(int nums[],int n,int k){
    k=k%n;
    reversek(nums,0,k);
    reversek(nums,k,n);
    reversek(nums,0,n);
}
int lsearch(int arr[],int n,int t){
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            return i;
        }
    }
    return -1;
}
int temp[100];
int unionn(int arr1[],int arr2[], int n,int m){
    int i=0,j=0,k=0;
    while(i<n &&  j<m){
        if(arr1[i]<arr2[j]){
            if(temp[k-1]==arr1[i]){
                i++;
            }
            else{
                temp[k]=arr1[i];
                k++;
                i++;
            }
        }
        else if(arr1[i]==arr2[j]){
            temp[k]=arr1[i];
            i++;
            j++;
            k++;
        }
        else{
            if(temp[k-1]==arr2[j]){
                j++;
            }
            else{
                temp[k]=arr2[j];
                k++;
                i++;
            }
        }
    }
    while(i<n){
         if(temp[k-1]==arr1[i]){
                i++;
            }
        else{
            temp[k]=arr1[i];
            k++;                i++;
        }
    }
     while(j<m){
         if(temp[k-1]==arr2[j]){
                j++;
            }
        else{
            temp[k]=arr2[j];
            k++;
            i++;
        }
    }
    return k;
}
int singlenum(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    return ans;
}
int missingnum(vector<int> &arr){
    int s1=0;
    for(int i=0;i<=arr.size();i++ ){
        s1^=i;
    }
    int s2=0;
    for(int x:arr){
        s2^=x;
    }
    return s1^s2;
}
int main(){
    vector<int> nums={0,1,3,4,5};
    cout<<missingnum(nums);

}
