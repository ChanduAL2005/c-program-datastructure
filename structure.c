#include <stdio.h>
struct book{
int num;
char name[50];
float price;
};
int main()
{
  struct book hp;
  hp.num=89689;
  hp.price=1.0;
  strcpy(hp.name,"hary potter");
  printf("Book number: %d\n",hp.num);
  printf("Book name: %s\n",hp.name);
  printf("Book price: %f\n",hp.price);
  

} 