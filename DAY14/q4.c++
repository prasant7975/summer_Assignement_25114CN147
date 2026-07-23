// a program to Find duplicates in array:
#include <stdio.h>

int main(void) {
    int arr[100], size, dup_arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("------Enter the elements-------\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < size; i++) {
        // Check if already stored in dup_arr
        int alreadyStored = 0;
        for (int k = 0; k < count; k++) {
            if (dup_arr[k] == arr[i]) {
                alreadyStored = 1;
                break;
            }
        }

        if (alreadyStored)
            continue;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                dup_arr[count++] = arr[i];
                break;
            }
        }
    }

    printf("The duplicates are: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", dup_arr[i]);
    }

    return 0;
}