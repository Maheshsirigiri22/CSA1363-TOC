#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//N.Sagar 192210568
bool isS(const char *str, int *pos) {
    if (str[*pos] == 'a') {
        (*pos)++;
        return isS(str, pos);
    }
    return true; 
}
bool isValidString(const char *str) {
    int pos = 0;
    if (isS(str, &pos) && str[pos] == '\0') {
        return true;
    }
    return false;
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    if (isValidString(input)) {
        printf("The string belongs to the language defined by the CFG.\n");
    } else {
        printf("The string does not belong to the language defined by the CFG.\n");
    }
}