ld bisection(vector<ld> u){
	ld l = -Inf, r = Inf, ant = evaluate(u, -Inf);
	for(int i = 0; i < maxn; i++){
		ld m = l + (r - l) / 2;
		ld t = evaluate(u, m);
		if(eq(t, 0)) return m;
		if(ant * t > 0){
			    ant = t;
			    l = m;
		}else r = m;
	}
	return INF;
}
