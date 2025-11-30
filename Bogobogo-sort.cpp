#include <bits/stdc++.h>
using namespace std;
#include <chrono>
 
#define pb push_back
#define MOD 1000000007
#define ff first
#define ss second
#define endl '\n'
#define all(a) a.begin(), a.end()
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define min3(a,b,c) min(min(a,b),c)
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define gap " "
#define vi vector<int>
#define vbo vector<bool>
#define vll vector<ll>
#define vll2d vector<vll>
#define vld vector<ld>
#define vpll vector<pair<ll,ll>>
#define rev_sort(v) sort(all(v),greater<ll>())
#define yes() cout<<"YES"
#define no() cout<<"NO"
#define vin(a, n) for(int i = 0; i < n; ++i)cin>>a[i];
#define vin1(a, n) for(int i = 1; i <= n; ++i)cin>>a[i];
#define PI 3.1415926535897932384626
#define inf 0x3f3f3f3f
#define loop0(n) for ( i = 0; i < n; ++i)
#define loop1(n) for ( i = n-1; i >=0; --i)
#define loopg(a,n,b) for ( i=a;i<n;i+=b)
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef unsigned long long ull;
 


 
 void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

bool isSorted(vll a, int n) {
    while (--n > 1)
        if (a[n] < a[n - 1])
            return false;
    return true;
}

void shuffle(vll &a, int n) {
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}


void bogobogosort( vll& a, int n){
    if(n==1) return;
    vll ori = a;
    vll tem;
    for(int i=0;i<n-1;i++)
    {
        tem.push_back(a[i]);
    }
    bogobogosort(tem,tem.size());
    if(a[a.size()-1]>=*max_element(tem.begin(), tem.end()))
    {
        for(int i=0;i<tem.size();i++)
        {
            a[i]=tem[i];
        }
        if(a==ori) return;
    } 
    
        shuffle(a,n);
        bogobogosort(a,n);
    
}


void solve()
{
    ll a=0,b=0,c=0,d=0,e=0,f=0,n,m,k,i,j,r,l,sum=INT_MAX;
cout << "Enter size of arrey:\n" << flush;
cin >> n;

cout << "Enter number of simulations:\n" << flush;
cin >> e;

    vll v(n);
    for(int i=0;i<n;i++)
    {
        v[i]=i+1;
    }
    shuffle(v,n);




    for(int i=0;i<e;i++)
    {
    shuffle(v,n);
    auto start = chrono::high_resolution_clock::now();
    bogobogosort(v,n);
    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    a+=duration;
    
    }

    for(int i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }




    cout << "\nTime taken: " << (float)a/e << " ms";
}


int main()
{fast_io();
   
    
   
  ll t=1;
  //cin>>t;
  while(t--)
  { 
    solve();
    cout<<endl;
     
  }
}
