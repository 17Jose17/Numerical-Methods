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

const int Inf = 1e9;
const ll mod = 1e9 + 7;
const ll INF = 1e18;
const int maxn = 1e3;

using ld = long double;

ld binaryExponentiation(ld b, ll p);

vector<ld> derivative(vector<ld> v);

ld evaluate(vector<ld> v, ld x);

#endif
