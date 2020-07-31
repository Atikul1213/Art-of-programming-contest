#include<bits/stdc++.h>
#define Size 100
using namespace std;
int main()
{
    int A[Size][Size]={{1,2},{3,4}},B[Size][Size]={{5,6},{7,8}},C[Size][Size];
    int m,n,p,sum;
    m=n=p=2;

    cout<<"A Matrix: "<<endl;
    for(int i=0;i<m;i++){
        cout<<'\t';
        for(int j=0;j<p;j++)
            cout<<A[i][j]<<'\t';
        cout<<endl;
    }

    cout<<"B Matrix: "<<endl;
    for(int i=0;i<p;i++){
            cout<<'\t';
        for(int j=0;j<n;j++){
            cout<<B[i][j]<<'\t';
        }
    cout<<endl;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j] = 0; sum = 0;
            for(int k=0;k<p;k++){
                sum+=C[i][j] + A[i][k]*B[k][j];
            }
            C[i][j] = sum;
        }
    }


    cout<<"C Matrix: "<<endl;
    for(int i=0;i<m;i++){
            cout<<'\t';
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<'\t';
        }
    cout<<endl;
    }
    return 0;
}
