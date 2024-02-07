#include <bits/stdc++.h>
using namespace std;
int main(){
    string in;
    cin >> in;
    string mo[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    string date = in.substr(0,2);
    string month = in.substr(3,2);
    string year = in.substr(6.4);
    int d = stoi(date);
    int m = stoi(month);
    int y = stoi(year);
    //cout << date << " " << month << " " << year << endl;
    cout << mo[m-1] << " " << d << ", " << y-543;
    return 0;
}