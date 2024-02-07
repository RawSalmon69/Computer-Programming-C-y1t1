#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=0,count=0,mina=INT_MAX,maxa=INT_MIN,minb=INT_MAX,maxb=INT_MIN;
    do{
        cin >> a;
        if(a==-998) break;
        if(a==-999) break; 
        cin >> b;
        count++;
        if(count%2==1){
            if(a<=mina)   mina=a;
            if(a>=maxa)   maxa=a;
            if(b<=minb)   minb=b;
            if(b>=maxb)   maxb=b;
        }
        else{
            if(a<=minb)   minb=a;
            if(a>=maxb)   maxb=a;
            if(b<=mina)   mina=b;
            if(b>=maxa)   maxa=b;
        }
    }
    while(a!=-998 && a!=-999);
    if(a==-998) cout << mina << ' ' << maxb;
    else cout << minb << ' ' << maxa;
    return 0;
}