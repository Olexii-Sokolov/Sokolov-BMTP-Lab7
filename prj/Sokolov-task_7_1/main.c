#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>

void printAbout() {
    int width = 45;
    int i;
    SetConsoleOutputCP(866);
    printf("%c", 201);
    for (i = 0; i < width; i++) printf("%c", 205);
    printf("%c\n", 187);
    printf("%c", 186);
    SetConsoleOutputCP(CP_UTF8);
    printf(" Анотація: Пошук слова \"програма\" у тексті   ");
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
    char sentence[256];
    printf("Введіть речення (закінчується на '.', '!' або '?'):\n");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;
    int len = strlen(sentence);
    if (len == 0 || (sentence[len - 1] != '.' && sentence[len - 1] != '!' && sentence[len - 1] != '?')) {
        printf("Помилка: Речення повинно закінчуватись на '.', '!' або '?'.\n");
        printf("\nНатисніть Enter для завершення...");
        getchar();
        return 1;
    }
    if (strstr(sentence, "програма") || strstr(sentence, "Програма") || strstr(sentence, "ПРОГРАМА")) {
         printf("\nРезультат: Слово 'програма' знайдено!\n");
    } else {
         printf("\nРезультат: Слово 'програма' не знайдено.\n");
    }
    printf("\nНатисніть Enter для завершення...");
    getchar();
    return 0;
}
