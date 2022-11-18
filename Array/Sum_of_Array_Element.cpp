#include<iostream>
using namespace std;

//Taking input
int ip(int arr[],int n){
    for(int i=0;i<=n;i++){
    cin>>arr[i];
}}
//printing array 
int op(int arr[],int n){
    for(int i=0;i<=n;i++){
    cout<<arr[i];
}}
// sum of array 
int suma(int arr[],int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter ip";
     ip(arr,n);
     cout<<"op of array :";
     op(arr,n);
     cout<<"sum of Array : ";
     suma(arr,n);
}
