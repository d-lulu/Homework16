/**
 * arrays.h - Заголовочный файл для работы с массивами
 * Функции для работы с одномерными массивами double
 */

#ifndef ARRAYS_H
#define ARRAYS_H


double func(double x); // функция для получения значений как в работе 8

/**
 * Заполнение массива значениями результатми функции из лаб. 8
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @return указатель на заполненный массив
 */
double* full_elements(double* ptr_array, int n);

/**
 * Печать элементов массива
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @return количество выведенных элементов
 */
int put_elements(double* ptr_array, int n);

/**
 * Обработка элементов массива согласно индивидуальному варианту
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @return указатель на обработанный массив
 */
double* calc_elements(double* ptr_array, int n);

/**
 * Вычисление суммы элементов массива в диапазоне [begin, end]
 * @param ptr_array указатель на массив
 * @param begin начальный индекс (включительно)
 * @param end конечный индекс (включительно)
 * @return сумма элементов
 */
double sum_elements(double* ptr_array, int begin, int end);

/**
 * Поиск элемента в массиве
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @param element искомый элемент
 * @return индекс найденного элемента или -1 если не найден
 */
int find_element(double* ptr_array, int n, double element);

/**
 * Поиск в массиве максимального по модулю элемента, не равного заданному А
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @param а искомый элемент А
 * @return максимальный по модулю элемент, не равный А, или -1 если не найден
 */
double find_max(double* ptr_array, int n, double a);

/**
 * Удаление всех элементов меньших среднего арифметического
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @return число элементов массива без учета удаленных
 */
int delete_k(double* ptr_array, int n);

/**
 * Вставка -999 перед первым отрицательным
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @param num вставляемое значение
 * @return указатель на обработанный массив
 */
double* insert(double* ptr_array, int* n, int num);

/**
 * Заполнение массива случаными вещественными числами из указанного диапазона
 * @param ptr_array указатель на массив
 * @param n размер массива
 * @param a начало дипазона
 * @param b конец диапазона
 * @return указатель на заполненный массив
 */
double* full_elements_1(double* ptr_array, int n, int a, int b);


/**
 * Поиск максимального размера трех массивов
 * @param a размер первого массива 
 * @param b размер второго массива 
 * @param c размер третьего массива 
 * @return максимальный размер
 */
int max_size(int a, int b, int c);

/**
 * Поиск минимального из трех элементов
 * @param a первый элемент 
 * @param b второй элемент 
 * @param c третий элемент 
 * @return минимальный элемент
 */
double find_min(double a, double b, double c);

/**
 * Заполнение массива array_d по принципу array_d[i] = min(array_a[i], array_b[i], array_c[i])
 * @param ptr_array_a указатель на массив array_a
 * @param a размер массива array_a
 * @param ptr_array_b указатель на массив array_b
 * @param b размер массива array_b
 * @param ptr_array_b указатель на массив array_b
 * @param c размер массива array_c
 * @return указатель на массив array_d
 */
double* full_elements_d(double* ptr_array_a, int a, double* ptr_array_b, int b, double* ptr_array_c, int c, double* ptr_array_d, int d);


#endif
