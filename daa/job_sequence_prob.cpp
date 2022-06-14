#include <bits/stdc++.h>

using namespace std;
struct job
{
    char id;
    int dead;
    int profit;
};
bool comparison(job a,job b)
{
    return(a.profit>b.profit);
}
void printsequence(job arr[],int n)
{
    sort(arr,arr+n,comparison);
    int result[n];
    bool slot[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        slot[i]==false;
    }
    for(i=0;i<n;i++)
    {
        for(j=min(n,arr[i].dead)-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                result[j]=i;
                slot[j]=true;
                break;
            }
        }
    }
    cout<<"sequence of maximum profit :"<<endl;
    for(i=0;i<n;i++)
    {
        if(slot[i])
        {
            cout<<arr[result[i]].id<<" ";
        }
    }
}
int main()
{
    cout<<"how many id's :";
    int n;
    cin>>n;
    job arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"enter id of "<<i+1<<" job :";
        cin>>arr[i].id;
        cout<<"enter deadline of "<<i+1<<" job :";
        cin>>arr[i].dead;
         cout<<"enter profit of "<<i+1<<" job :";
        cin>>arr[i].profit;
    }
    printsequence(arr,n);
    return 0;
    
}