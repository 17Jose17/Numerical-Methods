def bisection(u):
        l = -Inf
        r = Inf
        ant = evaluate(u, -Inf)
        for _ in range(maxn):
                m = l + (r - l) / 2
                t = evaluate(u, m)
                if eq(t, 0):
                        return m
                if ant * t > 0:
                        ant = t
                        l = m
                else:
                        r = m
        return INF
