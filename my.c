#include <stdio.h>

int main() {
    int n = 7; // height of the Y
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i < n / 2 && (j == i || j == n - i - 1)) || (i >= n / 2 && j == n / 2)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("I love you\n");
    return 0;
}
