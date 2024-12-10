#ifndef COMMON_H
#define COMMON_H

#include <vector>
#include <iostream>
using namespace std;

#define ll long long int
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()

using ld = long double;

const int Inf = 1e9;
const ll mod = 1e9 + 7;
const ll INF = 1e18;
const int maxn = 1e3;
const ld eps = 1e-9;
const inf = numeric_limits<ld>::max();
const pi = acos(-1);

bool geq(ld a, ld b);

bool leq(ld a, ld b);

bool ge(ld a, ld b);

bool le(ld a, ld b);

bool eq(ld a, ld b);

bool neq(ld a, ld b);

ld binaryExponentiation(ld b, ll p);

vector<ld> derivative(vector<ld> v);

ld evaluate(vector<ld> v, ld x);

#endif
