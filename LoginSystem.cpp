// Arsenije Karamarković, University of Novi Sad
// This is one of the first projects I have ever written by myself using standalone computer language. It is a simple console application which lets you create your own account or log into one. 
// The syntax and formatting are not as near as handsome and beautiful, but I still love to look back couple years behind me, just to see how much progress I have ever since.
// 24.10.2022. Thank you for reading!
#include <bits/stdc++.h>
using namespace std;
string Choice2,userName, passWord, userNameRegister, passWordRegister, usernameLogin, passwordLogin, admin = "arsenije", password = "password";
int Choice, Rnd;
void MainMenu(int x) {
 cout << "Choose what you want to do!" << endl;
 cout << "[1] - Login" << endl;
 cout << "[2] - Register" << endl;
 cout << "[3] - Exit" << endl;
}

void Register(string u, string p) {
cout << "Welcome! Please enter your credentials which you would like to use in future!" << endl;
cout << "Type your username here: " << endl;
cin >> ws;
getline(cin, u);
userName = u;
cout << "Type your password here: " << endl;
cin >> p;
passWord = p;
cout << "Succesful registration!" << endl;
}

void Login(string a, string b) {
cout << "Please enter your login credentials!" << endl;
cout << "Enter your username - ";
cin >> ws;
getline(cin, a);
cout << endl;
cout << "Enter your password - ";
cin >> b; cout << endl;

if (a == userName && b == passWord || a == admin && b == password) {
    cout << "Login succesful!" << endl;
}
else {
        cout << "Invalid username or password!" << endl;
        cout << "Try again? Y - yes, N - no." << endl;
        cin >> Choice2;
if (Choice2 == "Y" || Choice2 == "y") {
    Login(usernameLogin, passwordLogin);
}
else {
    return;
}
}
}

int main() {
MainMenu(Rnd);
cin >> Choice;
if (Choice == 1) {
Login(usernameLogin, passwordLogin);


}

else if (Choice == 2) {
    Register(userNameRegister, passWordRegister);
    MainMenu(Rnd);
    cin >> Choice;
    if (Choice == 1) {
        Login(usernameLogin, passwordLogin);
    }
}

else if (Choice == 3) {
    return EXIT_SUCCESS;
}

return 0; }
