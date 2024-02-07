#include <bits/stdc++.h>
using namespace std;
long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}
int main(){
    int f,nlen,zlen,top,bot,gc,D;
    string d,sp;
    cin >> f >> d >> sp;
    string full= d+sp;
    int fulli = stoi(full);
    nlen = full.length();
    zlen = d.length();
    D = stoi(d);
    top = fulli-D;
    bot = (pow(10,nlen)-pow(10,zlen));
    gc = gcd(top,bot);
    cout << ((f*bot)+top)/gc << " / " << bot/gc;
    return 0;
}