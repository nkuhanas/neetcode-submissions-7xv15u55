class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        // its always valid, so we're just running evaluation

        vector<int> operands;
        unordered_set<string> ops = {"+", "-", "*", "/"};

        for (const string& s : tokens) {

            if (ops.find(s) != ops.end()) {

                int r = operands.back(); operands.pop_back();
                int l = operands.back(); operands.pop_back();
                int result;

                if (s == "+") {
                    result = l + r;
                } else if (s == "-") {
                    result = l - r;
                } else if (s == "*") {
                    result = l * r;
                } else if (s == "/") {
                    result = l / r;
                }

                operands.push_back(result);


            } else {
                operands.push_back(stoi(s));
            }

        } 

        return operands[0];

    }
};
