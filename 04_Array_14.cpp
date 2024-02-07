#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cin >> r >> c;
    float table[r][c];
    float avg[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> table[i][j];
        }
    }
    for(int i=1;i<r-1;i++){
        for(int j=1;j<c-1;j++){
            avg[i][j]=(table[i-1][j-1]+table[i-1][j]+table[i-1][j+1]+table[i][j-1]+table[i][j+1]+table[i][j]+table[i+1][j-1]+table[i+1][j]+table[i+1][j+1])/9;
            cout << setprecision(2) << avg[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}