#include<bits/stdc++.h>
using namespace std;
int d[11],num=1,b[11][11],l[11],at[11],s=1;

void art(int u,int v){
    int i,j=1,w,f=0;
    d[u] = num;
    l[u] = num;
    num++;
    for(i=1;b[u][i]!=0;i++){
        w = b[u][i];
        if(d[w]==0){
            art(w,u);
            l[u] = (l[u]<l[w])?l[u]:l[w];
        }
        else if(w!=v)
            l[u] = (l[u]<d[w])?l[u]:d[w];
        if(d[u]<=l[w])
            f = 1;
    }
    if(f)
        at[s++] = u;
}


int main()
{
    int i,j,a[11][11],n,u,v,k,f=0;
    for(i=1;i<11;i++)
        for(j=1;j<11;j++)
            a[i][j] = 0;
    cout<<"\n\n Enter how many nodes(0<n<11): ";
    cin>>n;
    cout<<"\n\n Enter your edges(u sp v) (press e for end): ";
    for(i=1;i<=(n*n)/2;i++){
        if(getchar()=='e')
            break;
        cin>>u>>v;
        a[u][v] = a[v][u] = 1;
    }
    for(i=1;i<=n;i++){
        k = 1;
        for(j=1;j<=n;j++)
        if(a[i][j]){
            b[i][k] = j;
            k++;
        }
        b[i][k] = 0;
    }
    for(j=1,i=1;b[1][j]!=0;j++){
        k = b[1][j];
        if(b[k][2])
            i++;
    }
    if(j==i)
        f= 1;
    art(1,1);
    at[s] = -9;
    cout<<"\n\n Articulation point are: ";
    if(!f)
        for(i=1;at[i]!=-9;i++)
        cout<<at[i];
    if(f)
        for(i=1;at[i]!=1;i++)
        cout<<at[i];
    cout<<endl<<endl;
    return 0;
}
