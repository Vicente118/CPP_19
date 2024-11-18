# include "RPN.hpp"

void calculation(const std::string &expression) {
    std::stack<int> stack;
    for (size_t i = 0; i < expression.length(); ++i) {
        char c = expression[i];

        if (std::isdigit(c)) 
            stack.push(c - '0');
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (stack.size() < 2) {
                std::cerr << "Error: not enough operands for operator" << std::endl;
                return;
            }
            int first, sec, result;

            sec = stack.top();
            stack.pop();
            first = stack.top();
            stack.pop();

            switch (c) 
            {
                case '+' :
                    result = first + sec; break;
                case '-' :
                    result = first - sec; break;
                case '*' :
                    result = first * sec; break;
                case '/' :
                    if (sec == 0) {
                        std::cerr << "Error: division by 0" << std::endl;
                        return;
                    } result = first / sec ; break;
            }
            stack.push(result);
        }
        else if (c != ' ') {
            std::cerr << "Error: invalid character" << std::endl;
            return;
        }
    }
    if (stack.size() != 1) {
        std::cerr << "Error: invalid expression" << std::endl;
        return;
    }
    std::cout << GREEN << "Result: " << stack.top() << RESET << std::endl;
}