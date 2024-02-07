#include <bits/stdc++.h>
using namespace std; 
int main(){
    int date[3],i=0;
    string input;
    cin >> input;
    stringstream ss(input);
    while(getline(ss,date[i],'/')){
        date[i]=ss;
        cout << ss;
        i++;
    }
    return 0;
}