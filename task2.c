#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int size;
    printf("Enter the length of the string: ");
    scanf("%d", &size);
    getchar();
    char *str = (char*)malloc((size + 1) * sizeof(char));
    printf("Enter a string: ");
    fgets(str, size + 1, stdin);
    str[strcspn(str, "\n")] = '\0';
    
    printf("Reversed string:");
    for(int i=0;i<strlen(str)/2;i++){
        char temp=str[i];
        str[i]=str[strlen(str)-i-1];
        str[strlen(str)-i-1]=temp;
        
    } 
    printf("%s", str);
    
    free(str);
    return 0;

}
