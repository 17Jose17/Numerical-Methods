ld threePointDerivativ(vector<ld> v, ld a, ld b){
      return (-evaluate(v, a + b * 2) + evaluate(v, a + b) * 4 - evaluate(v, a) * 3) / b / 2.0;
}
