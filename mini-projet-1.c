#include <stdio.h>

int main() {

int menu, x, i;
int number[50];

printf("=====Menu=====\n1.Add a contact\n2.Show all contacts\n3.Find a contact\n4.Delete a concat\n5.Exite\n==============\n");
scanf("%d",&menu);

switch (menu)
{
case 1:
    
    printf("Write the number\n");
    scanf("%d", &number[x]);
    x++;
    break;
case 2:
    for(i = 0; i < 50; i++){
        printf("%d\n", number);
    }
case 5:
    break;

default: 
    break;
}

    return 0;
}