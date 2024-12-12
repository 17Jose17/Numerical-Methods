def lagrange(v, x):
        n = len(v)
        
        fact = [0] * maxn
        inv = [0] * maxn
        inv_fac = [0] * maxn
        fact[0] = fact[1] = inv[0] = inv[1] = inv_fac[0] = inv_fac[1] = 1
        
        for i in range(2, maxn - 4):
                fact[i] = (fact[i - 1] * i) % mod
                inv[i] = (inv[mod % i] * (mod - mod // i)) % mod
                inv_fac[i] = (inv_fac[i - 1] * inv[i]) % mod
        
        preff = [0] * maxn
        suff = [0] * maxn
        preff[0] = suff[0] = 1
        
        for i in range(1, maxn - 4):
                preff[i] = (preff[i - 1] * (x - i)) % mod
                suff[i] = (suff[i - 1] * (x - n + i - 1)) % mod
        
        ans = 0
        for i in range(1, n + 1):
                term = ((((((v[i - 1] * inv_fac[n - i]) % mod) * inv_fac[i - 1]) % mod) * preff[i - 1]) % mod) * suff[n - i]) % mod
                if (n + i - 1) % 2:
                        ans += term
                else:
                        ans -= term
                if ans < 0:
                        ans += mod
        
        return (ans % mod)
