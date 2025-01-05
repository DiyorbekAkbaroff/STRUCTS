#include <stdio.h>

typedef struct Phone {
    char name[32];
    char brand[32];
    int price;
    char ram[64];
    char color[13];
} Phone;

int main() {

    Phone Phones[19] = {
        {"Galaxy S20", "samsung", 800, "8GB", "Black"},
        {"Iphone 12", "Apple", 300, "8GB", "White"},
        {"Iphone 16", "Apple", 999, "8GB", "Black"},
        {"Techno Hot", "Android", 100, "8GB", "Black"},
        {"Galaxy S20", "samsung", 300, "8GB", "Black"},
        {"Galaxy S20", "samsung", 250, "8GB", "Black"},
        {"Galaxy S20", "samsung", 500, "8GB", "Black"},
        {"Galaxy S20", "samsung", 900, "8GB", "Black"},
        {"Galaxy S20", "samsung", 1234, "8GB", "Black"},
        {"Galaxy S20", "samsung", 324, "8GB", "Black"},
        {"Galaxy S20", "samsung", 353, "8GB", "Black"},
        {"Galaxy S20", "samsung", 463, "8GB", "Black"},
        {"Galaxy S20", "samsung", 383, "8GB", "Black"},
        {"Galaxy S20", "samsung", 780, "8GB", "Black"},
        {"Galaxy S20", "samsung", 670, "8GB", "Black"},
        {"Galaxy S20", "samsung", 120, "8GB", "grey"},
        {"Galaxy S20", "samsung", 450, "8GB", "white"},
        {"Galaxy S20", "samsung", 380, "8GB", "Pinc"},
        {"Galaxy S20", "samsung", 120, "8GB", "White"},
    };

    puts("Narxi $500 dan yuqori telefonlar:");
    puts("Name         | Brand    | Price | RAM | Color");
    puts("------------------------------------------------------");

    for (int i = 0; i < 19; i++) {
        Phone Phone = Phones[i];
        if (Phone.price >= 500) {
            printf("%-10s | %-9s | %-10d | %-9s | %-5s\n", Phone.name, Phone.brand, Phone.price, Phone.ram, Phone.color);
        }
    }

    return 0;
}