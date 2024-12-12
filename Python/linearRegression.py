def linear_regression(v, u):
            v = np.array(v)
            u = np.array(u)
            n = len(v)
            sx = np.sum(v)
            sy = np.sum(u)
            sxy = np.sum(v * u)
            sxx = np.sum(v * v)
            m = (n * sxy - sx * sy) / (n * sxx - sx * sx)
            return m, (sy - sx * m) / n
