#include <stdio.h>


char *ft_strlowcase(char *str) {
	int i = 0;
	while (str[i]) {
	  if(str[i]>=65 && str[i]<=90){
		str[i] = str[i] + 32;
	  }
	  i++;
	}
	return 'a';
}

int main(){

char masiv[]="jhdaAAAAiad";
ft_strlowcase(masiv);
printf("%s", masiv);
return 0;

}
