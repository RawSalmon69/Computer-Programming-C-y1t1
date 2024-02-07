#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,now,dest;
    cin >> n;
    int arr[n+1][3];
    for(int i=0;i<n;i++){
        int liftnum;
        cin >> liftnum >> now >> dest;
        arr[liftnum][0]=now;
        arr[liftnum][1]=dest;
    }
    cin >> m;
    int pnow, pdest, pickup=0, dropoff=0, total;
    for(int i=0;i<m;i++){
        cin >> pnow >> pdest;
        for(int j=1;j<=n;j++){
            now=arr[j][0];
            dest=arr[j][1];
            if(pnow>=dest && pnow<=now || pnow<=dest & pnow>=now){
               pickup=0;
                if(pdest>=dest){
                    dropoff=pdest-dest;
                }
                if(dest>=pdest){
                    dropoff=dest-pdest;
                }
                total = pickup+dropoff;
            }else{
                if(dest>=pnow){
                    pickup=dest-pnow;
                }
                if(pnow>=dest){
                    pickup=pnow-dest;
                }
                if(pnow>=pdest){
                    dropoff=pnow-pdest;
                }
                if(pdest>=pnow){
                    dropoff=pdest-pnow;
                }
                total = pickup+dropoff;
            }
            arr[j][2]=total;
//            cout << "lift " << j << " pickup : " << pickup << " dropoff : " << dropoff <<" total : " << total << endl;
        }
        int mintravel=INT_MAX, bestlift;
        for(int j=1;j<=n;j++){
            if(arr[j][2]<mintravel){
                mintravel=arr[j][2];
                bestlift=j;
            }
        }
        cout << ">> " << bestlift << endl;
    }
    return 0;
}