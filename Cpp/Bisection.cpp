#include <bits/stdc++.h>
using namespace std;

// Holi c:

#define ll long long int
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()

const int Inf = 1e9;
const ll mod = 1e9+7;
const ll INF = 1e18;
const int maxn = 1e3;

using ld = long double;
const ld eps = 1e-9, inf = numeric_limits<ld>::max(), pi = acos(-1);
bool eq(ld a, ld b){return abs(a-b) <= eps;}  //a == b

ld binaryExponential(ld b, ll p){
    ld res = 1;
    while(p){
      if(p & 1) res *= b;
        b *= b;
        p >>= 1;
    }
    return res;
  }
  
  ld evaluate(ld x, vector<ld> v){
    ld res = 0; 
    int n = v.size();
    for(int i = 0; i < n; i++){
      res += v[i] * binaryExponential(x, i);
    }
    return res;
}

ld bisection(vector<ld> u){
    ld l = -Inf, r = Inf, ant = evaluate(-Inf, u);
    for(int i = 0; i < maxn; i++){
      ld m = l + (r - l) / 2;
      if(eq(evaluate(m, u), 0)) return m;
      if(ant * evaluate(m, u) > 0){
        ant = evaluate(m, u);
        l = m;
      }else r = m;
    }
    return INF;
}

int main(){
	  int n; 
    cin >> n; 
    vector<int> v(n);
	  for(auto  & i : v) cin>>i;
	  vector<ld> u; 
    for(int i = 0; i < n; i++) u.pb(v[i]);
	  auto a = bisection(u);
    if(a == INF) cout << "Solution not found";
    else cout << "The answer is " << a;
}
