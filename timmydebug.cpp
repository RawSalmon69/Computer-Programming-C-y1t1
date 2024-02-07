#include <iostream>
using namespace std;
int main(){
    int d,m,y,n,dayNum;
    cin >> d >> m >> y;
    n =28;
    y-=543;
    if(y%400 == 0 || ((y%4 == 0)&&(y%100 != 0))) n=29;
    int Day[] = {0,31,n,31,30,31,30,31,31,30,31,30,31};
    for(int i=0; i<m; i++){
        dayNum+=Day[i];
    }
    dayNum+=d;
    cout << dayNum;
    return 0;
}