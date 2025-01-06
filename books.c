#include <stdio.h>
#include <string.h>

struct Author {
    char name[50];
    int birth_year;
};

struct Book {
    char title[50];
    float price;
    int published_year;
    struct Author author;
};

int main() {
    int n, i;

    printf("Kitoblar soni: ");
    scanf("%d", &n);

    struct Book books[n];

    for (i = 0; i < n; i++) {
        printf("\n%d-kitob malumoti:\n", i + 1);
        printf("Title: ");
        scanf(" %s\n", books[i].title);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Published Year: ");
        scanf("%d", &books[i].published_year);
        printf("Author Name: ");
        scanf(" %[^\n]", books[i].author.name);
        printf("Author Birth Year: ");
        scanf("%d", &books[i].author.birth_year);
    }

    printf("\n1980-yildan keyin tug'ilgan mualliflarning kitoblari:\n");
    printf("Title       | Price  | Published Year | Author Name     | Author Birth Year\n");
    printf("---------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        if (books[i].author.birth_year > 1980) {
            printf("%-11s | %-6.2f | %-14d | %-15s | %-17d\n",
                   books[i].title,
                   books[i].price,
                   books[i].published_year,
                   books[i].author.name,
                   books[i].author.birth_year);
        }
    }

    return 0;
}