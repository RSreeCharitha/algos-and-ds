#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_string(char *str){
  int l = strlen(str);
  printf("%d",l);
  printf("hello");

    char *reverse = (char *)malloc((strlen(str)+1)* sizeof(char) );
    //Implement this function
    int i;
    for(i=0;i<l;i++){
      printf("%c ",*(str+i));
    }
    return reverse;
}

int main()
{
    char *str;
    scanf("%[^\n]s", str);
    printf("%[^\n]s", *str);
    /*char *reverse = reverse_string(str);
    free(reverse);
    return 0;*/
}


