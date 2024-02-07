#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    double t;
    cin >> n;
    if(n>=10000000000){
        t=n/1000000000;
        cout <<  round(t)<< "B";
        return 0;
    }
    if(n>=1000000000){
        t=n/1000000000;
        cout <<  round(t*10)/10.0 << "B";
        return 0;
    }
    if(n>=10000000){
        t=n/1000000;
        cout <<  round(t) << "M";
        return 0;
    }
    if(n>=1000000){
        t=n/1000000;
        cout <<  round(t*10)/10.0 << "M";
        return 0;
    }
    if(n>=10000){
        t=n/1000;
        cout <<  round(t) << "K";
        return 0;
    }
    if(n>=1000){
        t=n/1000;   
        cout <<  round(t*10)/10.0 << "K";
        return 0;
    }
    cout << n;
    return 0;
}