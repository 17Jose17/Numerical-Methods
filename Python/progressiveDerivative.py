def progressive_derivative(v, a, b):
        return (evaluate(v, a + b) - evaluate(v, a)) / b
