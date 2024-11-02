#include<unistd.h>

int main(){
    void ft_print_reverse_alphabet(void);
    ft_print_reverse_alphabet();
    return 0;
}

void ft_print_reverse_alphabet(void){
    write(1, "zxywvutsrqponmlkjihgfedcba", 26);
}