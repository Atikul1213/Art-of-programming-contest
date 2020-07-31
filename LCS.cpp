#include<bits/stdc++.h>
#define Max 100
using namespace std;
char str1[Max],str2[Max];

void p_lcs(int b[Max][Max],int i,int j){
    if( (i==0)||(j==0) )
        return;
    if(b[i][j]==1){
        p_lcs(b,i-1,j-1);
        cout<<str1[i-1];
    }
    else if(b[i][j]==2)
        p_lcs(b,i-1,j);
    else
        p_lcs(b,i,j-1);
}
void LCS_LNT(bool I){
    int c[Max][Max]={0},b[Max][Max]={0},l1,l2;
    l1 = strlen(str1)+1;
    l2 = strlen(str2)+1;
    register int i,j;
    for(i=1;i<l1;i++){
        for(j=1;j<l2;j++){
            if(str1[i-1]==str2[j-1]){
                c[i][j] = c[i-1][j-1]+1;
                b[i][j] = 1;
            }
            else if(c[i-1][j] >= c[i][j-1]){
                c[i][j] = c[i-1][j];
                b[i][j] = 2;
            }
            else
                c[i][j] = c[i][j-1];
        }
    }
    cout<<c[l1-1][l2-1]<<endl;
    if(I)
        p_lcs(b,l1-1,l2-1);
}
int main()
{
    while(1){
        if(!(gets(str1)));
        if(!(gets(str2)));
        LCS_LNT(1);
    }
    return 0;
}
