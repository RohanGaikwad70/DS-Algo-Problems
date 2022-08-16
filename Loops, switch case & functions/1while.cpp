
// check entered number is  prime or not//

#include<iostream>
using namespace std;

int main()
{
int n,i=2;

cout<<"enter number :"<<endl;
cin>>n;

while (i<=n){

  if(i%n==0){
    cout<<"prime  "<<endl;
       }           
  else{
       cout<<"not prime " <<endl;

               i=i+1;

}
return 0;
}
}
