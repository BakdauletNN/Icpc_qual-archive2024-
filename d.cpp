// https://esep.cpfed.kz/problem/qual24d



#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second


typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;

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
    int t;
    cin >> t;
    string s; cin >> s;
    int a = 0, e = 0;
    for (int i = 0; i < t; i++){
        if(s[i] == 'A'){
            if(a <= e){
                a = e+1;
            }
        }
        else if(s[i] == 'E'){
            if(e <= a){
                e = a+1;
            }
        }
        else if(s[i] == 'D'){
            if(a < e){
                a = e;
            }
            else{
                e = a;
            }
        }
    }
    cout << a+e << '\n';

}

    
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    startTime = clock();
    solve();
    return 0;
}
