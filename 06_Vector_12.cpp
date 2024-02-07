#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    vector<int> step;
    step.push_back(n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
            step.push_back(n);
            count++;
            if(count>=15){
                step.erase(step.begin());
            }
        }else{
            n=3*n+1;
            step.push_back(n);
            count++;
            if(count>=15){
                step.erase(step.begin());
            } 
        }
    }
    for(int i=0;i<step.size();i++){
        cout << step[i];
        if(i!=step.size()-1){
            cout << "->";
        }
    }
    return 0;
}