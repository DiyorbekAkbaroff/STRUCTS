#include <stdio.h>
#include <string.h>

typedef struct Card {
    char card_holder_name[64];
    char card_number[20];
    char cvv[4];
    struct {
        int year;
        int month;
    } expiry_date;
} Card;

void expiry(Card cards[], int length) {

    puts("Amal qilayotgan kartalar:");
    puts("Card Holder Name | Card Number         | Expiry Date | CVV");
    puts("---------------------------------------------------------");

    for (int i = 0; i < length; i++) {
        Card card = cards[i];
        if (card.expiry_date.year < 25 && card.expiry_date.month < 01) {
            printf("%-16s | %-19s | %d/%d       | %-3s\n", card.card_holder_name, card.card_number, card.expiry_date.month, card.expiry_date.year, card.cvv);   
        }
    }
}

int main() {

    Card cards[] = {
        {"John Doe", "1234 5678 9012 3456", "123", {25, 12}},
        {"John Doe", "1234 5678 9012 3456", "123", {25, 12}},
        {"John Doe", "1234 5678 9012 3456", "123", {21, 12}},
        {"John Doe", "1234 5678 9012 3456", "123", {25, 12}},
        {"John Doe", "1234 5678 9012 3456", "123", {25, 12}},
        {"John Doe", "1234 5678 9012 3456", "123", {25, 12}},
        {"John Doe", "1234 5678 9012 3456", "123", {25, 12}},
        {"John Doe", "1234 5678 9012 3456", "123", {25, 12}},
        {"John Doe", "1234 5678 9012 3456", "123", {25, 12}},
        {"John Doe", "1234 5678 9012 3456", "123", {25, 12}},
    };

    int length = sizeof(cards) / sizeof(cards[0]);

    expiry(cards, length);

    return 0;
}
