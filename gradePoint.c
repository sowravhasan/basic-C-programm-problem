#include <stdio.h>

int main() {
    int mark;
    
    printf("Enter the student's mark: ");
    scanf("%d", &mark);
    
    // Check the grade
    if (mark >= 90) {
        printf("Grade: A\n");
    } else if (mark >= 80) {
        printf("Grade: B\n");
    } else if (mark >= 70) {
        printf("Grade: C\n");
    } else if (mark >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
