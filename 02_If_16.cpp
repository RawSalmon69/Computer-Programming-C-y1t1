#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    if(x>0){
        cout << "positive" << endl;
    }
    else if(x<0){
        cout << "negative" << endl;
    }
    else cout << "zero" << endl;
    if(x%2==0){
        cout << "even";
    }
    else cout << "odd";
    return 0;
}