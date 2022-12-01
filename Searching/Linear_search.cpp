
// linearch search program 



#include<iostream>
using namespace std;

//input for array
int getin(int arr[], int size){
    for(int i=0;i<=size;i++){
    cin>>arr[i];
    }
}

//Printing the  array
void print(int arr[],int size){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}

// function to perform linear search 
bool search(int arr[],int size,int key){                                
    for(int i=0;i<=size;i++){
   
     if(arr[i]==key){
     return 1;
        }
    }
    return 0;

}

int main(){
    int arr[10000];
   int size;
cout<<"enter size of array:";
cin>>size;
cout<<"Enter element of Array: ";

 getin( arr,  size);
cout<<"You have entered element :";
 print( arr,size);
cout<<endl;

int key;
cout<<"enter key element to search  :";
cin>>key;

bool found= search(arr,size,key);

if(found){
    cout<<" Element found ";
}
else{
    cout<<" Element Not found";
}

return 0;
}
