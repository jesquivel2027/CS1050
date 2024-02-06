// Jacob Esquivel, Lab 3, CMPSCI 1050 JIMR, 2/2/24

#include <stdio.h>
int main() 
{
for (int i = 150; i >= 3; i--) {
    if (i % 3 == 0) {
    if (i % 4 == 0 && i % 7 == 0) {
    printf("TrumanTiger ");
        } else if (i % 4 == 0){
            printf("Truman ");
        } else if (i % 7 == 0){
            printf("Tiger ");
        }
            printf("%d", i);
        }
    }
    
    return 0;
}

