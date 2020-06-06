#include <stdio.h>

int main()
{
 printf("What to order?: \n1. Sandwich\n2. Burger\n3. Pizza\n4. Paasta\n5. French Fries");
int choice=0;
scanf("%d", &choice);
switch(choice)
{
  case 1:
    printf("Food item - Sandwich\n Price - Rs.149");
    break;
  case 2:
    printf("Food item - Burger\n Price - Rs.129");
    break;
  case 3:
    printf("Food item - Pizza\n Price - Rs.239");
    break;
  case 4:
    printf("Food item - Paasta\n Price - Rs.179");
    break;
  case 5:
    printf("Food item - French Fries\n Price - Rs.99");
    break;
  default: printf("Use the default case");
}

}




























