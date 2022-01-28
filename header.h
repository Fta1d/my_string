#ifndef MY_STRING_HEADER_H
#define MY_STRING_HEADER_H

#include <iostream>
#include <cstring>
#include <string>

class my_string {
private:
    char *str;
    int str_size = 70;

public:
    my_string(const my_string &obj) {
        str = new char[obj.str_size];
        *str = *(obj.str);
    }

    my_string() {
        str = new char[70];
    }
    my_string(int *size) {
        str = new char[str_size = *size];
    }
    my_string(char *dst) {
        str = new char[strlen(dst)];
        strcpy(str, dst);
    }

    void enter_string(void) {
        std::cout << str_size << std::endl;
        std::cout << "Enter the string: ";
        std::cin.getline(str, str_size, '\n');
    }

    void print_string(void) {
        std::cout << str << std::endl;
    }

    my_string &operator=(const my_string &obj) {
        if (str == nullptr)
            str = new char[obj.str_size];

        *str = *(obj.str);

        return *this;
    }

    ~my_string() {
        delete[] str;
    }
};

#endif //MY_STRING_HEADER_H
