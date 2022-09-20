// run.c 
#include<stdio.h>
#define pi 3.141592

int main()
{
  float r = 5;

  float circle = 2*pi*r;

  printf("%f\n", circle); 

  
  float panda;
  printf("panda: ");
  scanf("%f", &panda);

  float unicorn;
  printf("unicorn: ");
  scanf("%f", &unicorn);

  float time = circle/(panda+unicorn);
  printf("%f\n", time);

  return 0;

}