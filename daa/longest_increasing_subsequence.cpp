#include <bits/stdc++.h>
using namespace std;
int lis(int arr[], int n)
{
    int lis[n];
 
    lis[0] = 1;
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
    return *max_element(lis, lis + n);
}
int main()
{
    int n;
    cout<<"enter the number of elements in array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printf("Length of lis is %d\n", lis(arr, n));
    return 0;
}