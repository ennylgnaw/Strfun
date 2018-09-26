#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
  
  /*
    STRCAT
    strcat() will append copy of source string to end of destination string
    returns dest, pointer to destrination string
   */
  char src[50] = " and the source";
  char dest[50] = "The destination";
  strcat(dest, src);
  printf("%s\n", dest);
  
  /*
    STRNCAT
    strncat() will append given number of chars from one src string to end of
    dest string
   */
  char src2[50] = " and the source this shall not print";
  char dest2[50] = "The destination";
  strncat(dest2, src2, 15);
  printf("%s\n", dest2);
  
  return 0;
  
}
