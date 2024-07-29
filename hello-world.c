#include <stdio.h>
#include <stdbool.h>

int main() {
    int count = 0;
    while(true) {
        sleep(5);
        printf("C program is running! Count: %d\n", count++);
    }
    return 0;
}
