#include <stdio.h>

int main() {
    int start, end, i, temp, digit, fact, sum;


    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Strong numbers from %d to %d are:\n", start, end);

    
    for(i = start; i <= end; i++) {
        temp = i;
        sum = 0;

    
        while(temp > 0) {
            digit = temp % 10;
            fact = 1;

    
            for(int j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;  
            temp = temp / 10;  
        }

       
        if(sum == i) {
            printf("%d\n", i);  
        }
    }

    return 0;
}
