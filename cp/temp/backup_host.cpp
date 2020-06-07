#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;

#define pi              pair<int,int> 
#define pll             pair<ll,ll> 
#define LP(i, n)        for(ll i = 0; i < (n); i++)
#define LPU(i, x, n)    for(ll i = (x); i < (n); i++)
#define vll             vector<ll>
#define Test            ll t; cin >> t; while(t--)
#define enl             "\n"
#define deb(x)          cout << "x: " << x << enl;
#define pb              push_back
#define mp              make_pair


int main() {
    std::ios::sync_with_stdio(false);
    Test {
        int n, k;
        cin >> n >> k;

        int loss = 0, p;

        while(n--)  {
            cin >> p;
            loss += (p-k > 0)?(p-k):0;
        }

        cout << loss << enl;

    }

    return 0;
}