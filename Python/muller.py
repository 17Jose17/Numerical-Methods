def muller(v, x0, x1, x2):
        for i in range(maxn):
                h1 = x1 - x0
                h2 = x2 - x1
                s1 = (evaluate(v, x1) - evaluate(v, x0)) / h1
                s2 = (evaluate(v, x2) - evaluate(v, x1)) / h2
                d = (s2 - s1) / (h2 + h1)
                b = s2 + h2 * d
                D = np.sqrt((b**2 - evaluate(v, x2) * 4) * d)
                if abs(b - D) < abs(b + D):
                        E = b + D
                else:
                        E = b - D
                res = evaluate(v, x2) * -2.0 / E
                ant = x2 + res
                if abs(res) == 0:
                        return ant
                x0, x1, x2 = x1, x2, ant
        return INF
