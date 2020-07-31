#include<bits/stdc++.h>
#define Max 105
using namespace std;
char str1[Max][50],str2[Max][50],lcs[Max][50];
int lcsw1;
void p_lcs(int b[Max][Max],int i,int j){
    if( (i==0)||(j==0) )
        return;
    if(b[i][j]==1){
        p_lcs(b,i-1,j-1);
        strcpy(lcs[lcsw1++],str1[i-1]);
    }
    else if(b[i][j]==2)
        p_lcs(b,i-1,j);
    else
        p_lcs(b,i,j-1);
}

void LCS_LNT(int l1,int l2,bool I){
    int c[Max][Max]={0},b[Max][Max]={0};
    register int i,j;
    for(i=1;i<l1;i++){
        for(j=1;j<l2;j++){
            if(!(strcmp(str1[i-1],str2[j-1]))){
                c[i][j] = c[i-1][j-1] + 1;
                b[i][j] = 1;
            }
            else if(c[i-1][j]>=c[i][j-1]){
                c[i][j] = c[i-1][j];
                b[i][j] = 2;
            }
            else
                c[i][j] = c[i][j-1];
        }
    }
    if(I){
        lcsw1 = 0;
        p_lcs(b,l1-1,l2-1);
        j = c[l1-1][l2-1];
        cout<<lcs[0];
        for(i=1;i<j;i++)
            cout<<lcs[i];
        cout<<endl;
    }
}
int main()
{
    char word[50];
    int i=0,j=0,l1,l2,ln;
    while(scanf("%s",word)!=EOF){
        ln = strlen(word);
        if(ln==1)
        if(word[0]=='#'){
            if(i==0){
                i = 1;
                l1 = j;
                j = 0;
                continue;
            }
            else{
                l2 = j;
                j = i = 0;
                Test(l1+1,l2+1,1);
                continue;
            }
        }
    }
    return 0;
}
