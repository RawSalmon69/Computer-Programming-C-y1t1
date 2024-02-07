#include <bits/stdc++.h>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    istringstream iss(input);
    string word;

    vector<int> startindex, stopindex, value;
    int starttemp,stoptemp,checkvalue=INT_MIN,dupe=0,maxdupe=0;

    vector<int> vec;
    while(iss >> word){
        vec.push_back(stoi(word));
    }

    for(int i=0;i<vec.size();i++){
        int num=vec[i];
        if(num!=checkvalue){
            if(dupe>maxdupe){
                maxdupe=dupe;
                startindex.clear();
                stopindex.clear();
                value.clear();
                startindex.push_back(starttemp);
                stopindex.push_back(stoptemp+1);
                value.push_back(checkvalue);
            }
            if(dupe==maxdupe){
                startindex.push_back(starttemp);
                stopindex.push_back(stoptemp+1);
                value.push_back(checkvalue);
            }
            starttemp=i;
            dupe=1;
            checkvalue=num;
        }
        if(num==checkvalue){
            stoptemp=i;
            dupe++;
            checkvalue=num;
        }
    }
    vector<string> output;
    stringstream ss;
    string ansseg;
    for(int i=0;i<value.size();i++){
        ss << value[i] << " --> x[ " << startindex[i] <<  " : " << stopindex[i] << " ]";
        ansseg=ss.str();
        ss.str("");
        ss.clear();
        output.push_back(ansseg);
    }
    sort(output.begin(),output.end());
    for(auto itr: output){
        cout << itr << endl;
    }    
    return 0;
}