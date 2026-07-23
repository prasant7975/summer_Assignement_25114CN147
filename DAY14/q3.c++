//program to  find Second largest element:
#include <stdio.h>

int main(void) {
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("------Enter the elements-------\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int sec_largest = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        } else if (arr[i] > sec_largest && arr[i] != largest) {
            sec_largest = arr[i];
        }
    }

    if (sec_largest == -1)
        printf("Second largest element does not exist.");
    else
        printf("Second largest element = %d", sec_largest);

    return 0;
}