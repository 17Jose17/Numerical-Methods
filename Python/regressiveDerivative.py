def regressive_derivative(v, a, b):
        return (evaluate(v, a) - evaluate(v, a - b)) / b
