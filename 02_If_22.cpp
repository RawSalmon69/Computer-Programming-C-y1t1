#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y,n=0;
    cin >> d >> m >> y;
    if(m>2 && (y-543)%4==0 && (y-543)%100!=0){
        n++;
    }
    else if(m>2 && (y-543)%400==0){
        n++;
    }
    if(m==2){
        n+=31;
    }
    else if(m==3){
        n+=59;
    }
    else if(m==4){
        n+=90;   
    }
    else if(m==5){
        n+=120;
    }
    else if(m==6){
        n+=151;
    }
    else if(m==7){  
        n+=181;
    }
    else if(m==8){
        n+=212;
    }
    else if(m==9){
        n+=243;
    }
    else if(m==10){
        n+=273;
    }
    else if(m==11){
        n+=304;
    }
    else if(m==12){
        n+=334;
    }
    cout << n+d;
    return 0;  
}