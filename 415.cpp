class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        int len = abs(len1 - len2);
        int i, lea, forw, num;
        string fill = "", res = "";
        for(i = 0;i <= len;i ++)
            fill = fill + "0";
        if(len1 > len2){
            num1 = "0" + num1;
            num2 = fill + num2;
        }else{
            num2 = "0" + num2;
            num1 = fill + num1;
        }
        int tolen = num1.size();
        lea = 0;
        forw = 0;
        for(i = num1.size() - 1;i >= 0;i --){
            num = num1[i] - '0' + num2[i] - '0' + forw;
            lea = num % 10;
            num1[i] = lea + '0';
            forw = num / 10;
        }
        if(num1[0] == '0')
            i = 1;
        else
            i = 0;
        for(;i < num1.size();i ++)
            res = res + num1[i];
        return res;
    }
};