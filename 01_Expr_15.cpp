#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    cin >> x;
    y=pow(x,(sqrt(log((pow((x+1),2))))))/(10-x);
    cout << round(y*1e6)/1e6;
    return 0;
}