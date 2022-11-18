#include<iostream>
using namespace std;

bool search(int arr[],int key)
{
    for(int i=0;i<=10;i++){
     if (arr[i]==key){
       return 1; 
    }
    }
    return 0;
}

int main(){
    int arr[10]={1,2,3,44,4,5};
    int key;
    cout<<"Enter a Key to search : ";
    cin>>key;
    int found=search(arr,key);

    if(found){
        cout<<"KEY is Present  ";
    }
    else{
        cout<<"key is Absent ";
    }

    return 0;
}
