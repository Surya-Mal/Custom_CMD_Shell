#include <stdio.h>
#include <stdbool.h>

int main(){
    while(true){
        char userInput[] = "";
        printf("$");
        scanf("%s", userInput);
        printf("%s\n", userInput);
    }
    return 0;
}