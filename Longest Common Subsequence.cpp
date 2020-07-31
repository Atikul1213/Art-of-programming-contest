#include<bits/stdc++.h>
#define Max 100
using namespace std;

char X[Max],Y[Max];
int i,j,m,n,C[Max][Max],B[Max][Max];


int LCSLength(){
    m = strlen(X);
    n = strlen(Y);

    for(int i=1;i<=m;i++) C[i][0] = 0;
    for(int i=1;j<=n;j++) C[0][j] = 0;

    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++){
        if(X[i-1] == Y[j-1]){
            C[i][j]  = C[i-1][j-1] +1;
            B[i][j] = 1;
        }
        else if(C[i-1][j] >= C[i][j-1]){
            C[i][j] = C[i-1][j];
            B[i][j] = 2;
        }
        else{
            C[i][j] = C[i][j-1];
            B[i][j] = 3;
        }
    }
    return C[m][n];
}

void printLCS(int i,int j){
    if(i==0 || j==0)
        return;
    if(B[i][j]==1){
        printLCS(i-1,j-1);
        cout<<X[i-1];
    }
    else if(B[i][j]==2)
        printLCS(i-1,j);
    else
        printLCS(i,j-1);
}

int main()
{
    while(1){
        gets(X);
        if(feof(stdin))
            break;
        gets(Y);
        cout<<"LCS lenght: "<<LCSLength()<<endl;
        printLCS(m,n);
        cout<<endl;
    }
    return 0;
}
