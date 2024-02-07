#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int fact(int n){
    int fc=1;
    for(int i=1;i<=n;i++){    
      fc=fc*i;
    }
    return fc;    
}    
int main(){
    cout << (M_PI - (fact(10) / pow(8, 8)) + pow(log(9.7), (7 / pow(71, 0.5)) - sin((double)40 * M_PI / 180))) / pow(1.2, pow(2.3, (double)1 / 3));
}