//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vp;
typedef map<ll, ll> ml;
typedef unordered_map<ll, ll> uml;
#define pb push_back
#define ff first
#define ss second
const ll inf = INT_MAX;
const ll mod = 1000000007;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
ll sm(ll n)
{
    ll ans = n * (n + 1) / 2;
    return ans;
}
bool isprime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
bool perfectSquare(ld x)
{
    ld sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}

/*___________________*workplace*_______________________*/
ll partition(ll *arr, ll start, ll end)
{
    ll x = arr[end];
    ll j = start - 1;
    for (ll i = start; i < end - 1; i++)
    {
        if (arr[i] <= x)
        {
            j++;
            swap(arr[j], arr[i]);
        }
    }
    j++;
    swap(arr[j], arr[end]);
    return j;
}
void quicksort(ll *arr, ll start, ll end)
{
    if (start < end)
    {
        ll mid = partition(arr, start, end);
        quicksort(arr, start, mid - 1);
        quicksort(arr, mid + 1, end);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case = 1;
    // cin >> test_case;
    while (test_case--)
    {
        ll n, i;
        cin >> n;
        ll arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        quicksort(arr, 0, n - 1);
        for (i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
