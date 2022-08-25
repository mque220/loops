#include<stdio.h>
#include<math.h>
#define SIZE 3

int main(void) {
    int result;
    
    do {
        int three_numbers[SIZE] = {};
        int i = 0;
        printf("Enter instruction: ");
        
        result = scanf("%d", &three_numbers[0]);
        while (i < three_numbers[0]) {
            result = scanf("%d", &three_numbers[i + 1]);
            i = i + 1;
        }
        if (three_numbers[0] == 1)
            printf("%d\n", three_numbers[1] * three_numbers[1]);
        else if (three_numbers[0] == 2)
            // printf("%.0f\n", pow(three_numbers[1], three_numbers[2]));
            printf("%d, %d", three_numbers[1], three_numbers[2]);
    } while (result == 1);

    return 0;
}
