#include<unistd.h>

int main(){
    void ft_print_numbers(void);
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void){
    char tab [9];
    for (int i = 0; i < 10; i++){
        tab[i] = (i +'0');
        write(1, &tab[i], 1);
        write(1, "\n", 1);
    }
}