#include <stdio.h>


int		ft_str_is_alpha(char *str) {
	int i = 0;
	int flag = 0;
	while (str[i]) {
	  if(str[i]>=97 && str[i]<=122){
	    flag = 1;
	     i++;
	  }
	  else{
	     return 0;
	  }
	}
	return flag;
}


int main(){
char masiv[]=" ";
int x = ft_str_is_alpha(masiv);
printf("%d",x);

}
