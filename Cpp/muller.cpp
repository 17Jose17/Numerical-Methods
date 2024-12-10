ld muller(vector<ld> v, ld x0, ld x1, ld x2){
        for(int i = 0; i < maxn; i++){
                ld h1 = x1 - x0, h2 = x2 - x1;
                ld s1 = (evaluate(v, x1) - evaluate(v, x0)) / h1, s2 = (evaluate(v, x2) - evaluate(v, x1)) / h2;
                ld d = (s2 - s1) / (h2 + h1), b = s2 + h2 * d;
                ld D = sqrt((binaryExponentiation(b, 2) - evaluate(x2, u) * 4) * d);
                ld E;
                if(abs(b - D) < abs(b + D)) E = b + D;
                else E = b - D;
                ld res = evaluate(v, x2) * -2.0 / E;
                ld ant = x2 + res;
                if(eq(res, 0)) return ant;
                x0 = x1; 
                x1 = x2; 
                x2 = ant;
      }
      return INF;
}
