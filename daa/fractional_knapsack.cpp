#include <bits/stdc++.h>
using namespace std;
struct Item
{
    int value,weigth;
};
bool compare(struct Item a,struct Item b)
{
    double r1=(double)a.value/ (double)a.weigth;
    double r2=(double)b.value/ (double)b.weigth;
    return r1>r2;
}
double fractionalknapsack(struct Item arr[],int n,int W)
{
    sort(arr,arr+n,compare);
    double result=0.0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].weigth<=W)
        {
            result=result+arr[i].value;
            W=W-arr[i].weigth;
        }
        else
        {
            result=result+arr[i].value*((double)W/(double)arr[i].weigth);
            break;
        }
    }
    return result;
}
int main()
{
    cout<<"how many values :";
    int n;
    cin>>n;
    Item arr[n];
    int W;
    cout<<"enter total weight :";
    cin>>W;
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"enter value for "<<i+1<<" item :";
        cin>>arr[i].value;
        cout<<"enter weight for "<<i+1<<" item :";
        cin>>arr[i].weigth;
    }
    cout<<"maximum value we can obtain :"<<fractionalknapsack(arr,n,W);
    return 0;
    
}