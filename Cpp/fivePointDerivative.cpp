ld fivePointDerivative(vector<ld> v, ld a, ld b){
      return (-evaluate(v, a + b * 2) + evaluate(v, a + b) * 8 - evaluate(v, a - b) * 8 + evaluate(v, a - b * 2)) / b / 12.0;
}
