#include <bits/stdc++.h>
using namespace std;

bool evaluate_expr(vector<char>& expr, int X) {
    // convert the vector of operators to a string
    string expr_str(expr.begin(), expr.end());

    // evaluate the expression
    int result = stoi("1" + expr_str + "1");

    // return whether the result matches X
    return (result == X);
}

bool generate_helper(vector<char>& expr, int i, int N, int X) {
    // base case: if we have reached the end of the string, check if the expression evaluates to X
    if (i == N) {
        return evaluate_expr(expr, X);
    }

    // recursive case: try replacing the i-th operator with * or -
    for (char op : {'*', '+', '-'}) {
        expr[i] = op;
        if (generate_helper(expr, i + 1, N, X)) {
            return true;
        }
    }

    // if we have tried all possible replacements and none worked, reset the i-th operator to +
    expr[i] = '+';
    return false;
}

string generate_expression(int N, int X) {
    // start with a vector of length N consisting only of + operators
    vector<char> expr(N, '+');

    // call the helper function to generate the expression
    if (generate_helper(expr, 0, N, X)) {
        // convert the vector of operators to a string
        string expr_str(expr.begin(), expr.end());
        return expr_str;
    } else {
        return "-1";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N ;
        int X ;
        cin >> N >> X;
        string expr = generate_expression(N, X);
        cout << expr << endl; // output: "+*+-"
    }

    return 0;
}
