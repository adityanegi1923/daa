#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number of elements :";
    cin>>n;
    int arr[n];
    int i,j;
    int min;
    int temp;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }  
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}