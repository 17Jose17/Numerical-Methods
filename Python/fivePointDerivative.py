def five_point_derivative(v, a, b):
        return (-evaluate(v, a + b * 2) + evaluate(v, a + b) * 8 - evaluate(v, a - b) * 8 + evaluate(v, a - b * 2)) / b / 12
