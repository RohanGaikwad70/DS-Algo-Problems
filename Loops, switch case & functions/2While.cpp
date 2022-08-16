

// SUM OF N EVEN NUMBERS USING WHILE LOOP

#include<iostream>
using namespace std;

int main()
{
    int n,i=2,sum=0;
    cout<<"enter n"<<endl;
    cin>>n;

    while(i<n)
    {
        sum=sum+i;
        i=i+2;

    }
    cout<<"sum of even number from  2 to "<<n<<"  is "<< sum <<endl;
    return 0;
    
}
