#include <stdio.h>

// Function to check for duplicates in the array
int containsDuplicates(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return 1; // Duplicate found
            }
        }
    }
    return 0; // No duplicates found
}

int main() {
    int n;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements in array
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Check for duplicates
    if (containsDuplicates(arr, n)) {
        printf("The array contains duplicate elements.\n");
    } else {
        printf("The array does not contain any duplicate elements.\n");
    }

    return 0;
}