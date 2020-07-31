#include<bits/stdc++.h>
#define Max 10004
using namespace std;
int Call_Div(char *number,long div,char *result){
    int len = strlen(number);
    int now;
    long extra;
    char Res[Max];
    for(now=0,extra=0;now<len;now++){
        extra = extra*10 + (number[now]-'0');
        Res[now] = extra / div +'0';
        extra %= div;
    }
    Res[now] = '\0';
    for(now=0;Res[now]=='0';now++);
    strcpy(result,&Res[now]);
    if(strlen(result)==0)
        strcpy(result,"0");
    return extra;
}
int main()
{

    return 0;
}
