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
#define umapp unordered_map<ll,ll>
/*
    stringstream geek(str);
    nn=0;
    geek>>nn;

*/
const unsigned int moduli = 1000000007;



void sol() {

    ll dd,ds,e=0,x,n,k;
    ll i,j,tt=0,w=0,t,y;
    ll cnt=0,ans=0,sum=0;
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double d;
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    if(x1==x2){
        if(y1!=y2)
        cout<<x2+d<<' '<<y1<<' '<<x2+d<<" "<<y2;


    }
    else if(x1!=x2){
        if(y1==y2) {
            cout<<x1<<' '<<y2+d<<' '<<x2<<" "<<y2+d;
        }
        else if(y1!=y2){
                if(abs(x2-x1) != abs(y2-y1)){
                cout<<-1;
                return;
            }
            else
            cout<<x1<<' '<<y2<<' '<<x2<<" "<<y1;
        }
    }

}

// driver function
int main() {
    ll tc=1; //cin >> tc;
    while (tc--) {
        sol();
        cout << endl;
    }

   return 0;
}
