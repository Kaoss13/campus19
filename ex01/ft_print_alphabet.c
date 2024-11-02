#include<unistd.h>
int main(){
    void ft_print_alphabet(void);
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet(void){
    for (char c = 'a'; c <='z'; c++){
        write (1, &c, 1);
        write(1,"\n",1);
    }
}