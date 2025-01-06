#include <stdio.h>
#include <string.h>

typedef struct {
    char name[64];
    char category[32];
    float price;
    int quantity;
} Sut;

void Category(Sut mahsulotlar[], int length, char category[]){
    printf("Sut mahsulotlari:\n") ;
    printf("Name            | Category  | Price | Quantity\n") ;
    printf("---------------------------------------------------\n");
    for(int i = 0; i < length; i++){
        if(strcmp(mahsulotlar[i].category, category) == 0){
            printf("%-15s | %-9s | %5.1f | %d\n", 
            mahsulotlar[i].name,
            mahsulotlar[i].category,
            mahsulotlar[i].price,
            mahsulotlar[i].quantity);
        }
    }
}

int main(){
    Sut mahsulotlar[5] = {
        {"Milk", "Dairy", 2.5, 20},
        {"Cheese", "Dairy", 5.0, 10},
        {"Yogurt", "Fruit", 1.5, 50},
        {"Bread", "Bakery", 1.2, 100},
        {"Butter", "Dairy", 3.0, 15},
    };

    Category(mahsulotlar, 5, "Dairy");
}