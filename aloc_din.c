#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *inverte(char *s) {
  int len = strlen(s);
  char *pt = (char*)malloc(sizeof(char) * (len+1));
  for (int i=0; i<len; i++)
    pt[len-i-1] = s[i];
  pt[len] = '\0';
  return pt;
}

int main() {
    char vogais[6] = "aeiou";
    char *siagov;

    siagov = inverte(vogais);
    printf("String original: %s\n", vogais);
    printf("String invertida: %s\n", siagov);

    return 0;
}