#include <stdio.h>


int		ft_str_is_alpha(char *str) {
	int i = 0;
	int flag = 0;
	while (str[i]) {
	  if(str[i]>=97 && str[i]<=122){
	    flag = 0;
	     i++;
	  }
	  else if(str[i]>=65 && str[i]<=90){
	    flag = 0;
	     i++;
	  }
	  else{
	     return 1;
	  }
	}
	return flag;
}


int main(){
char masiv[]="xxxxxxxx";
int x = ft_str_is_alpha(masiv);
printf("%d",x);

}
