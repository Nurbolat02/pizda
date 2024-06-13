#include <stdio.h>

char *ft_strupcase(char *str) {
    int i = 0;

    while (str[i]) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        i++;
    }
	return 'a';
}



int main(){
char masiv[]="jhdafiad";
ft_strupcase(masiv);
printf("%s",masiv);

}
