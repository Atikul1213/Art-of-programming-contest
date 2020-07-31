#include<bits/stdc++.h>
#define N 100
#define Max INT_MAX
using namespace std;
int mat[N][N], M[N][N],Q[N][4],front = -1, rear = -1;
int m,n,nc,nr,p,s,finalSum=Max,leaf,r,c,i;

void init(){
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        M[i][j] = Max, mat[i][j] = 0;
}

void nQ(int r,int c,int p,int s){
    Q[++rear][0] = r, Q[rear][1] = c, Q[rear][2] = p;
    Q[rear][3] = s;
}
void dQ(int *r,int *c,int *p,int *s){
    *r = Q[++front][0];
    *c = Q[front][1];
    *p = front;
    *s = Q[front][3];
}
void bfs(){
    for(r=0,c=0;r<m;r++)
        nQ(r,c,-1,mat[r][c]);
    do{
        dQ(&r,&c,&p,&s);
        if(c<n-1)
        for(i=-1;i<2;i++){
            nr = (m+r+i)%m, nc = c + 1;
            if(M[nr][nc] > s+mat[nr][nc])
                nQ(nr,nc,p,s+mat[nr][nc]), M[nr][nc] = s+mat[nr][nc];
        }
        else if(s<finalSum)
            finalSum = s, leaf = p;
    }while(rear!=front);
}

void dfs(int leaf){
    if(Q[leaf][2]==-1){
        cout<<"<"<<Q[leaf][0]+1<<","<<Q[leaf][1]+1<<">";
        return;
    }
    dfs(Q[leaf][2]);
    printf(" <%d, %d>",Q[leaf][0]+1,Q[leaf][1]+1);
}
int main()
{
    int i,j,t;
    init();
    freopen("in.txt","r",stdin);
    cin>>m>>n;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++){
        cin>>t;
        mat[i][j] = t;
    }
    bfs();
    cout<<"Final sum : "<<finalSum<<"Path:";
    dfs(leaf);
    return 0;
}
