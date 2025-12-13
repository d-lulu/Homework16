#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "arrays.h"

// Здесь все собственные функции

double func(double x) {
	return x * x * x + 3 * x * x - 3;
}

double* full_elements(double* ptr_array, int n) {

	double x = 2;

	for (int i = 0; i < n; i++) {
		ptr_array[i] = func(x);
		x += 0.2;
	}

	return ptr_array;

}


int put_elements(double* ptr_array, int n) {

	for (int i = 0; i < n; i++) {
		printf("a[%d] = %.3lf, ", i, ptr_array[i]);
	}
}


double* calc_elements(double* ptr_array, int n) {

	double* ptr_arr1;
	ptr_arr1 = (double*)(malloc(n * sizeof(double)));

	for (int i = 0; i < n; i++) {
		ptr_arr1[i] = ptr_array[i];
		if (i % 2 == 0) ptr_arr1[i] = 1;
	}

	return ptr_arr1;

}


double sum_elements(double* ptr_array, int begin, int end) {

	double sum = 0;

	for (int i = begin; i <= end; i++) {
		sum += ptr_array[i];
	}

	return sum;
}


int find_element(double* ptr_array, int n, double element) {

	int found = -1;

	for (int i = 0; i < n; i++) {
		if (fabs(fabs(ptr_array[i]) - fabs(element)) <= 0.01) {
			found = i;
			return found;
		}
	}

	return found;
}


double find_max(double* ptr_array, int n, double a) {

	double max = -1;

	for (int i = 0; i < n; i++) {
		if (fabs(fabs(ptr_array[i]) - fabs(a)) > 0.01 && fabs(ptr_array[i]) > max) max = fabs(ptr_array[i]);
	}

	return max;
}


int delete_k(double* ptr_array, int n) {

	double sum = 0, sr;
	int count = 0;

	for (int i = 0; i < n; i++) sum += ptr_array[i];
	sr = sum / n;

	for (int i = 0; i < n; i++)
		if (ptr_array[i] < sr) count++;

	for (int i = 0; i < (n - count); i++)
		if (ptr_array[i] < sr) {
			for (int j = i; j < (n - 1); j++) ptr_array[j] = ptr_array[j + 1];
			i--;
		}
	return n - count;

}


double* insert(double* ptr_array, int* n, int num) {

	int size_n = (*n) + 1;
	int index = 0;

	if (ptr_array == NULL) return NULL;

	for (int i = 0; i < size_n; i++)
		if (ptr_array[i] < 0) {
			index = i;
			break;
		}

	double* ptr_array_n = (double*)realloc(ptr_array, size_n * sizeof(double));
	if (ptr_array_n == NULL) return ptr_array;
	ptr_array = ptr_array_n;

	for (int i = size_n - 1; i > index; i--)
		ptr_array[i] = ptr_array[i - 1];

	ptr_array[index] = num;

	*n = size_n;

	return ptr_array;
}

double* full_elements_1(double* p_arr, int n) {

	double x = 2.83476;

	for (int i = 0; i < n; i++) {
		p_arr[i] = (x * x * x - 2 * x * x + x - 5) / 100;
		if (p_arr[i] > 0) x -= 0.3324;
		else x += 0.83498;
	}

	return p_arr;

}


double* full_elements_abc(double* ptr_array, int n, int type) {

	double x;
	if (type == 1) x = n / 746.8723;
	else if (type == 2) x = n / 746.8723 + 8;
	else x = n / 746.8723 + 15;

	for (int i = 0; i < n; i++) {
		ptr_array[i] = (x * x * x - 2 * x * x + x - 5) / 1328;
		if (ptr_array[i] > 0) x -= 72.3324;
		else x += 46.83498;
	}

	return ptr_array;

}


int max_size(int a, int b, int c){
	double max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}


double find_min(double a, double b, double c) {
	double min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}


double* full_elements_d(double* ptr_array_a, int a, double* ptr_array_b, int b, double* ptr_array_c, int c, double* ptr_array_d, int d) {

	double vel1, vel2, vel3;
	for (int i = 0; i < d; i++) {
		vel1 = 4544454544326;
		vel2 = 45444545446;
		vel3 = 736487164876146;

		if (a > i) vel1 = ptr_array_a[i];
		if (b > i) vel2 = ptr_array_b[i];
		if (c > i) vel3 = ptr_array_c[i];

		ptr_array_d[i] = find_min(vel1, vel2, vel3);
	}

	return ptr_array_d;
}





