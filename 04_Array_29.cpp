#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    int work[100],count=0;
//    for(int i=0;i<100;i++){
//        cout << work[i] << " ";
//    }
    int maxoverlaparea=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((j>i) && ((arr[i][0]>arr[j][0] && arr[i][0]<arr[j][2] && arr[i][1]>arr[j][1] && arr[i][1]<arr[j][3]) || (arr[i][2]>arr[j][0] && arr[i][2]<arr[j][2] && arr[i][3]>arr[j][1] && arr[i][3]<arr[j][3]))){
                int x_dist=min(arr[i][2],arr[j][2]) - max(arr[i][0],arr[j][0]);
                int y_dist=min(arr[i][3],arr[j][3]) - max(arr[i][1],arr[j][1]);
                int areainter=0;
                if(x_dist>0 && y_dist>0){
                    areainter=x_dist*y_dist;
//                    cout << "areainter " << areainter << endl;
                    if(areainter>maxoverlaparea){
                        count=0;
                        maxoverlaparea=areainter;
                        work[count]=min(i,j);
//                        cout << "1work" << count << " : " << work[count] << endl;
                        count++;
                        work[count]=max(i,j);
//                        cout << "2work" << count << " : " << work[count] << endl;
                        count++;
                    }
                    else if(areainter=maxoverlaparea){
                        work[count]=min(i,j);
//                        cout << "3work" << count << " : " << work[count] << endl;
                        count++;
                        work[count]=max(i,j);
//                        cout << "4work" << count << " : " << work[count] << endl;
                        count++;
                    }
                }
            }
            if((j>i) && ((arr[i][0]==arr[j][0] && arr[i][1]==arr[j][1] && arr[i][2]==arr[j][2] && arr[i][3]==arr[j][3]))){
                int x_dist=arr[i][2]-arr[i][0];
                int y_dist=arr[i][3]-arr[i][1];
                int areainter=0;
                areainter=x_dist*y_dist;
//                    cout << "areainter " << areainter << endl;
                    if(areainter>maxoverlaparea){
                        count=0;
                        maxoverlaparea=areainter;
                        work[count]=min(i,j);
//                        cout << "1work" << count << " : " << work[count] << endl;
                        count++;
                        work[count]=max(i,j);
//                        cout << "2work" << count << " : " << work[count] << endl;
                        count++;
                    }
                    else if(areainter==maxoverlaparea){
                        work[count]=min(i,j);
//                        cout << "3work" << count << " : " << work[count] << endl;
                        count++;
                        work[count]=max(i,j);
//                        cout << "4work" << count << " : " << work[count] << endl;
                        count++;
                    }
            }
        }
    }
/*            else if(arr[i][2]>arr[j][0] && arr[i][2]<arr[j][2] && arr[i][3]>arr[j][1] && arr[i][3]<arr[j][3]){
                int x_dist=min(arr[i][2],arr[j][2]) - max(arr[i][0],arr[j][0]);
                int y_dist=min(arr[i][3],arr[j][3]) - max(arr[i][1],arr[j][1]);
                int areainter=0;
                if(x_dist>0 && y_dist>0){
                    areainter=x_dist*y_dist;
                    if(areainter>=maxoverlaparea){
                        maxoverlaparea=areainter;
                        work[count]=min(i,j);
                        cout << "3work" << count << " : " << work[count] << endl;
                        count++;
                        work[count]=max(i,j);
                        cout << "4work" << c3ount << " : " << work[count] << endl;
                        count++;
                    }
                }
            }
        }
        //cout << maxoverlaparea;
    }*/
    if(count!=0) cout << "Max overlapping area = " << maxoverlaparea << endl;
    int i=0;
    while(i!=count){
        cout  << "rectangles " << work[i] << " and ";
        i++;
        cout << work[i] << endl;
        i++;
    }
    if(count == 0){
        cout <<"No overlaps";
    }
    return 0;
}