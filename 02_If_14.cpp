#include <bits/stdc++.h>
using namespace std;
int gradevalue(char x){
    return x-64;
}
int main(){
    int id1,id2;
    float gpx1,gpx2;
    char cprog1, cprog2, cal11, cal12, cal21,cal22;
    cin >> id1 >> gpx1 >> cprog1 >> cal11 >> cal21;
    cin >> id2 >> gpx2 >> cprog2 >> cal12 >> cal22;
    int c11, c12, c21, c22;
    c11 = gradevalue(cal11);
    c12 = gradevalue(cal12);
    c21 = gradevalue(cal21);
    c22 = gradevalue(cal22);
    if(cprog1 != 'A' && c12<4 && c22<4){
        if(cprog2 != 'A'){
            cout << "None"; return 0;
        }
        cout << id2; return 0;
    }
    else if(cprog2 != 'A' && c11<4 && c12<4){
        cout << id1; return 0;
    }
    if(c11>3 || c21>3){
        if(c12<4 && c22<4){
            cout << id2; return 0;
        }
        else{
            cout << "None"; return 0;
        }
    }
    if(c12>3|| c22>3){
        if(c11<4 && c12<4){
            cout << id1; return 0;
        }
        else{
            cout << "None"; return 0;
        }
    }
    if(gpx1>gpx2){
        cout << id1; return 0;
    }
    if(gpx2>gpx1){
        cout << id2; return 0;
    }
    if(c11<c12){
        cout << id1; return 0;
    }
    if(c12<c11){
        cout << id2; return 0;
    }
    if(c21<c22){
        cout << id1; return 0;
    }
    if(c22>c21){
        cout << id2; return 0;
    }
    cout << "Both";
    return 0;
}