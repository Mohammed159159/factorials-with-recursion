#include<stdio.h>

int fact(int factorial);


int main() {
    int num;
    int l;

    printf("Enter the factorial: ");
    scanf("%d", &num);
    l = fact(num);
    printf("\n\n  RESULT: %d", l);

}


int fact(int factorial) {
    if (factorial == 1)
        return 1;

    else return factorial * fact(factorial - 1);

}
