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
cin >> u;
userName = u;
cin >> p;
passWord = p;
cout << "Succesful registration!" << endl;
}

void Login(string a, string b) {
cout << "Please enter your login credentials!" << endl;
cout << "Enter your username - ";
cin >> a;
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
    exit;
}

return 0; }
