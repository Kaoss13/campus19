#include<unistd.h>

int main(){
    void ft_is_negative(int);
    ft_is_negative(-10);
    return 0;
}

void ft_is_negative(int n){
    char c;
    if (n >= 0){
        c = 'P';
    }
    else{
        c = 'N';
    }
    write (1, &c, 1);
}