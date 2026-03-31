#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cctype>
#include <sstream>

#include "ArrayStack.h"

using namespace std;

// Token

struct Token {
    string value;   // number, operator, or parenthesis
};

// Tokenizer

vector<Token> tokenize(const string& line) {
    vector<Token> tokens;
    // TODO
    stringstream ss(line); //Inserts input into stringstream and converts numbers into characters inside the stream
    string buffer;

    while (ss >> buffer) {
        Token t;
        t.value = buffer;
        tokens.push_back(t);
    }
    return tokens;
}

// Helpers

bool isOperator(const string& s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}

int precedence(const string& op) {
    // TODO
    if (op == "*" || op == "/") {
        return 2;
    }

    if (op == "+" || op == "-") {
        return 1;
    }

    return 0;
}

// Detection

bool isValidPostfix(const vector<Token>& tokens) {
    // TODO
    if (tokens.size() == 0) {
        return false;
    }
    int count = 0;

    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i].value == "(" || tokens[i].value == ")") {
            return false;
        }
        if (isOperator(tokens[i].value) == false) {
            count++;
        }
        if (isOperator(tokens[i].value)) {
            if (count < 2) {
                return false;
            }
            count--;
            count--;
            count++;
        }
    }

    return count == 1;
}


bool isValidInfix(const vector<Token>& tokens) {
    // TODO
    int parenCount = 0;

    if (tokens.size() == 0) {
        return false;
    }

    if (isOperator(tokens[0].value) || tokens[0].value == ")") {
        return false;
    }

    if (isOperator(tokens[tokens.size() - 1].value) || tokens[tokens.size() - 1].value == "(") {
        return false;
    }

    for (int i = 0; i < tokens.size() - 1; i++) {
        string curr = tokens[i].value;
        string next = tokens[i + 1].value;

        if (curr == "(") {
            parenCount++;
        }

        if (curr == ")") {
            parenCount--;
        }

        if (curr == "(" && next == ")") {
            return false;
        }

        if (curr == "(" || isOperator(curr)) {
            if (isOperator(next) || next == ")" ) {
                return false;
            }
        } else {
            if (!isOperator(next) && next != ")") {
                return false;
            }
        }
    }
    if (tokens.back().value == "(") {
        parenCount++;
    }

    if (tokens.back().value == ")") {
        parenCount--;
    }
    if (parenCount == 0) {
        return true;
    }

    return false;
}

// Conversion

vector<Token> infixToPostfix(const vector<Token>& tokens) {
    vector<Token> output;
    // TODO
    return output;
}

// Evaluation

double evalPostfix(const vector<Token>& tokens) {
    ArrayStack<double> stack;
    // TODO
    double a = 0.0;
    double b = 0.0;

    for (int i = 0; i < tokens.size(); i++) {
        if (isOperator(tokens[i].value)) {
             a = stack.top();
            stack.pop();
             b = stack.top();
            stack.pop();
            if (tokens[i].value == "+") {
                stack.push(a + b);
            } else if (tokens[i].value == "-") {
                stack.push(a - b);
            } else if (tokens[i].value == "*") {
                stack.push(a * b);
            } else if (tokens[i].value == "/") {
                stack.push(a / b);
            }
        } else {
            stack.push(stod(tokens[i].value));
        }
    }
    return stack.top();
}

// Main

int main() {
    vector<string> tests = {"3 + 4",
    "3 + 4 * 2",
    "( 3 + 4 ) * 2",
    "3 4 +",
    "3 + * 4",
    "( 3 + 4",
    "3 + 4 )",
    "( )",
    "3",
    };

    for (int i = 0; i < tests.size(); i++) {
        vector<Token> tokens = tokenize(tests[i]);
        cout << "Input: " << tests[i] << endl;
        cout << "isValidInfix: " << (isValidInfix(tokens) ? "true" : "false") << endl;
    }

    return 0;
    //
    // string line;
    // getline(cin, line);
    //
    // vector<Token> tokens = tokenize(line);
    //
    // if (isValidPostfix(tokens)) {
    //     cout << "FORMAT: POSTFIX\n";
    //     cout << "RESULT: " << evalPostfix(tokens) << "\n";
    // }
    // else if (isValidInfix(tokens)) {
    //     vector<Token> postfix = infixToPostfix(tokens);
    //     cout << "FORMAT: INFIX\n";
    //     cout << "POSTFIX: ";
    //     for (const auto& t : postfix) {
    //         cout << t.value << " ";
    //     }
    //     cout << "\n";
    //     cout << "RESULT: " << evalPostfix(postfix) << "\n";
    // }
    // else {
    //     cout << "FORMAT: NEITHER\n";
    //     cout << "ERROR: invalid expression\n";
    // }
    //
    // return 0;
}
