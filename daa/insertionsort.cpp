#include <iostream>

using namespace std;

int main()
{
    int n;
    int temp;
    cout<<"enter the number of elements :";
    cin>>n;
    int arr[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(temp<=arr[j]&&j>=0)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}