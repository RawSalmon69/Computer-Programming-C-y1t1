#include <bits/stdc++.h>
using namespace std;
string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}
int main(){
    int n,count=0;
    cin >> n;
    for(int i=0;i<=n;i++){
        string input;
        bool wcheck=true;
        getline(cin,input);
        count++;        qqq
        input=removeSpaces(input);
        //1cout << input;
        int len=input.length();
            int score = 1;
            wcheck=true;
            if(input[0]!='R' && count!=1){
                cout << "WRONG_INPUT" << endl;
                wcheck=false;
                continue;
            }
            for(int j=1;j<len;j++){
                if(input[0]!='R'){
                    cout << "WRONG_INPUT" << endl;
                    wcheck=false;
                    break;
                }
                if(input[j-1]=='R' && input[j]=='R'){
                    cout << "WRONG_INPUT" << endl;
                    wcheck=false;
                    break;
                }
                if(input[j-1]=='R' && input[j]=='Y'){
                    score+=2;
                    continue;
                }
                if(input[j-1]=='R' && input[j]=='G'){
                    score+=3;
                    continue;
                }
                if(input[j-1]=='R' && input[j]=='N'){
                    score+=4;
                    continue;
                }
                if(input[j-1]=='R' && input[j]=='B'){
                    score+=5;
                    continue;
                }
                if(input[j-1]=='R' && input[j]=='P'){
                    score+=6;
                    continue;
                }
                if(input[j-1]=='R' && input[j]=='K'){
                    score+=7;
                    continue;
                }
                if(input[j]=='G' && input[j-1]!='Y'){
                    cout << "WRONG_INPUT" << endl;
                    wcheck=false;
                    break;
                }
                if(input[j]=='N' && input[j-1]!='G'){
                    cout << "WRONG_INPUT" << endl;
                    wcheck=false;
                    break;
                }
                if(input[j]=='B' && input[j-1]!='N'){
                    cout << "WRONG_INPUT" << endl;
                    wcheck=false;
                    break;
                }
                if(input[j]=='P' && input[j-1]!='B'){
                    cout << "WRONG_INPUT" << endl;
                    wcheck=false;
                    break;
                }
                if(input[j]=='K' && input[j-1]!='P'){
                    cout << "WRONG_INPUT" << endl;
                    wcheck=false;
                    break;
                }
                if(input[j]=='R'){
                    score+=1;
                }
                if(input[j]=='Y'){
                    score+=2;
                }
                if(input[j]=='G'){
                    score+=3;
                }
                if(input[j]=='N'){
                    score+=4;
                }
                if(input[j]=='B'){
                    score+=5;
                }
                if(input[j]=='P'){
                    score+=6;
                }
                if(input[j]=='K'){
                    score+=7;
                }
        }
        if(wcheck==true && count!=1){
            //cout<<count;
            cout << score << endl;
        }

    }
    return 0;
}