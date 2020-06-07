#include<bits/stdc++.h>
using namespace std;

void permute(int *s, int l, int r)    {
    if(l == r)  {
        // cout << s << endl;
        for(int i = 0; i < r; i++)  cout << s[i] << " ";
        cout << endl;
        return;
    }
    else {
        for(int i = l; i < r; i++)  {
            swap(s[i], s[l]);
            permute(s, l+1, r);
            swap(s[i], s[l]);
        }
    }
    return;
}


int main()  {
    int n;
    cin >> n;
    int s[n];
    for(int &i: s) cin >> i;
    permute(s, 0, n);
    return 0;
}