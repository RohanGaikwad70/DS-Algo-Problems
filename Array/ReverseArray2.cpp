#include<iostream>
using namespace std;


void ulta(int arr[],int n)
{
    int temp;
    for(int i=0;i<=n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i];
        arr[n-i]=temp;
    }
}

int main()
{
    int n;
    cout<<"Arrays Ki Size batao bhai: ";
    cin>>n;
    int rg[n];


cout<<" Arrays ke element enter karo bhai:  ";
for(int i=0;i<=n;i++)
{
    cin>>rg[i];
}
cout<<"sidha Array :";
for(int i=0;i<=n;i++)
{
    cout<<rg[i]<<" ";
}
// ulta array
ulta(rg,n);
cout<<" ulta Array:";

for(int i=0;i<=n;i++)
{
    
    cout<<rg[i]<<" ";

}






}


