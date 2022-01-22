#ifndef MY_STRING_HEADER_H
#define MY_STRING_HEADER_H

#include <iostream>
#include <cstring>
#include <string>

class my_string {
private:
    char *str;

public:
    my_string() {
        str = new char[70];
    }
    my_string(int size) {
        str = new char[size];
    }
    my_string(char *dst) {
        str = new char[strlen(dst)];
        strcpy(str, dst);
    }

    void enter_string(void) {
        std::cout << "Enter the string: ";
        std::cin.getline(str, 256, '\n');
    }

    void print_string(void) {
        std::cout << str << std::endl;
    }

    ~my_string() {
        delete[] str;
    }
};

#endif //MY_STRING_HEADER_H
