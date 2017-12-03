class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for(int i = 1; i <= n;i ++){
            string temp;
            temp = to_string(i);
            if(i % 3 == 0)
                temp = "Fizz";
            if(i % 5 == 0)
                temp = "Buzz";
            if(i % 3 == 0 && i % 5 == 0)
                temp = "FizzBuzz";
            res.push_back(temp);
        }
        return res;
    }
};