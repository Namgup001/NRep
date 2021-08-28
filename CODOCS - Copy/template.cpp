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






   #define ll int
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
 
   const unsigned int mod = 1000000007;
   
   	ll d=0,ds,e=0,x,n,k;
    ll i,j,tt=0,w=0,t,y;
    ll cnt=0,ans=0,sum=0; 
    
    
// assigning size to 2d vector and init all to 0    
#define ROW_COUNT 101
#define COLUMN_COUNT 100001
   

vector<vector<int> > v(
    ROW_COUNT,
    vector<int>(COLUMN_COUNT));
    
    

   
    bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
    { 
        return (a.second < b.second); 
    } 
    sort(vect.begin(), vect.end(), sortbysec);  
    


    stringstream geek(str);
    ll nn=0;
    geek>>nn;

    
*/
const unsigned int moduli = 1000000007;


void sol() {
    ll d=0,ds,e=0,x,n,k;
    ll i,j,tt=0,w=0,t,y;
    ll cnt=0,ans=0,sum=0;
	vi v;
    vi a,b;
    string s,ss;
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





/*

ll convert10tob(int N, intt b)
{
     if (N == 0)
        return;
     intt x = N % b;
     N /= b;
     if (x < 0)
        N += 1; 
     convert10tob(N, b);
     return (x < 0) ? x + (b * -1) : x;

}
int b2d(int n)
{
    int num = n;
    int dec_value = 0;
 
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}








KADANE....
kADANEEEEEE 

intt ma(vi a)
{
    intt size=sz(a);
    intt max_so_far = INT_MIN, max_ending_here = 0,
       start =0, end = 0, s=0;
 
    for (intt i=0; i< size; i++ )
    {
        max_ending_here += a[i];
 
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
 
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    return max_so_far;
}

ll binarySearch(ve<pair<ll,ll>> arr, ll l, ll r, ll x)
{
    if (r >= l) {
        ll mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (x>=arr[mid].ff && x<=arr[mid].ss)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (x<arr[mid].ff)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}


ll gcd(ll a, ll b)
{
   if (b == 0)
      return a;
   return gcd(b, a % b);
}
*/

/*
string d2b(ll N)
{

    // To store the binary number
    ll B_Number = 0;
    ll cnt = 0;
    while (N != 0) {
        ll rem = N % 2;
       ll c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;

        // Count used to store exponent value
        cnt++;
    }

    return to_string(B_Number);
}



/*
ll getIndex(vector<ll> v, ll K)
{
    auto it = find(v.begin(), v.end(), K);

    if (it != v.end()) {

        ll index = distance(v.begin(), it);
        return index;
    }

       return -1;

}


 bool isPowerOfTwo (ll x)
{

    return x && (!(x&(x-1)));
}

ll power(ll x,ll y)
{
   //(x^y)%MOD
   ll ans=1,s=x;
   while(y){
      if(y&1){
         ans*=s;
         ans%=moduli;
      }
      s*=s;
      s%=moduli;
      y>>=1;
   }
   return ans;
}


double power(double x, long int n) {
        double result = 1;
        int sign = 1;
        if(n < 0)
        {
            n = -n;
            sign = -1;
        }
        while(n > 0)
        {
            if (n % 2 == 1)
            {
                result *= x;
            }
            x *= x;
            n /= 2;
        }
        if (sign == -1)
        {
            return 1/result;
        }
        return result;
    }


ll hig(ll n)
{
    int res = 0;
    for (ll i=n; i>=1; i--)
    {
        // If i is a power of 2
        if ((i & (i-1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}
void SieveOfEratosthenes(ll n, bool prime[],
                         bool primesquare[], ll a[])
{

    for (ll i = 2; i <= n; i++)
        prime[i] = true;

    for (ll i = 0; i <= (n * n + 1); i++)
        primesquare[i] = false;

    prime[1] = false;

    for (ll p = 2; p * p <= n; p++) {

        if (prime[p] == true) {
            for (ll i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }

    ll j = 0;
    for (ll p = 2; p <= n; p++) {
        if (prime[p]) {
            a[j] = p;


            primesquare[p * p] = true;
            j++;
        }
    }
}


ll countDivisors(ll n)
{
    if (n == 1)
        return 1;

    bool prime[n + 1], primesquare[n * n + 1];

    ll a[n];

    SieveOfEratosthenes(n, prime, primesquare, a);

    ll ans = 1;


    for (ll i = 0;; i++) {

        if (a[i] * a[i] * a[i] > n)
            break;

        int cnt = 1;
        while (n % a[i] == 0)
        {
            n = n / a[i];
            cnt = cnt + 1;
        }

        ans = ans * cnt;
    }

    if (prime[n])
        ans = ans * 2;

    else if (primesquare[n])
        ans = ans * 3;

    else if (n != 1)
        ans = ans * 4;

    return ans;
}


ll NcR(ll n, ll r)
{
    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;

            long long m = __gcd(p, k);
            p /= m;
            k /= m;

            n--;
            r--;
        }

    }

    else
        p = 1;

  return p;
}

// Kadane Subs sum
ll maxS(ll a[], ll size)
{
    ll max_so_far = a[0];
   ll curr_max = a[0];

   for (ll i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}

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

ll spf[MAXN];

void sieve()
{
    spf[1] = 1;
    for (ll i=2; i<MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;

    // separately marking spf for every even
    // number as 2
    for (ll i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (ll i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (ll j=i*i; j<MAXN; j+=i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

ll greatest_No_of_prime_factors(ll x)
{
    vector<ll> ret;
    sett s;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
        s.insert(spf[x]);
    }
    ll aa=sz(s);
    return aa;
}


void printDivisors(int n)
{
    for (int i = 1; i*i < n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0)
            printf("%d ", n / i);
    }
}
void printDivisors(int n)
{
    // Vector to store half of the divisors
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
 
            // check if divisors are equal
            if (n / i == i) 
                printf("%d ", i);
            else {
                printf("%d ", i);
 
                // push the second divisor in the vector
                v.push_back(n / i);
            }
        }
    }
 
    // The vector will be printed in reverse
    for (int i = v.size() - 1; i >= 0; i--)
        printf("%d ", v[i]);
}
 
ll LowestDivisor(ll n)
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
        if(*it > 1  &&  *it < n) return *it; 
        
    }
    return -1;
}
*/





