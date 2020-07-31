#include<bits/stdc++.h>
using namespace std;
void Unit(int n){
    switch(n){
    case 3:
        cout<<"i";
    case 2:
        cout<<"i";
    case 1:
        cout<<"i";
        break;
    case 4:
        cout<<"i";
    case 5:
        cout<<"v";
        break;
    case 6:
        cout<<"vi";
        break;
    case 7:
        cout<<"vii";
        break;
    case 8:
        cout<<"viii";
        break;
    case 9:
        cout<<"ix";
        break;

    }
}

void Ten(int n){
    switch(n){
    case 3:
        cout<<"x";
    case 2:
        cout<<"x";
    case 1:
        cout<<"x";
        break;
    case 4:
        cout<<"x";
    case 5:
        cout<<"l";
        break;
    case 6:
        cout<<"lx";
        break;
    case 7:
        cout<<"lxx";
        break;
    case 8:
        cout<<"lxxx";
        break;
    case 9:
        cout<<"xc";
        break;
    }
}

void hnd(int n){
    switch(n){
    case 3:
        cout<<"c";
    case 2:
        cout<<"c";
    case 1:
        cout<<"c";
        break;
    case 4:
        cout<<"c";
    case 5:
        cout<<"M";
        break;
    }
}

void Roman(int n){
    int a,i;
    if(n>=500){
        a = n / 500;
        for(i=1;i<=a;i++)
            cout<<"M";
    }
    n = n % 500;
    hnd(n/100);
    n = n %10;
    Ten(n/10);
    Unit(n%10);
}


int main()
{
    int n;
    cin>>n;
    Roman(n);
    return 0;
}
