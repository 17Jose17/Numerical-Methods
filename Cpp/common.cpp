#include "common.h"

bool geq(ld a, ld b){
        return a - b >= -eps;
}

bool leq(ld a, ld b){
        return b - a >= -eps;
}

bool ge(ld a, ld b){
        return a - b > eps;
}

bool le(ld a, ld b){
        return b - a > eps;
}

bool eq(ld a, ld b){
        return abs(a - b) <= eps;
}

bool neq(ld a, ld b){
        return abs(a - b) > eps;
}

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

ld evaluate(vector<ld> v, ld x){
        ld res = 0; 
        int n = v.size();
        for(int i = 0; i < n; i++){
                res += v[i] * binaryExponential(x, i);
        }
        return res;
}
