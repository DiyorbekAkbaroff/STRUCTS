#include <stdio.h>

typedef struct User {
    char first_name[32];
    char last_name[32];
    int birth_year;
    char location[64];
    char phone[13];
} User;

int main() {

    User users[15] = {
        {"Ali", "Valiyev", 2003, "Samarqand", "+998991231212"},
        {"Vali", "Aliyev", 2006, "Toshkent", "+998991234545"},
        {"Ali", "Valiyev", 2003, "Samarqand", "+998991231212"},
        {"Vali", "Aliyev", 2006, "Toshkent", "+998991234545"},
        {"Ali", "Valiyev", 2003, "Samarqand", "+998991231212"},
        {"Vali", "Aliyev", 2006, "Toshkent", "+998991234545"},
        {"Ali", "Valiyev", 2003, "Samarqand", "+998991231212"},
        {"Vali", "Aliyev", 2006, "Toshkent", "+998991234545"},
        {"Ali", "Valiyev", 2003, "Samarqand", "+998991231212"},
        {"Vali", "Aliyev", 2006, "Toshkent", "+998991234545"},
        {"Ali", "Valiyev", 2003, "Samarqand", "+998991231212"},
        {"Vali", "Aliyev", 2006, "Toshkent", "+998991234545"},
        {"Ali", "Valiyev", 2003, "Samarqand", "+998991231212"},
        {"Vali", "Aliyev", 2006, "Toshkent", "+998991234545"},
        {"John", "Doe", 1998, "Buxoro", "+998991239090"}
    };

    puts("Foydalanuvchilar Jadvali");
    puts("First Name | Last Name | Birth Year | Location  | Phone");
    puts("------------------------------------------------------");

    for (int i = 0; i < 15; i++) {
        User user = users[i];
        printf("%-10s | %-9s | %-10d | %-9s | %-5s\n", user.first_name, user.last_name, user.birth_year, user.location, user.phone);
    }

    return 0;
}
