#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,string>> saleslist;
    vector<pair<float,string>> prices;
    string input1="";
    float input2;
    while(input1!="END"){
        cin >> input1;
        if(input1=="END"){
            break;
        }
        saleslist.push_back(make_pair(0,input1));
        cin >> input2; 
        prices.push_back(make_pair(input2,input1));
    }
    string sales;
    cin.ignore();
    //cout << " enter sales : ";
    getline(cin,sales);
    istringstream iss(sales);
    string word;
    while(iss >> word){
        //cout << "word : " << word;
        for(auto &y : saleslist){
            //cout << " y.second : " << y.second << endl;
            if(word==y.second){
                //cout << "matched"<< endl;
                //y=make_pair(2,y.second);
                y.first--;
            }
        }
    }
    sort(saleslist.begin(),saleslist.end());

    for(auto k : saleslist){
        for(auto &m : prices){
            if(m.second==k.second){
                m.first= (m.first*k.first);
            }
        }   
    }
    sort(prices.begin(),prices.end());
//    for(auto z : saleslist) cout << z.first << " " << z.second << endl;
    int count=0;
    /*for(int i=0;i<3;i++){
        if(saleslist[i].first!=0){
            cout << saleslist[i].second << " ";
            for(auto m : prices){
                if(m.second==saleslist[i].second){
                    cout << (-1)*m.first*saleslist[i].first << endl;
                }
            }
            count++;
        }
    }*/
    for(int i=0;i<3;i++){
        if(prices[i].first!=0){
            cout << prices[i].second << " " << (-1)*prices[i].first << endl;
            count++;
        }
    }
    if(count==0) cout << "No Sales";
    return 0;
}