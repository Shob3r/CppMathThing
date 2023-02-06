//C++ libs that are in the standard library/are preinstalled
#include <iostream>
#include <math.h>
#include <cmath>
#include <io.h>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>
#include <ctime>

#pragma warning(push)
#pragma warning(disable: 4996)

//C++ libraries that are not in the standard library/preinstalled, and will need to be installed on other systems before compiling

using namespace std;
int main() {
    //Get the username of the person running the program
    const char* userName = getenv("USER");

    //Obligatory Variable space
    double CalculatorNum1;
    double CalculatorNum2;
    int menuChoice; //If someone writes a massive buffer of numbers for fun i swear
    string currentTime;
    //random number area lol
    srand(time(NULL)); //makes it so that the program generates a different random number each time somone launches the program
    int randNumber = 1 + (rand() % 999);
    //tell the program what the system time is
    time_t now = time(0);
    tm* localTime = localtime(&now);
    #pragma warning(pop)
    int hour = localTime->tm_hour;

    //Main program
    cout << "Welcome to the remake of my first ever C++ project (This is actually the 3rd remake but pretend it's the first)" << std::endl;
    Sleep(0.5);
    cout << "This project uses arrays, different variable types, and some stuff from the C++ standard library" << std::endl;
    Sleep(0.5);
    cout << "time to show off my incredible c++ skills \n \n";
    Sleep(1.5);

mainMenu:
    cout << "what part of the program do you want to use?" << std::endl;
    //choice menu
    cout << "1. Basic Calculator app thing I made" << std::endl;
    cout << "2. Square rooting + cubing a random number created by the program" << std::endl;
    cout << "3. Exit the program" << std::endl;
    cout << "\x1b[92menter your choice below: \x1b[0m" << std::endl;
    cin >> menuChoice;

    if (menuChoice == 1) {
        Sleep(.5);
        system("clear");
        cout << "Enter the first number (You can use decimal places)" << std::endl;
        cin >> CalculatorNum1;
        cout << "Enter the second number" << std::endl;
        cin >> CalculatorNum2;

        cout << "Let's see what number we if we use these numbers in basic math operations" << std::endl; //A large portion of my code is std::endl fr

        cout << "Adding these numbers results in: " << CalculatorNum1 + CalculatorNum2 << std::endl;
        if (CalculatorNum1 > CalculatorNum2) {
            cout << "Subtracing the smaller number from the larger one is: " << CalculatorNum1 - CalculatorNum2 << std::endl;
        }
        else {
            cout << "Subtracing the smaller number from the larger one is: " << CalculatorNum2 - CalculatorNum1 << std::endl;
        }
        cout << "Multiplying gets you: " << CalculatorNum1 * CalculatorNum2 << std::endl;
        if (CalculatorNum1 > CalculatorNum2) {
            if (CalculatorNum1, CalculatorNum2 == 0) {
                cout << "you can't divide by 0 so I aint dividing" << std::endl;
                goto mainMenu;
            }
            else {
                cout << "If you divide the larger number using the smaller number, you get: " << CalculatorNum1 / CalculatorNum2 << std::endl;
                goto mainMenu;
            }
        }
        else {
            if (CalculatorNum1, CalculatorNum2 == 0) {
                cout << "No dividing by 0 allowed!" << std::endl;
                goto mainMenu;
            }
            else {
                cout << "If you divide the larger number using the smaller number, you get: " << CalculatorNum2 / CalculatorNum1 << std::endl;
                goto mainMenu;
            }
        }

        goto mainMenu;
    }
    else if (menuChoice == 2) {
        cout << "Random math time" << std::endl;
        Sleep(1);
        system("clear");
        cout << "This part of the code uses the C++ Libraries known as cmath and unistd.h, \n which can do advanced math and generate random numbers, respectively." << std::endl;
        Sleep(.25);
        cout << "Let's generate a random number." << std::endl;
        Sleep(.25);
        cout << "today's random number is: " << randNumber << std::endl;
        Sleep(.25);

        //actual part where the program does math (crazy)
        cout << "First, lets cube the number, which would result in: \n " << pow(randNumber, 3) << std::endl;
        cout << "probably a really high number unless you got something like 1 or something" << std::endl;
        cout << "next, let's square root the number. the number that you get is:" << sqrt(randNumber) << std::endl;
        cout << "I can do more things with random numbers and math, but thats too much to show in this app. So this is the end of this section of the application. You will shortly be sent back to the main menu choice thing" << std::endl;
        goto mainMenu;
    }
    else if (menuChoice == 3) {
        if (hour >= 6 && hour < 18) {
            cout << "Understandable, have a great day, " << userName;
            exit(0);
        }
        else {
            cout << "Understandable, have a great night, " << userName << "\n";
        }

    }
    else if (menuChoice != 1, 2, 3) {
        system("clear");
        cout << "Choose from 1-3" << std::endl;
        goto mainMenu;
    }

}