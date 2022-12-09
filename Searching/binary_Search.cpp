#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=(start+end)/2;

for(int i=0;i<=size;i++){
    if(key==arr[mid]){
        return mid;
    }
    if(key<arr[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[100]={10,20,30,40,50,51,66,70,80};
     int index=binarysearch(arr,9,51);
      if(index==-1){
        cout<<"key is not Present ";
      }
else{
 cout<<"Key is Present at index:"<<index;
}
    
}
