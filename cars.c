#include <stdio.h>
#include <string.h>

    struct Car {
    char model[50];
    char brand[50];
    int price;
    int year;
};

int main() {
    int n, i, qimmat = 0;

    printf("Mashinalar soni: ");
    scanf("%d", &n);

    struct Car cars[n];

    for (i = 0; i < n; i++) {
        printf("\n%d-mashina malumoti:\n", i + 1);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Brand: ");
        scanf("%s", cars[i].brand);
        printf("Narx: ");
        scanf("%d", &cars[i].price);
        printf("Yil: ");
        scanf("%d", &cars[i].year);
    }

    for (i = 1; i < n; i++) {
        if (cars[i].price > cars[qimmat].price) {
            qimmat = i;
        }
    }

    printf("\nEng qimmat mashina:\n");
    printf("Model      | Brand      | Price   | Year\n");
    printf("-----------------------------------------\n");
    printf("%-10s | %-10s | %-7d | %d\n",
           cars[qimmat].model,
           cars[qimmat].brand,
           cars[qimmat].price,
           cars[qimmat].year);

    return 0;
}
