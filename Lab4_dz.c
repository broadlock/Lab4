#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int wA, wB, wC;

    // Ввод весов грузов
    printf("Программа проверки разрешения на погрузку\n");
    printf("Введите вес груза A (кг): ");
    scanf("%d", &wA);

    printf("Введите вес груза B (кг): ");
    scanf("%d", &wB);

    printf("Введите вес груза C (кг): ");
    scanf("%d", &wC);

    printf("\nРезультат проверки:\n");

    if (wA % 5 == 0 && wB % 5 == 0 && wC % 5 == 0) {
        printf("Погрузка: ДА \n");
        printf("Груз A: %d кг (кратно 5)\n", wA);
        printf("Груз B: %d кг (кратно 5)\n", wB);
        printf("Груз C: %d кг (кратно 5)\n", wC);
    }
    else {
        printf("Погрузка: НЕТ \n");
        printf("\nПричина отказа:\n");

        if (wA % 5 != 0) {
            printf("- Груз A: %d кг (не кратно 5)\n", wA);
        }
        if (wB % 5 != 0) {
            printf("- Груз B: %d кг (не кратно 5)\n", wB);
        }
        if (wC % 5 != 0) {
            printf("- Груз C: %d кг (не кратно 5)\n", wC);
        }

        printf("\nТребование: вес каждого груза должен быть кратен 5 кг\n");
    }

    return 0;
}