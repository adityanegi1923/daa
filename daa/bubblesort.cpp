#include<iostream>
using namespace std;
int main()
{
    int temp;
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(arr[j]>arr[k])
            {
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(int a=0;a<n;a++)
    {
        cout<<arr[a]<<" ";
    }
}