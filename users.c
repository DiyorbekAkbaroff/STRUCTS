#include <stdio.h>

typedef struct User {
    char first_name[32];
    char last_name[32];
    int birth_year;
    char location[64];
    char phone[13];
} User;

int main() {

    User user01 = {"Ali", "Valiyev", 2003, "Samarqand", "+998991231212"};
    User user02 = {"Vali", "Aliyev", 2006, "Toshkent", "+998991234545"};
    User user03 = {"John", "Doe", 1998, "Buxoro", "+998991239090"};

    puts("Foydalanuvchilar Jadvali");
    puts("First Name | Last Name | Birth Year | Location  | Phone");
    puts("------------------------------------------------------");

    printf("%-10s | %-9s | %-10d | %-9s | %-5s\n", user01.first_name, user01.last_name, user01.birth_year, user01.location, user01.phone);
    printf("%-10s | %-9s | %-10d | %-9s | %-5s\n", user02.first_name, user02.last_name, user02.birth_year, user02.location, user02.phone);
    printf("%-10s | %-9s | %-10d | %-9s | %-5s\n", user03.first_name, user03.last_name, user03.birth_year, user03.location, user03.phone);

    return 0;
}
