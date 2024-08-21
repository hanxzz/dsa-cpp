class Solution {
    private:
    bool valid(char c){
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')||(c>='0'&&c<='9')){
            return 1;
        }
        else{
            return 0;
        }
    }
    char toLowercase(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            return ch;
        }
        else{
            char temp= ch - 'A' + 'a';
            return temp;
        }
    }
    bool checkPalindrome(string a){
        int start = 0;
        int e = a.length()-1;
        while(start<=e){
            if(a[start]!=a[e]){
                return 0;
            }
            else{
                start++;
                e--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        //remove useless character
        string temp = "";
        for(int j = 0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        //conver to lower case
        for(int j = 0;j<temp.length();j++){
            temp[j] = toLowercase(temp[j]);
        }
        //check palindrome
        return checkPalindrome(temp);
    }
};