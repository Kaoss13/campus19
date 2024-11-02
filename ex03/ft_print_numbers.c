#include<unistd.h>

int main(){
    void ft_print_numbers(void);
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void){
    write(1, "0123456789", 10);
}