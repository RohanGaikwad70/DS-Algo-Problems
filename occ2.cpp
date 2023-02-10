#include <iostream>
using namespace std;

//  left 

int focc(int arr[], int n, int k)
{
    int s = 0, e = n - 1, mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (k == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
mid=(s+e)/2;        
    }
return ans;
}

//right 
int locc(int arr[], int n, int k)
{
    int s = 0, e = n - 1, mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (k == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
mid=(s+e)/2;        
    }
return ans;
}






int main()
{
    int arr[] = {1, 3, 4, 5,6, 7, 8, 9, 9,6, 10};
    cout<<"occ "<<focc(arr,11,6)<<endl;
     cout<<"occ "<<locc(arr,11,6);
}


