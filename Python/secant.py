def secant(v, x0, x1):
        for i in range(maxn):
                a = evaluate(v, x0)
                b = evaluate(v, x1)
                ant = x1 - b * (x1 - x0) / (b - a)
                if abs(ant - x1) == 0:
                        return ant
                x0 = x1
                a = b
                x1 = ant
                b = evaluate(v, ant)
        return INF
