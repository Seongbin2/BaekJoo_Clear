#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {
    char number[10];
    scanf("%s", number);

    int length = strlen(number);
    int number2[10];
    int number3[10];

    for (int i = 0; i < length; i++) {
        number2[i] = (int)number[i];
        number3[i] = plus(number2[i]);
    }

   for (int j = 0; j < length; j++) {
        for (int i = 0; i < number3[j]; i++) {
            printf("%c", number[j]);
        }
        printf("\n");
    }
   
    
}

int plus(int n) {
    int m = 0;
    while (n > 0) {
        m += n % 10;
        n /= 10;
    }
    return m;

}
