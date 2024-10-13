#include <iostream>
#include <windows.h>
#include <cstdlib>

int main()
{
    double a; // double instead of int because it gives decimal support
    double b; // double instead of int because it gives decimal support
    double sum; // double instead of int because it gives decimal support
    double answer; // double instead of int because it gives decimal support
    int choice;

    std::cout << "Choose which,:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n";
    std::cin >> choice;

    if (choice == 1) {
        system("cls");
        SetConsoleTitle("Addition Calculator");
        std::cout << "Enter First number: \n";
        std::cin >> a;
        std::cout << "Enter Second number: \n";
        std::cin >> b;
        sum = a + b;
        system("cls");
        std::cout << "The answer is:\t" << sum;
    }
    else if (choice == 2) {
        system("cls");
        SetConsoleTitle("Subtraction Calculator");
        std::cout << "Enter first number: \n";
        std::cin >> a;
        std::cout << "Enter second number: \n";
        std::cin >> b;
        answer = a - b;
        system("cls");
        std::cout << "The answer is:\t" << answer;
    }
    else if (choice == 3) {
        system("cls");
        SetConsoleTitle("Multiplication Calculator");
        std::cout << "Enter first number: \n";
        std::cin >> a;
        std::cout << "Enter second number: \n";
        std::cin >> b;
        answer = a * b;
        system("cls");
        std::cout << "The answer is:\t" << answer;
    }
    else if (choice == 4) {
        system("cls");
        SetConsoleTitle("Division Calculator");
        std::cout << "Enter first number: \n";
        std::cin >> a;
        std::cout << "Enter second number: \n";
        std::cin >> b;
        answer = a / b;
        system("cls");
        std::cout << "The answer is:\t" << answer;
    }
    else {
        system("cls");  
        std::cout << "Invalid input. Please enter a number between 1 and 4.\n";
    }

    return 0;
}