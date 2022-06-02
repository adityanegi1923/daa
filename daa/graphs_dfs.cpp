#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<int> vec[n];
bool vis[n];
void dfs(int vertex)
{
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child:vec[vertex])
    {
        cout<<"par "<<vertex<<", child"<<child<<endl;
        if(vis[child])continue;
        dfs(child);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    cout<<"dfs traversal of a graph"<<endl;
    dfs(1);
}