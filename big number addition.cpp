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

void Call_Sum(char *first,char *sec,char *result){
    char F[Max],S[Max],Res[Max];
    int f,s,sum,extra,now;
    f = strlen(first);
    s = strlen(sec);
    Reverse(first,F);
    Reverse(sec,S);
    for(now=0,extra=0;(now<f && now<s);now++){
        sum = (F[now]-'0') + (S[now]-'0')+extra;
        Res[now] = sum%10 + '0';
        extra = sum/10;
    }
    for(;now<f;now++){
        sum = F[now] + extra-'0';
        Res[now] = sum % 10 + '0';
        extra = sum / 10;
    }
    for(;now<s;now++){
        sum = (S[now]-'0')+extra;
        Res[now] = sum % 10 + '0';
        extra = sum / 10;
    }
    if(extra!=0)
        Res[now++] = extra;
    Res[now] = '\0';
    if(strlen(Res)==0)
        strcpy(Res,"0");
    Reverse(Res,result);
}
int main()
{
    char fir[Max],sec[Max],res[Max];
    while(scanf("%s%s",fir,sec)==2){
        Call_Sum(fir,sec,res);
        int len = strlen(res);
        for(int i=0;i<len;i++)
            cout<<res[i];
        cout<<endl;
    }
    return 0;
}
