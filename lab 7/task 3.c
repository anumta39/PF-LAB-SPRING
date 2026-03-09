#include <stdio.h>

int main() {
    int passMarks[10], failMarks[10];
    int passCount = 0, failCount = 0;
    int mark, i;
    float passAverage = 0, failAverage = 0;

    
    printf("Enter quiz marks for 10 students (enter -1 to stop): ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &mark);
        if (mark == -1) {
            break;
        }
        if (mark >= 5 && mark <= 10) {
            passMarks[passCount++] = mark;
            passAverage += mark;
        } else if (mark >= 0 && mark < 5) {
            failMarks[failCount++] = mark;
            failAverage += mark;
        } else {
            printf("Invalid mark entered. Please enter a mark between 0 and 10.\n");
            i--; 
        }
    }

    
    if (passCount > 0) {
        passAverage /= passCount;
    }
    if (failCount > 0) {
        failAverage /= failCount;
    }

    
    printf("Passed students' marks: ");
    for (i = 0; i < passCount; i++) {
        printf("%d ", passMarks[i]);
    }
    printf("\nAverage of passed students' marks: %.2f\n", passAverage);

    printf("Failed students' marks: ");
    for (i = 0; i < failCount; i++) {
        printf("%d ", failMarks[i]);
    }
    printf("\nAverage of failed students' marks: %.2f\n", failAverage);
    
    return 0;
}
