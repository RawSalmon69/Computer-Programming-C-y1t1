#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    while(cin >> a){
        if(a.empty()){
            return 0;
        }
        cin >> b;

        int x = stoi(a);
        int y = stoi(b);
        //cout << "a:" << a << " b:" << b;
        if(x>10) x = x%10;
        //cout << "x:" << x << endl;
        int arr[20];
        int n=1;
        arr[0]=x;
        //cout << arr[0];
        int m;
        m=pow(5,2);
        //cout << " M : " << m << endl;
        while(arr[0]!=arr[n++]){
            //m=pow(x,n);
            m=pow(x,n);
            //cout <<endl<< "m : " << m << " x: " << x << " n: " << n;
            arr[n]=m%10;
            if(arr[0]==5){
                n=1;
            }
            //cout << endl << "arr:" <<arr[n];
            //n++;
        }
        n=n-2;
        //cout <<"n: " <<n << endl;
        int z=y%n;
        if(y==1){
            cout <<">> "<< arr[0];
        }
        else if (x==0)
        {
            cout <<">> "<< 0;
        }else
            cout <<">> "<< arr[z];
    }
    return 0;
}