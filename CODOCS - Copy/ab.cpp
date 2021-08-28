#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sz(x) x.size()
#define pb push_back
#define pb2 pop_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define bend(x) x.begin(), x.end()
#define vi vector<ll>
#define mapp map<ll, ll>
#define sett set<ll>
#define ve vector
#define un_m unordered_map<ll, ll>
#define f(i, a, b) for (i = a; i < b; i++)
#define f2(i, a) for (auto i = a.begin(); i != a.end(); i++)
#define maxxx INT32_MAX
#define mp make_pair
#define in(t) scanf("%lld",&t)
#define out(t) printf("%lld",t)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define PQ priority_queue
#define ts(s) to_string(s)

const unsigned int moduli = 1000000007;


void sol() {
    ll d=0,ds,e=0,x,n,k;
    ll i,j,tt=0,w=0,t,y;
    ll cnt=0,ans=0,sum=0;
	vi v;
    cin>>n>>k;
    f(i,0,n) {cin>>w;v.pb(w);}
    int ma=*max_element(bend(v));
    f(i,0,n) if(v[i]==ma) d++;
    f(i,0,n){
        if(v[i]==ma){
            if(i+1>=k) {w=i;break;}
            else tt++;
        }
    }
    if(w==n-1) cout<<1;
    else if(i==n) cout<<0;
    else{
        f(j,w,n){
            if(v[j]==ma) ans+=n-1-j+1;
        }
        cout<<ans;
    }
    
}

// driver function
int main() {
    fast_io;
    ll tc=1; cin >> tc; 
    while (tc--) {
        sol();
        cout << endl;
    }

   return 0;
}
