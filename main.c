#include <stdio.h>


int get_months_days(int month_number);

int main() {
    for (int i = 1; i < 13; ++i) {
        printf("%2d) %d\n", i, get_months_days(i));
    }
    return 0;
}

int get_months_days(int month_number) {
    // 31 29 31 30 31 30 31
    // 31 30 31 30 31
    return 30 + ((month_number - 1) % 7 % 2 == 0) - (month_number == 2);
}