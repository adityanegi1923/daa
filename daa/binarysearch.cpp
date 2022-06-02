#include<iostream>
using namespace std;
int binsearch(int arr[],int key,int l,int h)
{
    while(l<=h)
    {
       int mid=l+(h-l)/2;
       if(arr[mid]==key)
           return mid;
       if(arr[mid]<key)
           l=mid+1;
       else
           h=mid-1;
       return -1;
    }
}
int main()
{

        int n;
        cout<<"enter the no of elements :";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int l,h;
        l=arr[0];
        h=arr[n];
        int key;
        cout<<"enter the element to be searched :";
        cin>>key;
        int result=binsearch(arr,key,l,h);
        if(result==-1)
        {
            cout<<"key is not found"<<endl;
        }
        else
        {
            cout<<"key is found "<<result<<endl;
        }
    return 0;
}