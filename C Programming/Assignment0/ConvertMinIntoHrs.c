#include <stdio.h>
int main() {
    int minutes, hours, remaining;
    printf("Enter total minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    remaining = minutes % 60;
    printf("%d minutes = %d hour(s) and %d minute(s)", minutes, hours, remaining);
}