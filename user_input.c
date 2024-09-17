#include <stdio.h>

int main() {
    char input[100]; // Массив для хранения ввода

    printf("Введите что-нибудь: ");
    fgets(input, sizeof(input), stdin); // Считываем строку с клавиатуры

    printf("Вы ввели: %s", input); // Выводим введённую строку
    return 0;
}
