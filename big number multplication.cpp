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

void Call_Mult(char *first,char *sec,char *result){
    char F[Max],S[Max],temp[Max];
    int f_len,s_len,f,s,r,t_len,hold,res;
    f_len = strlen(first);
    s_len = strlen(sec);

    Reverse(first,F);
    Reverse(sec,S);

    t_len = f_len + s_len;
    r = -1;
    for(f=0;f<=t_len;f++)
        temp[f] = '0';
    temp[f] = '\0';
    for(s=0;s<s_len;s++){
        hold = 0;
        for(f=0;f<f_len;f++){
            res = (F[f]-'0')*(S[s]-'0') + hold + (temp[f+s]-'0');
            temp[f+s] = res%10+'0';
            hold = res / 10;
            if(f+s>r)
                r = f+s;
        }
        while(hold!=0){
            res = hold + temp[f+s]-'0';
            hold = res/10;
            temp[f+s] = res%10+'0';
            if(r<f+s)
                r = f+s;
            f++;
        }
    }
    for(;r>0 && temp[r]=='0';r--);
    temp[r+1] = '\0';
    Reverse(temp,result);
}

int main()
{
    char fir[Max],sec[Max],res[Max];
    while(scanf("%s%s",fir,sec)==2){
        Call_Mult(fir,sec,res);
        int len = strlen(res);
        for(int i=0;i<len;i++)
            cout<<res[i];
        cout<<endl;
    }
    return 0;
}
