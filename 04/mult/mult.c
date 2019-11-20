#include <stdio.h>

int main() {
    int R0 = 6;
    int R1 = 7;
    int R2 = 0;
    
    while (R0 > 0) {
      R2 = R2 + R1;
      R0 = R0 - 1;
      printf("R0=%d R1=%d R2=%d\n", R0, R1, R2);
    }
    
    printf("R2=%d\n", R2);
}