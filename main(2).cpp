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
    return 0.0;
}

// Main

int main() {
    vector<string> lines = {
        "3 4 +", "3 4 2 * +",
        "3 4 + 2 *", "3 + 4", "3 + 4 * 2", "(3+4) * 2"
    };

    for (int i = 0; i < lines.size(); i++) {
        if (isValidPostfix(tokenize(lines[i]))) {
            cout << "POSTFIX" << lines[i] << endl;
        }
        else {
            cout << "INFIX" << lines[i] << endl;
        }
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
