def simpson(v, a, b):
        h = (b - a) / maxn
        s = evaluate(v, a) + evaluate(v, b)
        for i in range(1, maxn):
                h1 = a + h * i
                s += evaluate(v, h1) * (4 if i % 2 == 1 else 2)
        return s * h / 3.0
