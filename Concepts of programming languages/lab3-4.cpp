#include <iostream>
#include <stack>
#include <string>
#include <cctype>

bool isFunction(const std::string& s) {
    return s == "sin" || s == "cos" || s == "tan" ||
           s == "ctg" || s == "log" || s == "sqrt";
}

int priority(const std::string& op) {
    if (isFunction(op)) return 4;
    if (op == "^") return 3;
    if (op == "*" || op == "/") return 2;
    if (op == "+" || op == "-") return 1;
    return 0;
}


bool isRightAssociative(const std::string& op) {
    return isFunction(op) || op == "^";
}

bool isOperator(const std::string& s) {
    return s == "+" || s == "-" || s == "*" || s == "/" || s == "^";
}

std::string toRPN(const std::string& expr) {
    std::string result;
    std::stack<std::string> ops;
    
    for (int i = 0; i < expr.length(); ++i) {
        char c = expr[i];
        
        if (c == ' ') continue;
        
        if (isdigit(c) || c == '.') {
            std::string number;
            while (i < expr.length() && (isdigit(expr[i]) || expr[i] == '.')) {
                number += expr[i];
                i++;
            }
            result += number + " ";
            i--;
        }
        
        
        else if (isalpha(c)) {
            std::string token;
            while (i < expr.length() && isalpha(expr[i])) {
                token += expr[i];
                i++;
                
                if (isFunction(token)) {
                    break;
                }
            }
            i--;
            
            if (isFunction(token)) {
                ops.push(token);
            } else {
                result += token + " ";
            }
        }
        
        else if (c == '(') {
            ops.push("(");
        }
        
        else if (c == ')') {
            while (!ops.empty() && ops.top() != "(") {
                result += ops.top() + " ";
                ops.pop();
            }
            if (!ops.empty()) ops.pop();
            
            if (!ops.empty() && isFunction(ops.top())) {
                result += ops.top() + " ";
                ops.pop();
            }
        }
        
        else {
            std::string op(1, c);
            
            if (isOperator(op)) {
                if (i + 1 < expr.length() && expr[i+1] == c) {
                    i++;
                }

                while (!ops.empty() && ops.top() != "(") {
                    int p1 = priority(ops.top());
                    int p2 = priority(op);
                    bool shouldPop = isRightAssociative(op) ? (p1 > p2) : (p1 >= p2);
                    
                    if (shouldPop) {
                        result += ops.top() + " ";
                        ops.pop();
                    } else {
                        break;
                    }
                }
                ops.push(op);
            }
        }
    }
    
    while (!ops.empty()) {
        result += ops.top() + " ";
        ops.pop();
    }
    
    return result;
}

int main() {
    std::string input;
    
    std::cout << "Введите выражение: ";
    std::getline(std::cin, input);
    
    std::string rpn = toRPN(input);
    std::cout << "RPN: " << rpn << std::endl;
    
    return 0;
}
