#include<unistd.h>

int main(){
    void ft_print_reverse_alphabet(void);
    ft_print_reverse_alphabet();
    return 0;
}

void ft_print_reverse_alphabet(void){
    for (char c = 'z'; c>= 'a'; c--){
        write (1, &c, 1);
        write(1, "\n", 1);
    }
}