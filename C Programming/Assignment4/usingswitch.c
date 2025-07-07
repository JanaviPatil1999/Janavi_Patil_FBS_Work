#include <stdio.h>

int main() {
    int num, choice, temp, digit, sum = 0, rev = 0, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative, or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Sum of Digits\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if(num % 2 == 0)
                printf("The number is Even\n");
            else
                printf("The number is Odd\n");
            break;

        case 2:
            if(num <= 1)
                flag = 0;
            else {
                for(int i = 2; i <= num / 2; i++) {
                    if(num % i == 0) {
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag)
                printf("The number is Prime\n");
            else
                printf("The number is Not Prime\n");
            break;

        case 3:
            temp = num;
            rev = 0;
            while(temp != 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp = temp / 10;
            }
            if(rev == num)
                printf("The number is Palindrome\n");
            else
                printf("The number is Not Palindrome\n");
            break;

        case 4:
            if(num > 0)
                printf("The number is Positive\n");
            else if(num < 0)
                printf("The number is Negative\n");
            else
                printf("The number is Zero\n");
            break;

        case 5:
            temp = num;
            rev = 0;
            while(temp != 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp = temp / 10;
            }
            printf("Reversed number is: %d\n", rev);
            break;

        case 6:
            temp = num;
            sum = 0;
            while(temp != 0) {
                digit = temp % 10;
                sum += digit;
                temp = temp / 10;
            }
            printf("Sum of digits is: %d\n", sum);
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 6.\n");
    }

    return 0;
}
