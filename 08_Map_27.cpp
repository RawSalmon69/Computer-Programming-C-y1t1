#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m={{2,"a"},{22,"b"},{222,"c"},
        {3,"d"},{33,"e"},{333,"f"},{4,"g"},{44,"h"},{444,"i"},
        {5,"j"},{55,"k"},{555,"l"},{6,"m"},{66,"n"},{666,"o"},
        {7,"p"},{77,"q"},{777,"r"},{7777,"s"},{8,"t"},{88,"u"},
        {888,"v"},{9,"w"},{99,"x"},{999,"y"},{9999,"z"},{0," "}};
    string input;
    while(getline(cin,input)){
        if(input.substr(0,3)=="T2K"){
            string ans="";
            input=input.substr(4);
            for(int i=0;i<input.length();i++){
                for(auto k : m){
                    if(to_string(k.second)==input[i]){
                        ans+=k.first+" ";
                    }
                }
            }
            cout << ">> " << ans << endl;
        }else{
            input=input.substr(4);
            istringstream iss(input);
            string word;
            string ans="";
            while(iss>>word){
                for(auto i : m){
                    if(i.first==stoi(word)){
                        ans+=i.second;
                    }
                }
            }
            cout << ">> " << ans << endl;
        }
    }
    return 0;
}