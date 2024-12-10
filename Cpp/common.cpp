#include "common.h"

ld binaryExponential(ld b, ll p){
    ld res = 1;
    while(p){
        if(p & 1) res *= b;
        b *= b;
        p >>= 1;
    }
    return res;
}

vector<ld> derivative(vector<ld> v){
    int n = v.size(); 
    vector<ld> u(n - 1);
    for(int i = 1; i <  n; i++){
        u[i - 1] = v[i] * i;
    }
    return u;
}

ld evaluate(ld x, vector<ld> v){
    ld res = 0; 
    int n = v.size();
    for(int i = 0; i < n; i++){
        res += v[i] * binaryExponential(x, i);
    }
    return res;
}
