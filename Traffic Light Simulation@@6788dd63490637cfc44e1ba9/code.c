// Your code here...
#include<stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    switch(c) {
        case 'R':
            printf("Stoop\n");
            break;
        case 'G':
            printf("Go\n");
            break;
        case 'Y':
            printf("Slow Down\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}
