ld forwardDerivative(vector<ld> v, ld x0, ld x1){
    return (evaluate(v, x0) - evaluate(v, x0 - x1)) / x1;
}
