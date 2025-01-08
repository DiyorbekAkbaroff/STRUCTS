#include <stdio.h>

typedef struct {
    char first_name[50];
    char last_name[50];
} Student;

typedef struct {
    char name[50];
} Subject;

typedef struct {
    Student student;
    Subject subject;
    float score;
} Baxo;

int main() {
    int most = 100;
    Baxo kiritilish[100];
    int n;
    float total_score = 0;
    float average_score;

    printf("Nechta talaba ma'lumotini kiritmoqchisiz? ");
    scanf("%d", &n);

    if (n > most) {
        printf("Maksimal talabalar soni %d\n", most);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\n%d-talaba malumoti:\n", i + 1);
        printf("Ismi: ");
        scanf("%s", kiritilish[i].student.first_name);
        printf("Familiyasi: ");
        scanf("%s", kiritilish[i].student.last_name);
        printf("Fan nomi: ");
        scanf("%s", kiritilish[i].subject.name);
        printf("Bahosi: ");
        scanf("%f", &kiritilish[i].score);

        total_score += kiritilish[i].score;
    }

    average_score = total_score / n;

    printf("\nOrtacha baho: %.2f\n", average_score);
    printf("\nOrtacha bahodan yuqori ball to'plagan talabalar:\n");
    printf("First Name | Last Name | Subject Name | Score\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        if (kiritilish[i].score > average_score) {
            printf("%-10s | %-9s | %-12s | %.2f\n",
                   kiritilish[i].student.first_name,
                   kiritilish[i].student.last_name,
                   kiritilish[i].subject.name,
                   kiritilish[i].score);
        }
    }

    return 0;
}
