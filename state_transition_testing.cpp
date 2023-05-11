#include <iostream>
#include <string>

int main() {
    std::string state = "idle";
    int password_attempts = 0;
    std::string username;

    while (true) {
        if (state == "idle") {
            std::cout << "Selamat datang!" << std::endl;
            std::cout << "Masukkan username: ";
            std::getline(std::cin, username);
            if (!username.empty()) {
                state = "entering username";
            }
        } else if (state == "entering username") {
            username = username;
            state = "entering password";
        } else if (state == "entering password") {
            std::string password;
            std::cout << "Masukkan password: ";
            std::getline(std::cin, password);
            if (password == "1234") {
                state = "logged in";
            } else if (password.empty()) {
                state = "idle";
            } else {
                std::cout << "Password salah!" << std::endl;
                password_attempts++;
                if (password_attempts >= 3) {
                    std::cout << "Akun dikunci" << std::endl;
                    break;
                }
            }
        } else if (state == "logged in") {
            username = username;
            std::cout << "Selamat datang, " << username << "!" << std::endl;
            break;
        }
    }

    return 0;
}
