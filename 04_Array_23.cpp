#include <bits/stdc++.h>
using namespace std;
int getint(string str){
    int ans;
    //int n=str.size();
    string nochar;
    nochar = str.substr(3);
    ans=stoi(nochar);
    return ans;
}
int getsize(string str){
    stringstream s(str);
    string word;
    int n=0;
    while(s>>word){
        n++;
    }
    return n;
}
int main(){
    int n;
    //string test="TH 300";
    //cout << stoi(test)
    cin >> n;
    cin.ignore();
    int fees[n];
    string details[n],countries[n];
    for(int i=0;i<n;i++){
        string temp;
        getline(cin,details[i]);
        //cin.ignore();
        temp=details[i];
        /*int ans;
        int n=temp.size();
        string nochar;
        nochar = temp.substr(3,6);
        ans=stoi(nochar);
        return ans;*/
        //cout << temp;
        fees[i]=getint(temp);
        //cout << fees[i] << " ";
        //fees[i]=stoi(temp);
    }
    //cin.ignore();
    for(int i=0;i<n;i++){
        countries[i]=details[i].substr(0,2);
        //cout << endl <<countries[i] << endl;
    }
    string route;
    getline(cin,route);
    //cin.ignore();
    int size=getsize(route);
    //cout << route << endl;
    //cout <<size;
    string routearr[size];
    int cost=0;
    routearr[0]=route.substr(4,2);
    //cout << routearr[0];
    for(int i=1;i<size;i++){
        routearr[i]=route.substr(((i*7)+4),2);
        //cout << routearr[i] << " ";
        if(routearr[i]!=routearr[i-1]){
            for(int j=0;j<n;j++){
                if(routearr[i]==countries[j]){
                    cost+=fees[j];
                }
            }
        }
    }
    cout << cost;
    return 0;
}