ld simpson(vector<ld> v, ld a, ld b){
        ld h = (b - a) / maxn;
        ld s = evaluate(v, a) + evaluate(v, b);
        for(int i = 1; i <= maxn - 1; i++){
                ld h1 = a + h * i;
                s += evaluate(v, h1) * ((i & 1) ? 4 : 2);
        }
        return s * h / 3.0;
}
