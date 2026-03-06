#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void printAbout() {
    int width = 45;
    int i;
    SetConsoleOutputCP(866);
    printf("%c", 201);
    for (i = 0; i < width; i++) printf("%c", 205);
    printf("%c\n", 187);
    printf("%c", 186);
    SetConsoleOutputCP(CP_UTF8);
    printf(" Анотація: Підрахунок чисел 150, 1000, 10000 ");
    SetConsoleOutputCP(866);
    printf("%c\n", 186);
    printf("%c", 186);
    SetConsoleOutputCP(CP_UTF8);
    printf(" Розробник: Sokolov Olexii                   ");
    SetConsoleOutputCP(866);
    printf("%c\n", 186);
    printf("%c", 186);
    SetConsoleOutputCP(CP_UTF8);
    printf(" Дата: 03.03.2026                            ");
    SetConsoleOutputCP(866);
    printf("%c\n", 186);
    printf("%c", 200);
    for (i = 0; i < width; i++) printf("%c", 205);
    printf("%c\n\n", 188);
    SetConsoleOutputCP(CP_UTF8);
}

int main() {
    SetConsoleCP(CP_UTF8);
    printAbout();
    int numbers[14];
    int count = 0;
    int i;

    printf("Введіть 14 натуральних чисел:\n");

    for (i = 0; i < 14; i++) {
        printf("Число %d: ", i + 1);
        if (scanf("%d", &numbers[i]) != 1 || numbers[i] <= 0) {
            printf("\nПомилка: Введено некоректні дані. Потрібні натуральні числа (>0).\n");
            while(getchar() != '\n');
            printf("\nНатисніть Enter для завершення...");
            getchar();
            return 1;
        }
        if (numbers[i] == 150 || numbers[i] == 1000 || numbers[i] == 10000) {
            count++;
        }
    }
    printf("\nКількість чисел, рівних 150, 1000 або 10000: %d\n", count);
    while(getchar() != '\n');
    printf("\nНатисніть Enter для завершення...");
    getchar();
    return 0;
}
