
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second


using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;
using si = set <int>;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
    return (unsigned long long)rng() % B;
}


ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }
ll lcmll(ll a, ll b) { return a / gcdll(a,b) * b; }

ll modpow(ll a, ll e, ll m) {
    ll r = 1;
    while (e) {
        if (e & 1) r = (r * a) % m;
        a = (a * a) % m;
        e >>= 1;
    }
    return r;
}

#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << "\n";
#else
    #define debug(x)
#endif

clock_t startTime;
double getTime() { return (double)(clock() - startTime) / CLOCKS_PER_SEC; }


void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int ans[3] = {a, b, c};
    sort(ans, ans + 3);
    if(ans[0] >= 2){
        cout << a*b*c << '\n';
    }
    else if(ans[2] <= 1){
        cout << 3 << '\n';
    }
    else{
        cout << (ans[0] + ans[1]) * ans[2] << '\n';
    }
}

    
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    startTime = clock();
    solve();
    return 0;
}
