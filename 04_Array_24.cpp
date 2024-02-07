#include <bits/stdc++.h>
using namespace std;
int getsize(int arr[],int sortedarr[],int n){
    int c=0;
    /*for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl << "endl in func" << endl;
    for(int i=0;i<n;i++){
        cout << sortedarr[i] << " ";
    }*/
    //int size = sizeof(arr)/sizeof(arr[0]);
    //cout << endl << "size in func : " << n;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==sortedarr[i]){
            c++;
        }
        else{
            break;
        }
    }
    //cout << endl << "C :" << c << " " << n-c; 
    return n-c;
}
/*int sorttower(int arr[], int size){
    int sortedarr[size],temp[size];
    for(int i=0;i<size;i++){
        sortedarr[i]=arr[i];
        temp[i]=arr[i];
    }
    sort(sortedarr,sortedarr+size);
    int rotatepos;
    for(int i=0;i<size;i++){
        if(arr[i]==sortedarr[size-1]){
            rotatepos=i;
            break;
        }
    }
    if(rotatepos!=0){
        for(int i=0;i<=rotatepos;i++){
        arr[i]=temp[rotatepos-i];
        }
    }
    for(int i=0;i<size;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[(size-1)-i];
    }
}*/
int main(){
    int n;
    cin >> n;
    int tower[n],inorder[n];
    for(int i=0;i<n;i++){
        cin >> tower[i];
        inorder[i]=tower[i];
    }
    cin.ignore();
    int size = sizeof(inorder)/sizeof(inorder[0]);
    sort(inorder,inorder+n);
/*
    cout << "size : " << size << endl;
*/
    for(int i=0;i<n;i++){
        cout << tower[i] << " ";
    }
/*    cout << endl;
    for(int i=0;i<n;i++){
        cout << inorder[i] << " ";
    }
    
    cout << endl << getsize(tower,inorder,n);
*/
    while(getsize(tower,inorder,n)!=0){
        int sortedarr[n],temp[n];
        for(int i=0;i<n;i++){
            sortedarr[i]=tower[i];
            temp[i]=tower[i];
            //cout << temp[i] << " ";
        }
        sort(sortedarr,sortedarr+size);
        size = getsize(tower,inorder,n);
        //cout << endl << "size :" << size << endl;
        int rotatepos;
        for(int i=0;i<=size;i++){
            if(tower[i]==sortedarr[size-1]){
                rotatepos=i;
        //        cout << endl << "rotatepos :" << rotatepos << endl;
                break;
            }
        }
        if(rotatepos!=0){
            for(int i=0;i<=rotatepos;i++){
                tower[i]=temp[rotatepos-i];
            //    cout << tower[i] << " ";
            }
            cout << endl;
            for(int i=0;i<n;i++){
                cout << tower[i] << " ";
            }
        }
        //cout << "before size switch : ";
        //cout << endl;
        for(int i=0;i<n;i++){
            temp[i]=tower[i];
        //    cout << temp[i] << " ";
        }
        cout << endl;
        for(int i=0;i<size;i++){
            tower[i]=temp[size-1-i];
        }
        for(int i=0;i<n;i++){
            cout << tower[i] << " ";
        }
         //cout << endl;
    }
    /*for(int i=0;i<size;i++){
        cout << tower[i] << " ";
    }*/
    return 0;
}