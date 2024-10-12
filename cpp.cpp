// Dis sum bullshite
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
   if(choice == 1) {
        system("cls");
         // Set console title
        SetConsoleTitle("Addition Calculator");
        // cout - computer gives info to user, cin - makes user give info to computer. std:: just uses the library but instead of having to do using namespace std; at the start. it only uses it for this line of code.
        std::cout << "Enter First number: \n";
        std::cin >> a;

        // cout - computer gives more info to user, cin - makes user give more info to computer
        std::cout << "Enter Second number: \n";
        std::cin >> b;

        // Makes the Variable sum = the first user input number + second user input number
        sum = a + b;

        // Computer outputs to user the now value of sum which is answer to, first user input + second user input.
        system("cls");
        std::cout << "The answer is:\t" << sum;
   }
   if(choice == 2) {
        system("cls");
        // Set console title
        SetConsoleTitle("Subtraction Calculator");
        std::cout << "Enter first number: \n";
        std::cin >> a;
        std::cout << "Enter second number: \n";
        std::cin >> b;
        answer = a - b;
        system("cls");
        std::cout << "The answer is:\t" << answer;
   }
    if(choice == 3) {
       system("cls");
        // Set console title
        SetConsoleTitle("Multiplication Calculator");
        std::cout << "Enter first number: \n";
        std::cin >> a;
        std::cout << "Enter second number: \n";
        std::cin >> b;
        answer = a * b;
        system("cls");
        std::cout << "The answer is:\t" << answer;
    }
    if(choice == 4) {
       system("cls");
        // Set console title
        SetConsoleTitle("Division Calculator");
        std::cout << "Enter first number: \n";
        std::cin >> a;
        std::cout << "Enter second number: \n";
        std::cin >> b;
        answer = a / b;
        system("cls");
        std::cout << "The answer is:\t" << answer;
    }


    // if the script returns 0 at the end it means everything ran fine but if not then something before this ran wrong that needs to be fixed.
    return 0;
}
