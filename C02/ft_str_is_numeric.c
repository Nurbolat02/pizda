#include <stdio.h>


int		ft_str_is_numeric(char *str) {
	int i = 0;
	int flag = 0;
	while (str[i]) {
	  if(str[i]>=48 && str[i]<=57){
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
char masiv[]="111111111";
int x = ft_str_is_numeric(masiv);
printf("%d",x);

}
