ld progressiveDerivative(vector<ld> v, ld a, ld b){
      return (evaluate(v, a + b) - evaluate(v, a)) / b;
}
