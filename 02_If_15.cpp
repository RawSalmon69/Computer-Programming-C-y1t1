#include <bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin >> number;
    if(number.length()!=10){
        cout << "Not a mobile number"; return 0;
    }
    string firsttwo = number.substr(0,2);
    if(firsttwo != "06" && firsttwo != "08" && firsttwo != "09"){
        cout << "Not a mobile number"; return 0;
    }
    cout << "Mobile number";
    return 0;
}