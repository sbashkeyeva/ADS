#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

int main()
{
    int a[1001][1001];
    int colorArr[1001];
    int x;
    int src=1;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        colorArr[i]=-1;
        for(int j=1;j<=x;j++)
        {
            cin>>a[i][j];
        }
        
    }
    colorArr[src]=1;
    queue <int> queue;
    queue.push(src);
    while(!queue.empty())
    {
        int n=queue.front();
        queue.pop();
        for(int i=1;i<=x;i++)
        {
            if(a[n][i]==1 && colorArr[i]==-1)
            {
                colorArr[i]=1-colorArr[n];
                queue.push(i);
            }
            else 
            {
                if(a[n][i]==1 && colorArr[i]==colorArr[n])
                {
                    cout<<"NOPARTITE";
                    return 0;
                }
            }
        }

    }
    cout<<"BIPARTITE";

    return 0;
}