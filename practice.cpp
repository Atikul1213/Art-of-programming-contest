#include<bits/stdc++.h>
using namespace std;
bool Fun(string text,string pat){
    int i=0,j=0;
    while(i<text.size() && j<pat.size()){
        if(text[i]==pat[j]) j++;
        i++;
    }
    if(j==pat.size())
        return true;
    else
        return false;
}

bool issubstr(string text,string pat){
    for(int i=0;i<text.size();i++){
            bool flag = true;
        for(int j=i,k=0;j<text.size();j++,k++){
            if(text[j]!=pat[k]){
                flag = false;
                break;
            }
        }
        if(flag==true) return true;
    }
}

int main()
{

    return 0;
}

































/**

#include<bits/stdc++.h>
using namespace std;
void Str_cpy(char src[],char des[]){
    int i;
    for(i=0;src[i]!='\0';i++)
        des[i] = src[i];
    des[i] = '\0';
}
int main()
{
//    char str[100];
//    scanf("%[^\n]",str);
//    cout<<str<<endl;
//    int i;
//    for(i=0;str[i]!='\0';i++);
//    cout<<i<<endl;
//    cout<<strlen(str)<<endl;
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.substr(2,string::npos)<<endl;

    cout<<s.substr(2,string::npos)<<endl;

    return 0;
}


#include<bits/stdc++.h>
#define Size 10000
using namespace std;
int cnt,inv;
void Merge_Sort(int arr[],int start,int end){
    if(start==end)
        return;
    int mid = (start+end)/2;
    Merge_Sort(arr,start,mid);
    Merge_Sort(arr,mid+1,end);
    int i=start,j=mid+1,k=0,temp[Size];
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
                cnt++;
            temp[k++] = arr[i++];
        }
        else{
                inv += (mid-i);
            temp[k++] = arr[j++];
        }
    }
    for(;i<=mid;i++)
        temp[k++] = arr[i];
    for(;j<=end;j++)
        temp[k++] = arr[j];
    for(int i=start,j=0;i<=end;i++)
        arr[i] = temp[j++];
}

int main()
{
    int arr[]={5,9,1,3,2,6,8,7,5,10,4};
    int n = 10;
    Merge_Sort(arr,0,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<'\t';
    cout<<endl;


    return 0;
}



#include<bits/stdc++.h>
#define Size 10005
using namespace std;
int main()
{
    int n,Y[Size],x,w;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>x>>Y[i];
    }
    sort(Y,Y+n);

    int lo = Y[0],hi = Y[0]+w;
    int i = 0,mov = 1;
    while(i<n){
        if(lo <= Y[i] && Y[i]<=hi) i++;
        else{
            mov++;
            lo = Y[i];
            hi = Y[i] + w;
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int sid,roll;
    double cgpa,height;
    bool operator<(Student &ob);
    bool operator > (Student &ob);
};

bool Student::operator < (Student &ob){
    return cgpa > ob.cgpa;
}
struct cplx{
    int A,B;
    cplx operator + (const cplx &b)const{
        cplx temp;
        temp.A = A + b.A;
        temp.B = B + b.B;
    return temp;
    }
};
bool myFun(Student &a,Student &b){
    return a.cgpa > b.cgpa;
}

bool cmp(string &a, string &b){
    return (a+b) > (b+a);
}

int main()
{
    Student s[10];
    int n;
   // cin>>n;
    for(int i=0;i<3;i++){
        cin>>s[i].name>>s[i].sid>>s[i].cgpa;
    }

    for(int i=0;i<3;i++)
    cout<<s[i].name<<'\t'<<s[i].sid<<"\t"<<s[i].cgpa<<endl;

    cout<<endl<<endl;
    sort(s,s+3,myFun);
    for(int i=0;i<3;i++)
    cout<<s[i].name<<'\t'<<s[i].sid<<"\t"<<s[i].cgpa<<endl;

    return 0;
}


#include<bits/stdc++.h>
#define Size 10000
using namespace std;
int cnt;
void Merge_Sort(int arr[],int start,int end){
    if(start==end)
        return;
    int mid = (start+end)/2;
    Merge_Sort(arr,start,mid);
    Merge_Sort(arr,mid+1,end);
    int i=start,j=mid+1,k=0,temp[Size];
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
                cnt++;
            temp[k++] = arr[i++];
        }
        else
            temp[k++] = arr[j++];
    }
    for(;i<=mid;i++)
        temp[k++] = arr[i];
    for(;j<=end;j++)
        temp[k++] = arr[j];
    for(int i=start,j=0;i<=end;i++)
        arr[i] = temp[j++];
}

int main()
{
    int arr[]={5,9,1,3,2,6,8,7,5,10,4};
    int n = 10;
    Merge_Sort(arr,0,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<'\t';
    cout<<endl;
    int arr[10];
    for(int i=0;i<n;i++){
        if(i!=0) cout<<" ";
        cout<<arr[i];

        cout<<arr[0];
        cout<<" "<<arr[i];


    }
    return 0;
}

void Merge_Sort(int arr[],int start,int end){
    if(start==end)
        return;
    int mid = (start+end)/2;
    Merge_Sort(arr,start,mid);
    Merge_Sort(arr,mid+1,end);
    int i=start,j=mid+1,k=0,temp[Size];
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    for(;i<=mid;i++)
        temp[k++] = arr[i];
    for(;j<=end;j++)
        temp[k++] = arr[j];
    for(int i=start,j=0;i<=end;i++)
        arr[i] = temp[j++];
}
#include<bits/stdc++.h>
#define Size 10
using namespace std;
int cnt[Size],arr[100];
int main()
{
    int arr[]={-1,4,0,-9,3,5,0,2,3,-6,5,7,0,9,4,9,-8,5,7,8,1,8,9,-3,4};
    int n = 25,Min = 0;
    for(int i=0;i<n;i++){
        if(Min>arr[i])
            Min = arr[i];
    }
    Min = abs(Min);
    for(int i=0;i<n;i++)
        arr[i]+= Min;

    for(int i=0;i<n;i++){
        cnt[arr[i]]++;
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
    cout<<endl<<endl;

    for(int i=0,k=0;i<n;i++){
        for(int j=0;j<cnt[i];j++)
            arr[k++] = i;
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]-Min<<'\t';
    cout<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int BigMod(int a,int b,int m){
    if(b==0)
        return 1%m;
    int x = BigMod(a,b/2,m);
    x = (x*x)%m;
    if(b&1)
        x = (x*a)%m;
    return x;
}
int Binary_Search(int arr[],int low,int high,int value){
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==value){
            return mid;
            break;
        }
        else if(arr[mid] > value )
            high = mid -1;
        else
            low = mid+1;
    }
    if(low>high)
        return -1;
}
int main()
{
    int arr[]={1,2,3,4,5},value;
    cin>>value;
    cout<<Binary_Search(arr,0,4,value);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
double Squrt(double n){
    int cnt = 1;
    double low = 1, hi = n,mid;
    while(cnt<=50){
       mid = (low+hi)/2;
        if(mid*mid>n)
            hi = mid;
        else
            low = mid;
        cnt++;
    }
    return mid;
}
int main()
{
    int n;
    cin>>n;
    cout<<Squrt(n)<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
               int  temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void Selection_Sort(int arr[],int n){
    int index_min;
    for(int i=0;i<n;i++){
        index_min = i;
        for(int j=i+1;j<n;j++){
            if(arr[index_min] > arr[j])
                index_min = j;
        }
        if(i!=index_min){
            int temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
}

void Insertion_Sort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        j = i;
        while(j>0 && arr[j] < arr[j-1]){
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
        j--;
        }
    }
}

void Merge_Sort(int arr[],int start,int end){
    if(start==end)
        return;
    int mid = (start+end)/2;
    Merge_Sort(arr,start,mid);
    Merge_Sort(arr,mid+1,end);
    int i=start,j=mid+1,k =0,temp[100];
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    for(;i<=mid;i++)
        temp[k++] = arr[i];
    for(;j<=end;j++)
        temp[k++] = arr[j];
    for(int i=start,j=0;i<=end;i++)
        arr[i] = temp[j++];
}

int main()
{
    int arr[]={9,3,8,1,7,4,5,2,6};
    int n = 9;
    Bubble_Sort(arr,n);
    Selection_Sort(arr,n);
    Insertion_Sort(arr,n);
    Merge_Sort(arr,0,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<'\t';
    cout<<endl;
    return 0;
}




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={44,222,9,3,8};
    set<int>s(arr,arr+5);
    set<int>::iterator it;
    s.insert(-1);

    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<'\t';
    cout<<endl;

    while(!s.empty()){
        cout<<s.begin()<<'\t';
        s.pop_back();
    }


    cout<<s.size()<<endl;

    s.clear();
    cout<<s.size()<<endl;

    return 0;
}





    #include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    list<int>::iterator it;
    for(int i=1;i<10;i++)
        l.push_back(i+5);

    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<'\t';
    cout<<endl;



    l.back() -= l.front();
    it = l.begin();
    l.insert(it,111);
    //it++;
    l.insert(it,121);
    l.insert(it,145);
    l.push_back(-1);
    l.push_front(-2);
    l.pop_front();
    l.pop_back();
    l.reverse();
    reverse(l.begin(),l.end());
    l.reverse();
    l.reverse();

     l.sort();
     l.reverse();

    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<'\t';
    cout<<endl;

    return 0;
}






  vector<int>foo(3,100);
    vector<int>bar(5,200);

    foo.swap(bar);
    foo.swap(bar);
    foo.push_back(-1);
    foo.push_back(-2);
    foo.push_back(-3);
    random_shuffle(foo.begin(),foo.end());
    for(int i=0;i<foo.size();i++)
        cout<<foo[i]<<'\t';
    cout<<endl;

    for(int i=0;i<bar.size();i++)
        cout<<bar[i]<<'\t';
    cout<<endl;

 int arr[3]={10,20,30};
    vector<int>vec(arr,arr+3);
    vector<int>::iterator it;

    vec.push_back(100);
    vec.push_back(200);
    vec.push_back(300);

    vec.back() -= vec.front();
    cout<<vec.back()<<endl;

    it = vec.begin();
    vec.erase(it);
    it++;
    vec.erase(it);


    it = vec.end();
    vec.insert(it,500);
    it++;
    vec.insert(it,600);
    it++;
    vec.insert(it,-1);

    reverse(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<endl;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec(5);
    cout<<*vec.data()<<endl;
    int *p = vec.data();
    *p = 10;
    ++p;
    *p = 20;
    p[1] = 100;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<'\t';
    cout<<endl;
    return 0;
}



#include<bits/stdc++.h>
#define Mx 100005
#define ll long long
using namespace std;
bool vis[Mx];
vector<int>prime;


void sieve(){
    for(int i=3;i<=Mx;i+=2){
        if(vis[i]==false){
            for(int j= i*i;j<=Mx;j+=i)
                vis[j] = true;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=Mx;i+=2){
        if(vis[i]==false)
            prime.push_back(i);
    }
}


int Segmented_Sieve(ll a,ll b){
    memset(vis,0,sizeof(vis));
    if(b<2) return 0;
    if(a<2) return 2;
    ll xx = sqrt((double)b)+1;
    for(ll i=0;prime[i]<=xx;i++){
        ll j = (a/prime[i]);
        if(a%prime[i]!=0) j++;
        j *= prime[i];
        for(;j<=b;j++){
           vis[j-a] = 1;
        }
    }
    int cnt = 0;
    for(ll i=a;i<=b;i++)
        if(vis[i-a]==0) cnt;
    return cnt;
}

int main()
{

    return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define Mx 100005
using namespace std;
bool vis[Mx];
vector<int>prime;

void sieve(){
    for(int i=3;i*i<=Mx;i+=2){
        if(vis[i]==false){
            for(int j=i*i;j<=Mx;j+=i)
                vis[j] = true;
        }
    }
    prime.push_back(2);
    for(int i=3;i<=Mx;i+=2){
        if(vis[i]==false)
            prime.push_back(i);
    }
}

int Segmented_Sieve(ll a,ll b){
    memset(vis,0,sizeof(vis));
    if(b<2) return 0;
    if(a<2) return 2;
    int xx = sqrt((double)b)+1;
    for(ll i=0;prime[i]<=xx;i++){
        ll j = (a/prime[i]);
        if(a%prime[i]!=0) j++;
        j *= prime[i];
        for(;j<=b;j+=prime[i])
            vis[j-a] = 1;
    }
    int cnt = 0;
    for(ll i=a;i<=b;i++)
        if(vis[i-a]==0) cnt++;
    return cnt;
}


int main()
{
    ll l,r;
    cin>>l>>r;

    return 0;
}






#include<bits/stdc++.h>
#define Size 400000000
using namespace std;
int marked[Size/64+2];
vector<int>prime;

#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x) marked[x/64] |= (1<<((x%64)/2))

bool isPrime(int num){
    return (num>1&&(num==2 || ((num&1)&&!on(num))));
}

void sieve(int n){
    for(int i=3;i*i<=n;i+=2){
        if(!on(i)){
            for(int j=i*i;j<=n;j+=i)
                mark(j);
        }
    }
    prime.push_back(2);
    for(int i=3;i<Size;i+=2){
        if(isPrime(i))
            prime.push_back(i);
    }
}

int main()
{
    int n;
    cin>>n;
    sieve(n);
    for(int i=0;i<prime.size();i++)
        cout<<prime[i]<<'\t';
    cout<<endl;
    return 0;
}




#include<bits/stdc++.h>
using namespace std;
struct data{
    char name[100];
    int height,weight;
    long long income;
    data(char n[],int h,int w,long long in){
        strcpy(name,n);
        height = h, weight = w, income = in;
    }

    bool operator<(const data& b)const;
};

bool Compare(data a,data b){
    if(a.income < b.income){
        if(a.weight<b.weight)
            return strlen(a.name)> strlen(b.name);
        else
            return a.weight < b.weight;
    }
    else
        return a.income> b.income;
}

bool data::operator<(const data& b)const{
    if(income<b.income){
        if(height<b.height){
            if(weight<b.weight)
                return strlen(name)<strlen(b.name);
            else
                return weight < b.weight;
        }
        else
            return height > b.height;
    }
    else
        return income > b.income;
}

int main()
{
    data s1("Atikul Islam",5,60,10000),s2("sadia sinty",5,50,1000);
    vector<data>vec;
    vec.push_back(s1);
    vec.push_back(s2);
    sort(vec.begin(),vec.end(),Compare);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].income<<'\t'<<vec[i].name<<'\t'<<vec[i].height;
        cout<<'\t'<<vec[i].weight<<endl;
    }
    return 0;
}





    priority_queue<string>q;

    q.push("sadia");
    q.push("sinty");
    q.push("atikul");
    q.push("ripa");

    while(!q.empty()){
        cout<<q.top()<<'\t';
        q.pop();
    }
    cout<<endl;

     vector<int>vec;
     vector<int>::iterator it;
     vec.push_back(1);
     it = vec.begin();
     cout<<*it<<endl;

    string a,b,c;
    a = "DUET", b = "Gazipur";
    c = a + b;
    cout<<c<<endl;
    cout<<c.size()<<endl;
    for(int i=0;i<c.size();i++)
        cout<<c[i]<<'\t';
    cout<<endl;
vector<int>vec[100];
    vector<vector<int> >vec1;
    vec[0].push_back(1);
    vec[0].push_back(2);
    vec[1].push_back(3);
    vec[2].push_back(4);
    vec[2].push_back(5);
    vec[2].push_back(6);

    for(int i=0;i<vec[2].size();i++)
        cout<<vec[2][i]<<'\t';
#include<bits/stdc++.h>
using namespace std;
struct day{
     int sid,roll;
     string name;
     double height;
};

int main()
{
    vector<double>d;
    vector<long long> ll;
    vector<char>c;
    vector<day>vec;


    day s1;
    s1.roll = 10;
    s1.sid = 122;
    s1.name = "Md Atikul Islam";
    s1.height = 43.3;
    vec.push_back(s1);

    cout<<vec[0].sid<<endl;
    cout<<vec[0].name<<'\t'<<vec[0].height<<'\t'<<vec[0].roll<<endl;

    vector<int>v,v1;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v1 = v;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<'\t';
    cout<<endl;




    return 0;
}


#include<bits/stdc++.h>
using namespace std;
template<class T>
struct data{
    char name[20];
    int num,email;
};

struct day{
    data new_people[100];
    int total_new_people;
    int  todo[100];
    void charm_your_misss(){
        while(true) do_math();
        while(true) smile();
    }
    void do_math(){
        int a,b;
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    void smile(){
        cout<<" :) ";
    }
};
T GCD(T a,T b){
}
class myclass{
    string name;
    int roll,sid;
    double height;
};

int main()
{
    day d;
    d.total_new_people = 0;

        d.smile();
    return 0;
}


*/
