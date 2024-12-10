ld bisection(vector<ld> u){
	ld l = -Inf, r = Inf, ant = evaluate(-Inf, u);
	for(int i = 0; i < maxn; i++){
		ld m = l + (r - l) / 2;
		if(eq(evaluate(m, u), 0)) return m;
		if(ant * evaluate(m, u) > 0){
			    ant = evaluate(m, u);
			    l = m;
		}else r = m;
	}
	return INF;
}
