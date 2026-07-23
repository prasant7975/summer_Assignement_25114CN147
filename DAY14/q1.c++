//A program to Linear search:
#include <stdio.h>

int main(void) {
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("------Enter the elements-------\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // performing linear search:
    int num, post = 0;
    printf("Enter the number to be searched: ");
    scanf("%d", &num);

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            post = i + 1;
        }
    }

    if (post != 0) {
        printf("The Number is present at %d position\n", post);
    } else {
        printf("Number not present\n");
    }

    return 0;
}