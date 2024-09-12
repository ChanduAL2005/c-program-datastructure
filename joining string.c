#include <stdio.h>

int main(void) {
 int n,i;
  char str[50];
  printf("enter n");
  scanf("%d",&n);
  printf("enter the string");
  scanf("%s",str);
  for(i=0;i<=n;i++){
    printf("%c",str[i]);
  }
  }