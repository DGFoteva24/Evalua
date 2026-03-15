#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <functional>
using std::string;

bool validPassword(const string& password);
size_t hashPassword(const string& password);
bool usernameExists(const string& username);
void registerUser();
extern const string USERS_FILE;
