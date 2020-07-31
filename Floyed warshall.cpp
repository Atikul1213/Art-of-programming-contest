#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<n;i++)
    for(int j=0;j<jn;j++){
        d[i][j] = w[i][j];
        p[i][j] = i;
    }
    for(int i=0;i<n;i++) d[i][i] = 0;

    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    if(d[i][k] + d[k][j] < d[i][j]){
        graph[i][j] = graph[i][k] + graph[k][j];
        p[i][j] = p[k][j];
    }
    return 0;
}
