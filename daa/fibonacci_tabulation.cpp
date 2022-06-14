#include <iostream>
using namespace std;
int fib(int n)
{
   int f[n+1];
   f[0]=0;
   f[1]=1;
   for(int i=2;i<=n;i++)
   {
       f[i]=f[i-1]+f[i-2];
   }
   return f[n];
}
int main()
{
    int n;
    cout<<"enter the no :";
    cin>>n;
    cout<<"fibonaaci number is : "<<fib(n);
    return 0;
}