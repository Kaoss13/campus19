#include <unistd.h>

int main(){
    void ft_putnbr(int);
    ft_putnbr(-1234);
    return 0;
}

void ft_putnbr(int nb){
    char n;
    if (nb<0){
        write (1, "-", 1);
        nb *= -1;
    }

    if (nb >= 10)
        ft_putnbr(nb / 10);
    n = (nb % 10) + '0';
    write(1, &n, 1);
}