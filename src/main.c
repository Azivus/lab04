#include <stdio.h>
//точка входа
int main()
{
//число з яким будемо працювати
    int n = 443;
//вводимо обмеження для числа n
    if (n >= 100 && n <= 999){ 
        if ((n / 100 == (n / 10) % 10)||(n / 100 == n % 100 % 10)||((n / 10) % 10 == n % 100 % 10))
            	printf("Yes: %d", n);
        else 
            	printf("No: %d", n);
    }
    return 0;

}
