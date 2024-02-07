#include <bits/stdc++.h>
using namespace std;
string dec2hex(int d, string buffer)
{
    int x = d % 16;
    char xchar = x + '0';
    if (d == 0 && buffer.empty())
    {
        return "0";
    }else if(d==0){
        return buffer;
    }
    switch (x)
    {
    case 10: buffer = 'A' + buffer; break;
    case 11: buffer = 'B' + buffer; break;
    case 12: buffer = 'C' + buffer; break;
    case 13: buffer = 'D' + buffer; break;
    case 14: buffer = 'E' + buffer; break;
    case 15: buffer = 'F' + buffer; break;
    default: buffer = xchar + buffer;
    }
    return dec2hex(d / 16, buffer);
}
int main(){
    int n;
    string ans;
    while(cin>>n){
        cout << n << " -> " << dec2hex(n,ans) << endl;
    }
    return 0;
}