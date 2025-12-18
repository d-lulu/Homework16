#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
#define N 10 
#define n 15


int main() {

    system("chcp 1251");

    puts("\n=== Лабораторные работы 11, 14, 16: Работа с массивами ===\n");

    printf("\n\n= Лабараторная работа 11  =");
    task11(); // для всех заданий лаб. 11


    int size;
    printf("\n\n= Лабараторная работа 14 =");
    puts("\nУкажите размер массива: ");
    scanf("%d", &size);

    task14(size); // для всех заданий лаб. 14

    printf("\n\n= Лабараторная работа 16 =");
    puts("\nУкажите размер массива: ");
    scanf("%d", &size);
    task16(size);// для всех заданий лаб. 16

    return 0;
}

int task11() {

    // Задание 1. Заполнение массива с консоли

    float A[N], temp;
    printf("Введите элементы массива:\n");
    for (int i = 0; i < N; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
    }

    // Задание 2. Преобразование массива

    printf("\n| индекс | исходное значение | новое значение |\n\n");

    float B[N];
    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
        if (i % 2 == 0) A[i] = 1;
        printf("| %6d | %17.2f | %14.2f |\n", i, B[i], A[i]);
    }

    // Задание 3. Найти среднее арифметическое значений элементов массива за исключением нулевых элементов

    printf("\nВведите элементы нового массива:\n");
    int A1[n], count = 0;
    float sr, sum = 0;
    temp = 0;

    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%f", &temp);
        A1[i] = temp;
        if (A1[i] != 0) {
            count++;
            sum += A1[i];
        }
    }

    sr = sum / count;
    printf("Среднее значение ненулевых элементов: %f", sr);


}


int task14(int size) {

    double* array = (double*)(malloc(size * sizeof(double)));

    // Задание 1. Заполнение массива

    full_elements(array, size);
    put_elements(array, size);

    // Задание 2. Преобразование массива

    printf("\n\nПреобразованный масив\n");
    calc_elements(array, size);
    put_elements(array, size);

    // Задание 3. Вычисление суммы элементов массива от индекса begin до индекса end включительно:

    int begin, end;
    printf("\n\nВведите начальный индекс для суммирования: ");
    scanf("%d", &begin);
    printf("Введите конечный индекс для суммирования: ");
    scanf("%d", &end);
    printf("Сумма элементов: sum = %lf", sum_elements(array, begin, end));

    // Задание 4. Поиска элемента равного element:

    double element;
    printf("\n\nВведите число для поиска: ");
    scanf("%lf", &element);
    printf("Индекс искомого числа: %d", find_element(array, size, element));

    // Задание 5. Поиск максимального по модулю значения, не равного заданному А

    printf("\n\nВведите число А: ");
    double A;
    scanf("%lf", &A);
    printf("Максимальное по модулю число, не равное А: max = %.3lf", find_max(array, size, A));

    free(array);
}

int task16(int size) {

    double* array1 = (double*)(malloc(size * sizeof(double)));

    // Задание 1. Заполнение массива значениями от -1 до 1

    full_elements_1(array1, size, -1, 1);
    put_elements(array1, size);

    // Задание 2. Удаление всех элементов меньших среднего арифметического

    printf("\n\nМассив с удаленными элементами:\n");
    put_elements(array1, delete_k(array1, size));

    // Задание 3. Вставка -999 перед первым отрицательным элементом

    full_elements_1(array1, size, -1, 1);
    int number = -999;
    int* p_size = &size;
    printf("\n\nМассив с добавленным элементом:\n");
    put_elements(insert(array1, p_size, number), size);

    // Задание 4. Заполнение массива array_d по принципу array_d[i] = min(array_a[i], array_b[i], array_c[i])

    int p, a, b, c, d;
    printf("\n\n\nВведите любое число от 5 до 100: ");
    scanf("%d", &p);

    a = 10 + ((p * 13 + 7) % 41);
    b = 10 + ((p * 6 + 19) % 32);
    c = 10 + ((p * 2 + 36) % 18);
    d = max_size(a, b, c);

    double* array_a = (double*)(malloc(a * sizeof(double)));
    double* array_b = (double*)(malloc(b * sizeof(double)));
    double* array_c = (double*)(malloc(c * sizeof(double)));
    double* array_d = (double*)(malloc(d * sizeof(double)));

    full_elements_1(array_a, a, -100, 100);
    full_elements_1(array_b, b, -50, 50);
    full_elements_1(array_c, c, -10, 200);
    full_elements_d(array_a, a, array_b, b, array_c, c, array_d, d);

    printf("\nМассив а:\n");
    put_elements(array_a, a);
    printf("\n\nМассив b:\n");
    put_elements(array_b, b);
    printf("\n\nМассив c:\n");
    put_elements(array_c, c);
    printf("\n\nМассив d:\n");
    put_elements(array_d, d);

    free(array_a);
    free(array_b);
    free(array_c);
    free(array_d);
}