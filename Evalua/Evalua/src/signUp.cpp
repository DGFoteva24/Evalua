#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <functional>
#include "../include/signUp.h"
#include "../include/firstMenu.h"
#include "../include/logIn.h"
#include "../include/menu.h"
#include <filesystem>
#include <limits>

using namespace std;
using std::hash;

#define RESET "\033[0m"
#define LAVANDER "\033[38;5;183m"
#define SKYBLUE "\033[38;5;117m"

string currentUser = "";
const string USERS_FILE = "users.txt";

bool validPassword(const string& password) {
    if (password.length() < 8)
        return false;

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    bool hasSpace = false;

    for (size_t i = 0; i < password.length(); i++) {
        char c = password[i];
        if (isupper(static_cast<unsigned char>(c))) hasUpper = true;
        if (islower(static_cast<unsigned char>(c))) hasLower = true;
        if (isdigit(static_cast<unsigned char>(c))) hasDigit = true;
        if (ispunct(static_cast<unsigned char>(c))) hasSpecial = true;
        if (isspace(static_cast<unsigned char>(c))) hasSpace = true;
    }

    // Password must NOT contain spaces, so ensure hasSpace is false
    return hasUpper && hasLower && hasDigit && hasSpecial && !hasSpace;
}

size_t hashPassword(const string& password) {
    const string SALT = "auth_salt_42";
    hash<string> hasher;
    return hasher(SALT + password);
}

bool usernameExists(const string& username) {
    ifstream file(USERS_FILE);
    if (!file.is_open()) {
        return false;
    }

    string storedUser, storedHash;
    while (file >> storedUser >> storedHash) {
        if (storedUser == username) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

void registerUser() {
    clearScreen();
    string username, password;

    cout << LAVANDER << R"(+------------------------------+
|           SIGN UP            |
+------------------------------+)" << RESET << "\n\n";
    cout << SKYBLUE << "Enter username: " << RESET;
    cin >> username;

    if (usernameExists(username)) {
        cout << LAVANDER << "\nUser already exists\n\n" << RESET;
        cout << "Press Enter to return...";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        return;
    }

    cout << SKYBLUE << "Enter password: " << RESET;
    cin >> password;
    cout << "\n";

    if (!validPassword(password)) {
        cout << LAVANDER << "Password must contain:\n" << RESET;
        cout << "- 8+ characters\n";
        cout << "- uppercase letter\n";
        cout << "- lowercase letter\n";
        cout << "- special character\n";
        cout << "- number\n";
        cout << LAVANDER << "Password must NOT contain spaces\n\n";
        cout << "Press Enter to return...";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        return;
    }
    size_t hashedPassword = hashPassword(password);
    ofstream file(USERS_FILE, ios::app);
    if (!file.is_open()) {
        cout << LAVANDER << "Error: Could not open users file for writing.\n\n" << RESET;
        cout << "Press Enter to return...";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.get();
        return;
    }

    file << username << " " << hashedPassword << "\n";
    file.close();

    currentUser = username;

    cout << LAVANDER << "Registration successful\n\n" << RESET;
    cout << "Press Enter to continue...";
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get();
    clearScreen();
    mainMenu();
}