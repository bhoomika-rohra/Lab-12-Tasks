#include <stdio.h>

int digitalRoot(int n) {
    if(n < 10) {
        return n;
    } else {
        int sum = 0;
        while(n > 0) {
            sum += n % 10; 
            n /= 10;        
        }
        return digitalRoot(sum);
    }    
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = digitalRoot(num);
    printf("Digital root of %d is %d\n", num, result);

    return 0;
}
