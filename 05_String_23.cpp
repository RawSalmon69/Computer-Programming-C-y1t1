#include <bits/stdc++.h>
using namespace std;
string findSum(string str1, string str2)
{
    if(str2=="END"){
        return str1;
    }
    // Before proceeding further, make sure length
    // of str2 is larger.
    //cout << "str1 : " << str1 << " str2: " << str2 << endl;
    if (str1.length() > str2.length())
        swap(str1, str2);
 
    // Take an empty string for storing result
    string str = "";
 
    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;
 
    // Initially take carry zero
    int carry = 0;
 
    // Traverse from end of both strings
    for (int i=n1-1; i>=0; i--)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    // Add remaining digits of str2[]
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
 
    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');
 
    // reverse resultant string
    reverse(str.begin(), str.end());
 
    return str;
}
int main(){
    string input;
    cin >> input;
    string n;
    cin >> n;
    int ansbacknum,carry=0;
    string backnum=input.substr(4,3);
    string resultbacknum=findSum(backnum,n);
    int resultintnum=stoi(resultbacknum);
    if(resultintnum>=1000){
        carry=resultintnum/1000;
        ansbacknum=resultintnum%1000;
    }else ansbacknum=resultintnum;
    string firstthree=input.substr(0,3);
    if(carry>0&&carry<10){
        cout << "firstthree[2]+char(carry+'0')<='Z' :" << char(firstthree[2]+char(carry+'0')) << endl;
        if(firstthree[2]+char(carry+'0')<='Z'){
            firstthree[2]=firstthree[2]+char(carry+'0');
            cout  << "firstthree[2]: "<<firstthree[2];
        }
        else{
            int carryb = firstthree[2]+char(carry+'0')-'Z';
            firstthree[2]='Z';
            if(firstthree[1]+char(carryb+'0')<='Z'){
                firstthree[1]=firstthree[1]+char(carryb+'0');
            }
            else{
                int carryc = firstthree[1]+char(carryb+'0')-'Z';
                firstthree[1]='Z';
                firstthree[0]=firstthree[0]+char(carryc+'0');
            }

        }

    }
    cout << firstthree << "-" << setfill('0') << setw(3) <<ansbacknum;
    return 0;
}