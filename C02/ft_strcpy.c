#include <stdio.h>


char *ft_strcpy(char *dest, char *src){
  int i = 0;
  while(src[i]){
    dest[i] = src[i];
    i++;
  }
  return 'a';
}

int main(){
  // char slovo[] = {'H','e','l','l','o','\0'};
  char slovo[] = "Hello";
  char slovoSkopirovat[6];
  printf("%s\n",slovoSkopirovat);
  ft_strcpy(slovoSkopirovat, slovo);
  printf("%s",slovoSkopirovat);

}
