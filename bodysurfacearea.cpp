#include <bits/stdc++.h>
using namespace std;
double mos(double w,double h){
    return (sqrt(w*h)/60);
}
double hay(double w,double h){
    return (0.024265*pow(w,0.5378)*pow(h,0.3964));
}
double boyd(double w,double h){
    return (0.0333*pow(w,(0.6157-(0.0188*(log10(w)))))*pow(h,0.3));
}

int main(){
    double w,h;
    cin >> w >> h;
    cout << setprecision(15) << mos(w,h) << endl;
    cout << setprecision(15) << hay(w,h) << endl;
    cout << setprecision(15) << boyd(w,h)<< endl;
    return 0;
}