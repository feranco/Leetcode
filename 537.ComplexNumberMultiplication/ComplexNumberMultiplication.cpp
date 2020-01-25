class Solution {
    
    //get real and img part of each number
    vector<int> parseNumber (string const& s) {
        
        size_t plus = s.find('+'), i = s.find('i');
        return {stoi(s.substr(0, plus)), stoi(s.substr(plus+1, i-plus-1))};
    }
    
public:
    string complexNumberMultiply(string a, string b) {
        
        auto num1 = parseNumber(a), num2 = parseNumber(b);
        vector<int> ans{(num1[0]*num2[0]-num1[1]*num2[1]), 
                        (num1[0]*num2[1]+num1[1]*num2[0])};
        return to_string(ans[0]) + "+" + to_string(ans[1]) + "i";
    }
};
