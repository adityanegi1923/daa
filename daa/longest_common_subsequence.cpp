#include<bits/stdc++.h>
using namespace std; 
int lcs(char *x,char *y,int m,int n)
{
    int l[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            {
                l[i][j]=0;
            }
            else if(x[i-1]==y[j-1])
            {
                l[i][j]=l[i-1][j-1]+1;
            }
            else
            {
                l[i][j]=max(l[i-1][j],l[i][j-1]);
            }
        }
    }
    return l[m][n];
}
int main()
{
    char x[] = "AGGTAB";
    char y[] = "GXTXAYB";
 
    int m = strlen(x);
    int n = strlen(y);
    cout<<"length of largest common subsequence : "<<lcs(x,y,m,n);
    return 0;
    
    
}