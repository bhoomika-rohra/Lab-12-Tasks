#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    int *arr = (int*)calloc(n, sizeof(int)); 
    printf("First array after calloc (all zeros):\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("First array after modification:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    printf("\nEnter size of second array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int)); 
    if(arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Second array after malloc (uninitialized values):\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");
    for(int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("Second array after assignment:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
