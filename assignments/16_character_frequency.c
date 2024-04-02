#include <stdio.h>

// int charFrequency(char *string, char character) {
//     int i, c = 0;

//     for(i = 0; string[i] != '\0'; i++) {
//         c += (string[i] == character && character != '\n')? 1 : 0;
//     }

//     return c;
// }

int main() {
    char st[100], ch;
    int i, c;
    
    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

      printf("\nThe frequency of characters is : \n");

    for(ch = 'a'; ch <= 'z'; ch++) {
        c = 0;
        for(i = 0; st[i] != '\0'; i++) {
            if(ch == st[i]) {
                c++;
            }
        }

        if(c > 0) {
            printf("\t%c : %d\n", ch, c);
        }
    }

    return 0;
}