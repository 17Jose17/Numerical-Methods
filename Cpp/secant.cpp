ld secant(vector<ld> v, ld x0, ld x1){
        for(int i = 0; i < maxn; i++){
                ld a = evaluate(v, x0), b = evaluate(v, x1);    
                ld ant = x1 - b * (x1 - x0) / (b - a);
                if(eq(abs(ant - x1), 0)) return ant;
                x0 = x1;
                a = b;
                x1 = ant;
                b = evaluate(v, ant);
        }
        return INF;
}
