#include <stdio.h>

// Function to display the elements of the array
void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at the end of the array
int insert(int arr[], int size, int element) {
    if (size >= 100) {
        printf("Array is full. Cannot insert.\n");
        return size;
    }

    arr[size] = element;
    return size + 1;
}

// Function to update an element at a specific index in the array
void update(int arr[], int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
        printf("Element at index %d updated to %d\n", index, newValue);
    } else {
        printf("Invalid index. Update failed.\n");
    }
}

// Function to delete an element at a specific index in the array
int delete(int arr[], int size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        printf("Element at index %d deleted.\n", index);
        return size - 1;
    } else {
        printf("Invalid index. Deletion failed.\n");
        return size;
    }
}

int main() {
    int arr[100];
    int size = 0;
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Update element\n");
        printf("3. Delete element\n");
        printf("4. Display elements\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int element;
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                size = insert(arr, size, element);
                break;
            }
            case 2: {
                int index, newValue;
                printf("Enter the index to update: ");
                scanf("%d", &index);
                printf("Enter the new value: ");
                scanf("%d", &newValue);
                update(arr, size, index, newValue);
                break;
            }
            case 3: {
                int index;
                printf("Enter the index to delete: ");
                scanf("%d", &index);
                size = delete(arr, size, index);
                break;
            }
            case 4:
                display(arr, size);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
