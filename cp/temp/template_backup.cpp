
/* template C++17 and above
    handle: rishursx
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define pi pair<int,int> 
#define pll pair<ll,ll> 
#define lp(i, n)        for(ll i = 0; i < (n); i++)
#define lpu(i, x, n)    for(ll i = (x); i < (n); i++)
#define vll             vector<ll>
#define Test            ll t; cin >> t; while(t--)
#define enl             "\n"
#define deb(x)          cout << "x: " << x << enl;
#define pb              push_back
#define mp              make_pair

class Node {
public:
    int val;
    vector<Node*> neighbors;
    int color;
    int dist;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
        color = 0;
        dist = 0;
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
        color = 0;
        dist = 0;
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
        color = 0;
    }
};

void bfs(const vector<Node*> &graph, int src) {
    
    queue<Node*> q;
    q.push(graph[src]);
    graph[src]->dist = 0;
    while(!q.empty())   {
        Node* temp = q.front();
        // cout << temp -> val << " ";
        temp->color = 2;
        q.pop();
        for(auto i: temp->neighbors)    {
            if(i->color == 0)   {
                i->dist = temp->dist+1;
                q.push(i);
                i->color = 1;
            }
        }
    }
    // cout << enl;
    
    return;
}

void dfs(const vector<Node*> &graph, int src) {
    stack<Node*> s;
    s.push(graph[src]);
    graph[src]->color = 1;
    while(!s.empty())   {
        auto p = s.top();
        s.pop();
        p->color = 2;
        cout << p -> val << " ";

        for(auto i: p->neighbors)   {
            if(i->color == 0)   {
                s.push(i);
                i->color = 1;
            }
        }

    }
    cout << enl;
    return;
}

inline int type(char x) {
    if(x == 'L' || x =='R') return 1;
    if(x == 'U' || x == 'D') return 2;

    return 0;
}

int main() {
    
    std::ios::sync_with_stdio(false);

    string s;
    cin >> s;
    cout << s << endl;
    cout << 1/0;
    return 0;
}