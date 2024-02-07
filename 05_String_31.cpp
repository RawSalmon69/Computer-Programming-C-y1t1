#include <bits/stdc++.h>
using namespace std;
string encode(string input, string fakemsg){
    int neededlen = 4*input.length(),maxloop=fakemsg.length();
    int usablelen=0;
    for(int i=0;i<fakemsg.length();i++){
       if(isalpha(fakemsg[i])){
            usablelen++;
       } 
    }
//    cout << "neededlen : " << neededlen << "maxloop : " << maxloop << endl;
    if(neededlen>usablelen){
        int i=0;
        int usableleninmsg=usablelen;
        while(usableleninmsg!=neededlen){
            fakemsg=fakemsg+fakemsg[i];
            if(isalpha(fakemsg[i])){
                usableleninmsg++;
            }
            i++;
            if(i==maxloop) i=0;
        }
    }
    transform(fakemsg.begin(), fakemsg.end(), fakemsg.begin(), ::tolower);
//    cout << "fakemsglower : "<< fakemsg << endl;
    string ULcode[12]={"UUUU","UUUL","UULU","UULL","ULUU","ULUL","ULLU","ULLL","LUUU","LUUL","LULU","LULL"};
    string ULmsg="";
    for(int i=0;i<input.length();i++){
        /*if(input[i]=='0' || input[i]=='1' ||input[i]=='2' ||input[i]=='3' ||input[i]=='4' ||input[i]=='5' ||input[i]=='6' ||input[i]=='7' ||input[i]=='8' ||input[i]=='9'){
            ULmsg=ULmsg+ULcode[i];            
        }*/
        for(int j=0;j<10;j++){
            if(input[i]==(j+'0')){
                ULmsg=ULmsg+ULcode[j];  
            }
        }
        if(input[i]=='-'){
            ULmsg=ULmsg+ULcode[10];
        }
        if(input[i]==','){
            ULmsg=ULmsg+ULcode[11];
        }
    }
//    cout << "ULmsg :" << ULmsg << endl;
    int j=0;
    for(int i=0;i<ULmsg.length();i++){
        //cout <<"ULmsg : " << ULmsg[i]<< " fakemsg : " <<fakemsg << endl;
        if(ULmsg[i]=='U'){
            while(!(isalpha(fakemsg[j]))){
                j++;
            }
            fakemsg[j]=toupper(fakemsg[j]);
            //cout << "fakemsg : "<< fakemsg << endl;
            j++;
            //cout << j << endl;
//            cout << "fakemsgnow: " << fakemsg << endl;
        }else{
            while(!(isalpha(fakemsg[j]))){
                j++;
            }
            j++;
        }
    }
    return fakemsg;
}
string decode(string input){
    string decoded="";
    string ULmsg="";
    string ULcode[12]={"UUUU","UUUL","UULU","UULL","ULUU","ULUL","ULLU","ULLL","LUUU","LUUL","LULU","LULL"};
    for(int i=0;i<input.length();i++){
        if(isalpha(input[i])){
            if(islower(input[i])){
                ULmsg=ULmsg+"L";
            }
            else{
                ULmsg=ULmsg+"U";
            }
        }
    }
//    cout << "ULmsg : " << ULmsg << endl;
//    cout << "inputlen : "<<input.length() << endl;
    for(int i=0;i<(ULmsg.length()/4);i++){
        for(int j=0;j<10;j++){
            string x;
            x=(j+'0');
//           cout << "x : " << x << endl;
//            cout << "substr :" << ULmsg.substr(i*4,4) << endl;
            if(ULmsg.substr(i*4,4)==ULcode[j]){
                decoded=decoded+x;
            }
        }
        if(ULmsg.substr(i*4,4)==ULcode[10]){
                decoded=decoded+"-";
        }
        if(ULmsg.substr(i*4,4)==ULcode[11]){
                decoded=decoded+',';
        }
    }
    return decoded;
}
int main(){
    string fakemsg;
    getline(cin,fakemsg);
    string input;
    while(getline(cin,input)){
        if(input[0]=='E'){
            input=input.substr(2);
            cout << encode(input,fakemsg) << endl;
        }
        if(input[0]=='D'){
            input=input.substr(2);
            input.erase(remove_if(input.begin(), input.end(), ::isspace),input.end());
            cout << decode(input) << endl;
        }
    }   
    return 0;
}