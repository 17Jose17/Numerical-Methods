def newton(v, x0):
        for i in range(maxn):
                ant = x0 - evaluate(v, x0) / evaluate(derivative(v), x0)
                if abs(ant - x0) == 0:
                        return ant
                x0 = ant
        return INF
