pair<ld, ld> linearRegression(vector<ld> v, vector<ld> u){
    int n = v.size();
    ld sx = 0, sy = 0, sxy = 0, sxx = 0;
    for(int i = 0; i < n; i++) sx += v[i], sy += u[i], sxy += v[i] * u[i], sxx += v[i] * v[i];
    ld m = (n * sxy - sx * sy) / (n * sxx - sx * sx);
    return{m, (sy - sx * m) / n};
}
