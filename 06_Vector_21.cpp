#include <bits/stdc++.h>
using namespace std;
int main(){
    string input; cin >> input;
    input = input+'$';
    vector<string> joe;
    joe.push_back(input);
    int len=input.length();
    for(int i=0;i<len-1;i++){
        char temp = input[0];
        for(int j=0;j<len;j++){
            input[j]=input[j+1];
        }
        input[len-1]=temp;
        joe.push_back(input);
    }
    // for(auto itr: joe){
    //     cout << itr << endl;
    // }
    sort(joe.begin(),joe.end());
    string ans="";
    for(int i=0;i<joe.size();i++){
        ans = ans+joe[i][len-1];
    }
    cout << ans;
    return 0;
}