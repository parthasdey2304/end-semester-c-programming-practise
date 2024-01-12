#include <stdio.h> 

int main(){
    char a[100], b[100], new_str[100];
    int i, j;

    printf("Enter the first string : ");
    fgets(a, sizeof(a), stdin);

    printf("Enter the second string : ");
    fgets(b, sizeof(b), stdin);

    for(i = 0; i < a[i] != '\0'; i++) {
        if(a[i] != '\n') {
            new_str[i] = a[i];
        }
    }

    for(j = 0; j < b[j] != '\0'; j++) {
        if(b[i] != '\n') {
            new_str[i - 1 + j] = b[j];
        }
    }

    printf("The new string after concatination is : %s", new_str);
    return 0;
}