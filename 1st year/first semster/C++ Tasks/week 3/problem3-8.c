#include <stdio.h>
/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/

float computeSum(float numbers[], int count) {
    float sum = 0.0;
    for (int i = 0; i < count; i++) {
        if (numbers[i] != -99.0) {
            sum+=numbers[i];
        }
    }
    return sum;
}

float computeAverage(float numbers[], int count) {
    float sum=computeSum(numbers, count);
    int validCount = 0;
    for (int i = 0; i < count; i++) {
        if (numbers[i] != -99.0) {
            validCount++;
        }
    }
    return (validCount > 0) ? (sum / validCount) : 0.0;
}

int main() {
    float numbers[10];
    int count = 0;
    float input;

    printf("enter up to 10 floats (enter -99.0 to stop):\n");

    while (count < 10) {
        scanf("%f", &input);
        if (input==-99.0) {
            break;
        }
        numbers[count]=input;
        count++;
    }

    float sum=computeSum(numbers, count);
    float average = computeAverage(numbers, count);

    printf("sum of entered numbers (excluding -99.0): %.2f\n", sum);
    printf("average of entered numbers (excluding -99.0): %.2f\n", average);

    return 0;
}
