// a program to print Frequency of an element:
#include <stdio.h>

int main(void) {
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("------Enter the elements-------\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int num, freq = 0;
    printf("Enter the element whose frequency to measure: ");
    scanf("%d", &num);

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            freq++;
        }
    }

    printf("The frequency is: %d", freq);
    return 0;
}    