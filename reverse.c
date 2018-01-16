#include  <stdio.h>
#include <string.h>
int main(void)
{char *str="ForgetCode";
int i;
 printf("Reverse the String:");
 for( i=(strlen(str)-1);i>=0;i--)
 { printf("%c",str[i]);
 } return 0;
}

