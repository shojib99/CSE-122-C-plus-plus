#include <stdio.h>
#include <string.h>
int main(){
    
    char s1[30], s2[30];
    scanf("%s %s", s1,s2);
    int cmp = strcmp(s1,s2);
    if(cmp <= 0)
        printf("%s",s1);
    else
        printf("%s",s2);
     
     return 0;
    
}
