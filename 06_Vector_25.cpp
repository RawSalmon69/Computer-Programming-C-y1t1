#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<string,string>> stu;
    string input1,input2;
    while(true){
        cin >> input1;
        if(input1=="q") break;
        cin >> input2;
        stu.push_back(make_pair(input1,input2));
    }
    cin.ignore();
    string edit;
    getline(cin,edit);
    istringstream iss(edit);
    string word;
    while(iss >> word){
        for(auto &m : stu){
            if(word==m.first){
                if(m.second=="B+")  m=make_pair(m.first,"A" );
                if(m.second=="B" )  m=make_pair(m.first,"B+");
                if(m.second=="C+")  m=make_pair(m.first,"B" );
                if(m.second=="C" )  m=make_pair(m.first,"C+");
                if(m.second=="D+")  m=make_pair(m.first,"C" );
                if(m.second=="D" )  m=make_pair(m.first,"D+");
                if(m.second=="F" )  m=make_pair(m.first,"D" );
            }
        }
    }
    for(auto itr : stu) cout << itr.first << " " << itr.second << endl;
    return 0;
}