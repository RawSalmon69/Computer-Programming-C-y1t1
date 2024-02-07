#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,check=0;
    vector<int> vec;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        if(check%2==0){
            vec.insert(vec.begin(),m);
        }else{
            vec.push_back(m);
        }
    }
    string input,inputstr;
    getline(cin,input);
    int start=0;
    int count=0;
    for(int i=0;i<input.length();i++){
        if(input[i]==' '){
            inputstr=input.substr(start,count);
            count=0;
            if((check%2==0) && (inputstr.length()>0)){
                vec.insert(vec.begin(),stoi(inputstr));
            }else{
                if(inputstr.length()>0) vec.push_back(stoi(inputstr));
            } 
            check++;
            start=i+1;
        }
        else{
            count++;
        }
    }

    while(n!=-1){
        cin >> n;
        if(check%2==0){
                vec.insert(vec.begin(),n);
            }else{
                if(inputstr.length()>0) vec.push_back(n);
            }
        check++; 
    }
    cout << "[";
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << ", ";
    }
    cout << "]";

    return 0;
}