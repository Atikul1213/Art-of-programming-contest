#include<bits/stdc++.h>
using namespace std;
int a[20][20], x[20], n;

void next(int k){
    int j;
    while(1){
        x[k] = (x[k]+1)%(n+1);
        if(x[k]==0)
            return;
        if((a[x[k-1]][x[k]])!=0){
            for(j=1;j<=k-1;j++)
                if(x[k]==x[j])
                break;
            if(j==k)
                if((k<n)||(k==n&&a[x[n]][x[1]]!=0))
                return;
        }
    }
}

void hamilt(int k){
    int j;
    while(1){
        next(k);
        if(x[k]==0)
            return;
        if(k==n){
            cout<<"    ";
            for(j=1;j<=n;j++)
                cout<<x[j];
        }
        else
            hamilt(k+1);
    }
}
int main()
{
    int i,u,v;
    x[1] = 1;
    cout<<"\n\n Enter how many node(0<n<20) : ";
    cin>>n;
    cout<<"\n\n Enter your edge(ex u sp v)(press e for end): \n";
    for(i=1;i<=(n*n)/2;i++){
        if(getchar()=='e')
            break;
        cin>>u>>v;
        a[u][v] = a[v][u] = 1;
    }
    hamilt(2);
    cout<<endl<<endl;
    return 0;
}
