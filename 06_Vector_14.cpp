#include <bits/stdc++.h>
using namespace std;
int main(){
        string input;
        getline(cin,input);
        vector<int> invec,ansvec;
        istringstream iss(input); string word;
        while(iss >> word){
            invec.push_back(stoi(word));
        }
        sort(invec.begin(),invec.end());
        int temp=INT_MIN,count=0;
        for(auto itr: invec){
            if(temp!=itr){
                ansvec.push_back(itr);
                temp=itr;
                count++;
            }
        }
        cout << count << endl;
        int c=0;
        for(auto itr: ansvec){
            if(c>9){
                return 0;
            }
            cout << itr << " ";
            c++;
        }
    return 0;
}   