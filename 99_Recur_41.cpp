#include <bits/stdc++.h>
using namespace std;
int warp(int n, vector<pair> gates){
    for(int i=0;i<gates.size();i++){
        if(gates[i].first()==n){
            warp(gates[i].second, gates);

        }
    }
}
int main(){

    return 0;
}