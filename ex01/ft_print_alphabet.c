#include<unistd.h>
int main(){
    void ft_print_alphabet(void);
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet(void){
    write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}