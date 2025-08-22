#include "calculator.hpp"

int main() {

    std::cout << "\e[33m" << "Coded By MamaD" << "\e[0m" << '\n';
    std::cout << "\n=======================================\n\n";
    calculator:
    // Exit:
    std::cout << "Enter 1 to Calculator (Enter 0 to exit): ";
    int exit;
    std::cin >> exit;
    if (exit == 0)
    {
        std::cout << "\e[31m" << "Good Bye!" << "\e[0m" << '\n';
        system("pause");
        return 0;
    }
    // Welcome:
    std::cout << "\e[32m" << "Welcome for Math: " << "\e[0m" << '\n';
    double x{};
    double y{};
    std::cout << "Number one: ";
    std::cin >> x;
    std::cout << "Number two: ";
    std::cin >> y;
    // Symbol math:
    Symbol:
    std::cout << "Symbol enter: +, -, *, /, ^: ";
    char symbol;
    std::cin >> symbol;
    // Run:
    if (symbol == '+')
    {
        std::cout << "Your Number: " << x << " + " << y << " = " << Addition(x, y) << '\n';
    }
    else if(symbol == '-')
    {
        std::cout << "Your Number: " << x << " - " << y << " = " << Subtraction(x, y) << '\n';
    }
    else if(symbol == '*')
    {
        std::cout << "Your Number: " << x << " x " << y << " = " << Multiplication(x, y) << '\n';
    }
    else if(symbol == '/')
    {
        std::cout << "Your Number: " << x << " / " << y << " = " << Division(x, y) << '\n';
    }
    else if(symbol == '^')
    {
        std::cout << "Your Number: " << x << " ^ " << y << " = " << pows(x, y) << '\n';
    }
    else
    {
        goto Symbol;
    }
    
    goto calculator;


    return 0;
}