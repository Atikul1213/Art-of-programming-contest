#include<bits/stdc++.h>
#define Max 10004
using namespace std;
void Reverse(char *from,char *to){
    int len,j=0;
    len = strlen(from);
    for(int i=len-1;i>=0;i--)
        to[j++] = from[i];
    to[j]='\0';
}

int Call_Minus(char *large,char *small,char *result){
    char L[Max],S[Max];
    int l,s,now,hold,diff;
    l = strlen(large);
    s = strlen(small);
    bool sign = 0;

    if(l<s){
        strcpy(result,large);
        strcpy(large,small);
        strcpy(small,result);
        now = 1, l = s, s = now;
        sign = 1;
    }
    if(l==s){
        if(strcmp(large,small)<0){
            strcpy(result,large);
            strcpy(large,small);
            strcpy(small,result);
            now = 1, l = s, s = now;
            sign = 1;
        }
    }
    Reverse(large,L);
    Reverse(small,S);
    for(;s<l;s++)
        S[s] = '0';
    S[s] = '\0';

    for(now=0,hold=0;now<l;now++){
        diff = (L[now]-'0')-((S[now]-'0')+hold);
        if(diff<0){
            hold = 1;
            result[now] = 10 + diff+'0';
        }
        else{
            result[now] = diff+'0';
            hold = 0;
        }
    }
    for(now=l-1;now>0;now--){
        if(result[now]!='0')
            break;
    }
    result[now+1]='\0';
    Reverse(result,L);
    strcpy(result,L);
    return sign;
}

int main()
{
    char fir[Max],sec[Max],res[Max];
    while(scanf("%s%s",fir,sec)==2){
        if(Call_Minus(fir,sec,res)==1)
            cout<<"-";
        int len = strlen(res);
        for(int i=0;i<len;i++)
            cout<<res[i];
        cout<<endl;
    }
    return 0;
}
