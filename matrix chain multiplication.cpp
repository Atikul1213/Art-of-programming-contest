#include<bits/stdc++.h>
#define Max 15
#define INF 4294967295
using namespace std;
int num;
void print(unsigned long s[][Max],int i,int j){
    if(i==j)
        cout<<"A"<<num++;
    else{
        cout<<"(";
        print(s,i,s[i][j]);
        cout<<" x ";
        print(s,s[i][j]+1,j);
        cout<<")";
    }
}
void matrix_chin_order(int *p,int n){
    unsigned long m[Max][Max] = {0};
    unsigned long s[Max][Max] = {0};
    unsigned int q;
    int l,j,i,k;
    for(l=2;l<=n;l++){
        for(i=1;i<=n-l+1;i++){
            j = i+l-1;
            m[i][j] = INF;
            for(k=i;k<j;k++)
                q = m[i][k] + m[k+1][j]+p[i-1]*p[k]*p[j];
            if(q<m[i][j]){
                m[i][j] = q;
                s[i][j] = k;
            }
        }
    }
    num = 1;
    print(s,1,n);
}
int main()
{
    int n;
    int p[Max]={0};
    int i;
    while(scanf("%d",&n),n){
        for(i=1;i<=n;i++)
            cin>>p[i-1]>>p[i];
        matrix_chin_order(p,n);
        cout<<endl;
    }
    return 0;
}
