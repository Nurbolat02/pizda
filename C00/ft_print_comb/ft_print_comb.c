#include <stdio.h>
#include <unistd.h> 

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print(int i, int j, int k) {
    ft_putchar(i);
    ft_putchar(j);
    ft_putchar(k);
    if (!(i == '7' && j == '8' && k == '9')) { 
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb(void) {
    int i;
    int j;
    int k;

    for (i = '0'; i <= '7'; i++) {
        for (j = i + 1; j <= '8'; j++) {
            for (k = j + 1; k <= '9'; k++) {
                ft_print(i, j, k);
            }
        }
    }
}

int main(void) {
    ft_print_comb();
    return 0;
}
