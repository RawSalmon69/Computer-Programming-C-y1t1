#include <bits/stdc++.h>
using namespace std;
/*int calcstr(string x, string y){
    int maxdiff = x.length()-y.length(), maxcount=0,diff=0;
    for(int i=0;i<maxdiff;i++){
        int count=0;
        int move=0;
        for(int j=0;j<y.length();j++){
            if(y[j]==x[j+i]){
                count++;
            }
        }
        if(count>=maxcount){
            maxcount=count;
            diff=i;
        }
    }
    for(int i=0;i<diff;i++){
        y = "-" + y;
    }
}
*/
int main(){
    string a,b;
    cin >> a;
    cin >> b;
    int alen = a.length(), blen = b.length(),maxcount=0,maxdiff=0,diff=0;
    if(alen>=blen) maxdiff=alen-blen;
    else maxdiff=blen-alen;
    if(alen>blen){
        for(int i=0;i<=alen;i++){
            int count=0;
            for(int j=0;j<b.length();j++){
                if(b[j]==a[j+i]){
                    count++;
                }
            }
            if(count>maxcount){
                maxcount=count;
                diff=i;
            }
        }
        for(int i=0;i<diff;i++){
            b = "-" + b;
        }
    } else{
        for(int i=0;i<=blen;i++){
            int count=0;
            for(int j=0;j<a.length();j++){
                if(a[j]==b[j+i]){
                    count++;
                }
            }
            if(count>maxcount){
                maxcount=count;
                diff=i;
            }
        }
        for(int i=0;i<diff;i++){
            a = "-" + a;
        }
    }
    cout << a << endl << b << endl << maxcount;
    /*
    if(alen>=blen) calcstr(a,b);
    else calcstr(b,a);
    */
    return 0;
}