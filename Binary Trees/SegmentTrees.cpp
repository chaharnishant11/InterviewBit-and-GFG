//
// Created by sark2 on 02-10-2019.
//

#include "bits/stdc++.h"

using namespace std;
#define IOS cin.sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cases int t;cin>>t;while(t--)
typedef long double ld;
typedef long long ll;
ll mod = 1e9 + 7;
const int MAXN = 100000;
int n;

struct Node{
    ll TotalSum;
    ll MaxPrefix;
    ll MaxSuffix;
    ll MaxSub;
    Node(){}
}t[4*MAXN];

void build(ll a[], int v, int tl, int tr){
    if(tl == tr){
        t[v].MaxPrefix = a[tl];
        t[v].MaxSub = a[tl];
        t[v].MaxSuffix = a[tl];
        t[v].TotalSum = a[tl];
    }else{
        int tm = (tl+tr)/2;
        build(a,v*2,tl,tm);
        build(a,v*2+1, tm+1,tr);

        t[v].TotalSum = t[v*2].TotalSum + t[v*2+1].TotalSum;
        t[v].MaxPrefix = max(t[v*2].MaxPrefix, t[v*2].TotalSum + t[v*2+1].MaxPrefix);
        t[v].MaxSuffix = max(t[v*2+1].MaxSuffix, t[v*2].MaxSuffix + t[v*2+1].TotalSum);
        t[v].MaxSub = max(max(t[v*2].MaxSub,t[v*2+1].MaxSub), t[v*2].MaxSuffix + t[v*2+1].MaxPrefix);
    }
}

void query(Node &result, int v, int tl, int tr, int l, int r){
    if(l == tl && r == tr){
        result = t[v];
        return;
    }
    int tm = (tl+tr)/2;
    if(tm >= r)
        query(result, 2*v, tl, tm, l, r);
    else if(tm < l)
        query(result, 2*v+1, tm+1, tr, l, r);
    else {
        Node left, right;
        query(left, v * 2, tl, tm, l, tm);
        query(right, v * 2 + 1, tm + 1, tr, tm+1, r);

        result.MaxPrefix = max(left.MaxPrefix, left.TotalSum + right.MaxPrefix);
        result.MaxSuffix = max(right.MaxSuffix, right.TotalSum + left.MaxSuffix);
        result.TotalSum = left.TotalSum + right.TotalSum;
        result.MaxSub = max(left.MaxSuffix + right.MaxPrefix, max(left.MaxSub, right.MaxSub));
    }
    }


int main() {
    IOS


    int m;
    cin>>n;

    ll a[n+5];


    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }

    build(a, 1, 1, n);
    cin>>m;

    while(m--){
        ll p,b;
        cin>>p>>b;
        Node result;
        query(result,1,1,n,p,b);
        cout<<result.MaxSub<<"\n";
    }



}
