ld fixedPointIteration(vector<ld> v, ld x0){
        ld r = v[1] * -1; 
        v[1] = 0;
        for(int i = 0; i < maxn; i++){
                ld ant = evaluate(v, x0) / r;
                if(eq(abs(ant - x0), 0)) return ant;
                x0 = ant;
        }
        return INF;
}
