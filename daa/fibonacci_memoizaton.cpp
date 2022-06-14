#include <iostream>
using namespace std;
#define nil -1
#define max 100
int lookup[max];
void initialize()
{
    for(int i=0;i<max;i++)
    {
        lookup[i]=nil;
    }
}
int fib(int n)
{
    if(lookup[n]==nil)
    {
        if(n<=1)
        {
            lookup[n]=n;
        }
        else
        {
            lookup[n]=fib(n-1)+fib(n-2);
        }
    }
    return lookup[n];
}
int main()
{
    int n;
    cout<<"enter the no :";
    cin>>n;
    initialize();
    cout<<"fibonaaci number is : "<<fib(n);
    return 0;
}