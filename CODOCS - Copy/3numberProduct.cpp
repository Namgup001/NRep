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
/*
    stringstream geek(str);
    nn=0;
    geek>>nn;

*/
const unsigned int moduli = 1000000007;


bool isprime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


ll printDivisors(ll n)
{
    sett s;
    // Vector to store half of the divisors
    vector<int> v;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
 
            // check if divisors are equal
            if (n / i == i) 
                s.insert(i);
            else {
                s.insert(i);
                s.insert(n / i);
            }
        }
    }
 
    f2(it,s){
        if(*it > 1  &&  *it < n) return *it; 
        
    }
    return -1;
}


ll printtDivisors(ll n,ll k)
{
    sett s;
    for (ll i = 2; i*i < n; i++) {
        if (n % i == 0)
            s.insert(i);
    }
    for (ll i = sqrt(n); i > 1; i--) {
        if (n % i == 0)
            s.insert(n/i);
    }
    s.insert(n);
    
    f2(it,s){
        if(*it > 1  &&  *it != k) return *it; 
        
    }
    return -1;
}


void sol() {

    ll d=0,ds,e=0,x,n,k;
    ll i,j,tt=0,w=0,t,y;
    ll cnt=0,ans=0,cc=0,sum=0;
    in(n);
    if(isprime(n))  {
        cout<<"NO";
        return;
    }
    i=printDivisors(n);
    if(i!=-1){
        j=printtDivisors(n/i,i);
        if(j==-1){
            cout<<"NO";
            return ;
        }
        else{
            
            
            if(n/(i*j) > i && n/(i*j) > j ) cout<<"YES\n"<<i<<' '<<j<<' '<<n/(i*j);
            else cout<<"NO";
            return;
        }
    }
    cout<<"NO";

}

// driver function
int main() {
    ll tc=1; cin >> tc;
    while (tc--) {
        sol();
        cout << endl;
    }

   return 0;
}
