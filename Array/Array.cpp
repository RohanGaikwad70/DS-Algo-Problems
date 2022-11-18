// Taking input and Printing a  Array 

#include<iostream>
using namespace std;
// For taking input for Array
int input(int arr[],int size ){
  for(int i=0;i<=size;i++){
    cin>>arr[i];
  }
}
  // For Printing  a Array 
int output(int arr[],int size ){
  for(int i=0;i<=size;i++){
    cout<<arr[i]<<" ";
  }
}
// Main 
  int main(){
    int size;
    cout<<"Enter a Size Of Array:";
    cin>>size;
    
    int arr[size];
   cout<<"enter the Element of array ;";
    input(arr,size);
    cout<<"Printing the Array :";
    output(arr,size);
    
    return 0;
  }
  
  
  
  
  
  
