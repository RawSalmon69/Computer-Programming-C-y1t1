#include <bits/stdc++.h>
using namespace std;
/*string findSum(string str1,string str2)
{
    /*int strlen=str.length();
    for(int i=0;i<strlen-1;i++){
        if (str[i].length() > str[i+1].length()) swap(str[i], str[i+1]);
	    string ans = "";
	    int n1 = str[i].length(), n2 = str[i+1].length();
	    int diff = n2 - n1;
	    int carry = 0;
    	for (int j=n1-1;j>=0;j--){
    		int sum = ((str[i][j]-'0') + (str[i+1][j+diff]-'0') + carry);
		    ans.push_back(sum%10 + '0');
	    	carry = sum/10;
    	}
        for (int j=n2-n1-1;j>=0;j--){
		    int sum = ((str[i+1][j]-'0')+carry);
		    ans.push_back(sum%10 + '0');
		    carry = sum/10;
	    }
        if (carry) ans.push_back(carry+'0');
	    reverse(ans.begin(), ans.end());
        str[i+1]=ans;
    }
//seperation
	if (str1.length() > str2.length()) swap(str1, str2);
	string ans = "";
	int n1 = str1.length(), n2 = str2.length();
	int diff = n2 - n1;
	int carry = 0;
	for (int i=n1-1; i>=0; i--){
		int sum = ((str1[i]-'0') + (str2[i+diff]-'0') + carry);
		ans.push_back(sum%10 + '0');
		carry = sum/10;
	}
	for (int i=n2-n1-1; i>=0; i--){
		int sum = ((str2[i]-'0')+carry);
		ans.push_back(sum%10 + '0');
		carry = sum/10;
	}
	if (carry) ans.push_back(carry+'0');
	reverse(ans.begin(), ans.end());
	return ans;
}*/
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

int main()
{
    string ans="";
    cin >> ans;
    cin.ignore();
    string str="";
    //cout << "ans : " << ans;
    do{
        cin >> str;
        cin.ignore();
        ans=findSum(ans,str);
    }
    while(str!="END");
    cout << ans;
	return 0;
}
