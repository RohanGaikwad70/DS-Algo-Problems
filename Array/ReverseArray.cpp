#include<iostream>
using namespace std;
int main()
{
        int n;
        cout<<"enter a size of array :";
        cin>>n;

    int dost[n];
    for(int i=0;i<=n;i++)
    {
        cin>>dost[i];

    }

int start=0;
int end=n;
while(start < end)
{
    swap(dost[start] , dost[end]);
    start ++;
    end--;

}
for(int i=0;i<=n;i++)
{
    cout<<dost[i]<<" ";
}
    
cout<<endl;
return 0;


}
