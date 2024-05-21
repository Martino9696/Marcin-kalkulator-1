#include <iostream>
#define SIZE 10

int main() {
    int array[SIZE] = {1, 2, 3, 4, 50, 6, 7, 8, 9, 10};
    printf("Simple array\n");

    //enter data into array
//    printf("Enter data into array:\n");
//    for (int i = 0; i < SIZE; ++i) {
//        printf("array[%d] = ", i);
//        scanf("%d", &array[i]);
//    }

    //display array
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    //find maximum
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("Maximum value = %d\n", max);

    //calculate average
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += array[i];
    }
    float average = (float) sum / SIZE;
    printf("Average value = %f\n", average);


    return 0;
}



