ld forwardDerivative(vector<ld> v, ld a, ld b){
        return (evaluate(v, a) - evaluate(v, a - b)) / b;
}
