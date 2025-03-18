 //Convert seconds into hours, minutes & seconds and print in HH:MM:SS.
 #include<stdio.h>
 #include<stdlib.h>

 int main() {
    int seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;

    printf("%d hours, %d minutes, and %d seconds\n", hours, minutes, remaining_seconds);

    return 0;
 }
