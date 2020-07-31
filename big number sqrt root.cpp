#include<bits/stdc++.h>
#define Max 10004
using namespace std;
void Reverse(char *from,char *to){
    int len,j=0;
    len = strlen(from);
    for(int i=len-1;i>=0;i--)
        to[j++] = from[i];
    to[j] = '\0';
}
int Call_Minus(char *large,char *small,char *result){
    char L[Max],S[Max];
    int l,s,now,hold,diff;
    l = strlen(large);
    s = strlen(small);
    if(l<s)
        return 0;
    if(l==s){
        if(strcmp(large,small)<0)
            return 0;
    }
    Reverse(large,L);
    Reverse(small,S);
    for(;s<l;s++)
        S[s] = '0';
    S[s]='\0';
    for(now=0,hold=0;now<l;now++){
        diff =L[now]-(S[now]+hold);
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
    result[now+1] = '\0';
    Reverse(result,L);
    strcpy(result,L);
    return 1;
}

void Call_Sqrt(char *number,char *result,char *extra){
    int num,start,e,mul,l,r=0,len;
    char left[Max],after[Max];
    char who[5],temp[Max],two[5];
    len = strlen(number);
    if(len%2==0){
        num = 10*(number[0]-'0')+number[1]-'0';
        start = 2;
    }
    else{
        num = number[0]-'0';
        start = 1;
    }
    mul = (int)sqrt(num);
    result[0] = mul + '0';
    result[1] = '\0';
    if(num-mul*mul==0)
        extra[0] = '\0';
    else
        sprintf(extra,"%s",num-mul*mul);
    for(;start<len;start+=2){
        e = strlen(extra);
        extra[e] = number[start];
        extra[e+1] = number[start+1];
        extra[e+2] = '\0';
        two[0] = '2';
        two[1] = '\0';
        Call_Mult(result,two,left);
        l = strlen(left);
        for(mul=9;mul>=0;mul--){
            who[0] = mul+'0';
            who[1] = '\0';
            strcat(left,who);
            Call_Mult(left,who,after);
            if(Call_Minus(extra,after,temp)==1){
                result[++r] = mul + '0';
                result[r+1] = '\0';
                strcpy(extra,temp);
                break;
            }
            else
                left[l] = '\0';
        }
    }
    result[++r] = '\0';
}
int main()
{
    char fir[Max],ex[Max],res[Max];
    while(scanf("%s",fir)==1){
        Call_Sqrt(fir,res,ex);
        int len = strlen(res);
        for(int i=0;i<len;i++)
            cout<<res[i];
        cout<<endl;
    }
    return 0;
}
