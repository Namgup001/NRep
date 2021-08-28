#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define intt long long int
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
    ll i,j,tt=0,w=0,y;
    ll cnt=0,ans=0,sum=0;

    cin>>n;

    ve<string> s;
    string ss;
    f(i,0,n){
        cin>>ss;
        s.pb(ss);
    }
    ve<vi> vis(n,vi(n,0));


    pair<ll,ll> p;
    p=mp(INT_MAX,INT_MAX);
    f(i,0,n){
        
        f(j,0,n){
            if(s[i][j]=='O') {
                w=1;
                break;
            }
            else if(s[i][j]=='.'){
                tt++;
            }
            
        }
        if(w==1) {w=0;continue;}
        //pair<ll,ll>p=mp(tt,1);
        if(tt!=0) f(j,0,n) vis[i][j]=1;
        if(p.ff>tt && tt!=0) p.ff=tt,p.ss=1;
        else if(p.ff==tt) p.ss++;
        tt=0;
    }





    f(j,0,n){
        
        f(i,0,n){
            if(s[i][j]=='O') {
                w=1;
                break;
            }
            else if(vis[i][j]==0 && s[i][j]=='.'){
                tt++;

            }
            
        }
        if(w==1) {w=0;continue;}
        //pair<ll,ll>p=mp(tt,1);
        //f(i,0,n) vis[i][j]=1;
        if(p.ff>tt && tt!=0) p.ff=tt,p.ss=1;
        else if(p.ff==tt) p.ss++;
        tt=0;
    }

    if(p.ff==INT_MAX) cout<<"Impossible";
    else{
        cout<<p.ff<<' '<<p.ss;
    }

    
}

// driver function
int main() {
    fast_io;
    ll tc=1;  cin >> tc; 
    
    for(ll i=1;i<=tc;i++) {
    	
    	cout<<"Case #"<<i<<": ";
        sol();
        cout << endl;
    }

   return 0;
}


