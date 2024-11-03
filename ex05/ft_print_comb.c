#include<unistd.h>

int main (){
    void ft_print_comb(void);
    ft_print_comb();
    return 0;
}

void ft_print_comb(){
    for (int i = '0'; i<='9'; i++){
        for (int j = i+1; j<='9'; j++){
            for (int k = j+1; k<='9'; k++){
                write(1, &i, 1);
                write(1, &j, 1);
                write(1, &k, 1);

                if (i == '7' && j == '8' && k == '9')
                    write(1, "$>", 2);
                else
                    write(1, ", ", 2);
            }
        }
    }
}