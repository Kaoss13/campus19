#include<unistd.h>

int main(){
    void ft_print_comb(void);
    ft_print_comb();
    return 0;
}

void ft_print_comb(void){
    for (char i = '0'; i<='9'; i++){
        for (char j = '0'; j<='9'; j++){
            for (char k = '0'; k<='9'; k++){
                for (char l = '0'; l<='9'; l++){
                    write (1, &i, 1);
                    write (1, &j, 1);
                    write (1, " ", 1);
                    write (1, &k, 1);
                    write (1, &l, 1);
                    
                    if (i == '9' && j=='9'&&k=='9'&&l=='9')
                        write(1, "$>", 2);
                    else
                        write (1, ", ", 2);
                }
            }
        }
    }
}