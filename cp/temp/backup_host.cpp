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
        ll n;
        cin >> n;
        ll arr[n];
        for(ll &i: arr) cin >> i;

        ll five = 0, ten = 0;
        bool flag = true;
        LP(i, n)    {
            if(arr[i] == 5) {
                five ++;
            }
            else if(arr[i] == 10)   {
                if(five >= 1)   {
                    five--, ten++;
                }
                else {
                    flag = false;
                    break;
                }
            }
            else {
                if(ten >= 1)    {
                    ten--;
                }
                else if(five >= 2)  {
                    five-=2;
                }
                else {
                    flag = false;
                    break;
                }
            }
        }
        if(flag)    {
            cout << "YES" << enl;
        }
        else {
            cout << "NO"  << enl;
        }
    }

    return 0;
}