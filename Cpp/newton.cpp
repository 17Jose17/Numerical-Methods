ld newton(vector<ld> v, ld x0){
        for(int i = 0; i < maxn; i++){
                ld ant = x0 - evaluate(v, x0) / evaluate(derivative(v), x0);
                if(eq(abs(ant - x0), 0)) return ant;
                x0 = ant;
        }
        return INF;
}
