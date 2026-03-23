#include <iostream>
#include <fstream>
#include <string>
#include <functional>  // std::hash for password hashing
#include "../include/signUp.h"
#include "../include/firstMenu.h"
#include "../include/logIn.h"
#include "../include/menu.h"

using namespace std;
using std::hash;

#include <limits>

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

// External variable (defined elsewhere) holding the users file name
extern const string USERS_FILE;

void loginUser() {
    string username, password;

    cout << LAVANDER << R"(+------------------------------+
|           LOG IN              |
+------------------------------+)" << "\n\n";
    cout << SKYBLUE << "Enter username: " << RESET;
    cin >> username;
    cout << SKYBLUE << "Enter password: " << RESET;
    cin >> password;

    size_t hashedInput = hashPassword(password);

    // Open users file for reading
    ifstream file(USERS_FILE);
    if (!file.is_open()) {
        cout << LAVANDER << "Error: Could not open users file for writing.\n\n";
        return;
    }

    string storedUser;
    size_t storedHash;
    bool found = false;

    // Read file line by line (username + hashed password) 
    while (file >> storedUser >> storedHash) {
        if (storedUser == username && storedHash == hashedInput) {
            found = true;
            currentUser = username;
            break;
        }
    }

    file.close();

    if (found) {
        cout << LAVANDER << "\nLogin successful\n\n" << RESET;
        cout << "Press Enter to continue...";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        clearScreen();
        mainMenu();
    }
    else {
        cout << LAVANDER << "\nLogin failed. \n\n" << RESET;
        cout << "Press Enter to return...";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
        cin.get();
    }
}