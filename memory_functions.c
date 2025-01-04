#include <stdio.h>
#include <string.h>

void test_memset_functionality() {
    printf("Testing memset function\n");
    int arr[5] = {1, 2, 3, 4, 5};

    memset(arr, 0, sizeof(arr));

    printf("After calling memset, the array values are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void test_memcpy_functionality() {
    printf("Testing memcpy function\n");
    int src[] = {10, 20, 30, 40, 50};
    int dest[5];

    memcpy(dest, src, sizeof(src));

    printf("After memcpy, the destination array contains:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", dest[i]);
    }
    printf("\n\n");
}

void test_memcmp_functionality() {
    printf("Testing memcmp function\n");
    char str1[] = "Hello";
    char str2[] = "Hello";

    if (memcmp(str1, str2, strlen(str1)) == 0) {
        printf("Both memory blocks are identical.\n");
    } else {
        printf("Memory blocks differ.\n");
    }
    printf("\n");
}

void test_memchr_functionality() {
    printf("Testing memchr function\n");
    char str[] = "Hello, World!";
    char *found = memchr(str, 'o', strlen(str));

    if (found) {
        printf("Found 'o' at index: %ld\n", found - str);
    } else {
        printf("'o' not found in the string.\n");
    }
    printf("\n");
}

void test_memset_with_custom_value() {
    printf("Testing memset with a custom value\n");
    int arr[5];

    memset(arr, 5, sizeof(arr));

    printf("Array values after memset with 5:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void test_memcpy_partial_array() {
    printf("Testing memcpy with a portion of the array\n");
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];

    memcpy(arr2, arr1, 3 * sizeof(int));

    printf("After partial memcpy, the array contains:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n\n");
}

void test_memchr_with_int_array() {
    printf("Testing memchr with an integer array\n");
    int arr[] = {10, 20, 30, 40, 50};
    int *found = memchr(arr, 30, sizeof(arr));

    if (found) {
        int pos=(char*)found-(char*)arr;
        pos/=sizeof(int);
        printf("Found 30 at position: %ld\n", pos);
    } else {
        printf("30 was not found in the array.\n");
    }
    printf("\n");
}

int main() {
    test_memset_functionality();
    test_memcpy_functionality();
    test_memcmp_functionality();
    test_memchr_functionality();
    test_memset_with_custom_value();
    test_memcpy_partial_array();
    test_memchr_with_int_array();

    return 0;
}
