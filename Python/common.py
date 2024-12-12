import math
import numpy as np
from typing import List

Inf = int(1e9)
mod = int(1e9 + 7)
INF = int(1e18)
maxn = int(1e3)
eps = 1e-9
inf = float('inf')

def geq(a, b):
    return a - b >= -eps

def leq(a, b):
    return b - a >= -eps

def ge(a, b):
    return a - b > eps

def le(a, b):
    return b - a > eps

def eq(a, b):
    return abs(a - b) <= eps

def neq(a, b):
    return abs(a - b) > eps

def binary_exponentiation(b, p):
    result = 1.0
    while p:
        if p & 1:
            result *= b
        b *= b
        p >>= 1
    return result

def derivative(v):
    n = len(v)
    return [v[i] * i for i in range(1, n)]

def evaluate(v, x):
    result = 0.0
    n = len(v)
    for i in range(n):
        result += v[i] * binary_exponentiation(x, i)
    return result
