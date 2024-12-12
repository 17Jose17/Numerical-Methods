def fixed_point_iteration(v, x0):
        r = v[1] * -1
        v[1] = 0
        for i in range(maxn):
                ant = evaluate(v, x0) / r
                if abs(ant - x0) == 0:
                        return ant
                x0 = ant
        return INF
