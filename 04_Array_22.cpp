#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string input[n], ans[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
        ans[i]=input[i];
    }
    cin.ignore();
    string order;
    getline(cin,order);
    for(int i=0;i<order.size();i++){
        if(order[i]=='C'){
            for(int j=0;j<n/2;j++){
                ans[j]=input[j+(n/2)];
                ans[j+(n/2)]=input[j];
            }
        }
        if(order[i]=='S'){
            int offset = (n/2)-1;
            for(int j=0;j<n;j++){
                if(j%2==0){
                    ans[j]=input[j/2];
                }
                else{
                    ans[j]=input[j+offset]; 
                    offset--;
                }
            }
        }
        for(int j=0;j<n;j++){
            input[j]=ans[j];
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    return 0;
}