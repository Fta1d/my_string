#include "header.h"

int main(void) {
    int size(10);

    my_string str1(&size);
    str1.enter_string();
    str1.print_string();

    my_string str2 = str1;
//    str2.enter_string();
    str2.print_string();



    return 0;
}
