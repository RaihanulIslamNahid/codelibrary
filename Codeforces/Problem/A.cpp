#include <bits/stdc++.h>
using namespace std;
/****** Define **********/
typedef unsigned long long ull;
typedef set<int> si;
#define INF 2047483647
#define INFL 9223372036854775807
#define int long long
#define pii pair<int, int>
#define pII pair<ll, ll>
#define vi vector<int>
#define vii vector<pii>
#define vI vector<ll>
#define VII vector<pII>
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define ull unsigned long long
#define M 1000000007
#define Raihan                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define take(x) cin >> x;
#define r(x) printf("%d\n", x);
#define vout(x)                        \
    for (int i = 0; i < x.size(); i++) \
        printf("%d ", x[i]);
#define pie acos(-1)
#define MOD 998244353
#define endl '\n'
/*******  LOOP  for i++ *********/
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i < n; i++)
#define f2(i, n) for (int i = 0; i <= n; i++)
#define f3(i, n) for (int i = 1; i <= n; i++)
/*******  LOOP  for i-- *********/
#define fa0(i, n) for (int i = 0; i < n; i--)
#define fa1(i, n) for (int i = 0; i <= n; i--)
#define fa2(i, n) for (int i = 1; i < n; i--)
#define fa3(i, n) for (int i = n - 1; i >= 0; i--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

int Set(int N, int pos) { return N = N | (1 << pos); }
int reset(int N, int pos) { return N = N & ~(1 << pos); }
bool check(int N, int pos) { return (bool)(N & (1 << pos)); }

/******     Fast IO           *********/
#define raihan                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
/******** Slove *********/
void slove()
{
    int n;
    cin >> n;
    vi a(n);
    for (int &x : a)
    {
        cin >> x;
    }

    vi ind(n);
    iota(begin(ind), end(ind), 0);
    sort(rbegin(ind), rend(ind), [&](int i, int j)
         { return a[i] < a[j]; });
    vi ans(n);
    f0(i, n)
    {
        ans[ind[i]] = i + 1;
    }

    for (int x : ans)
    {
        cout << x << ' ';
    }

    cout << '\n';
}
/******* Main **********/
int32_t main()
{
    raihan;
    int test;
    take(test);
    f0(i, test)
    {
        slove();
    }

    return 0;
}
