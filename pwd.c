#include "headers.h"

int main(){
    char *cwd = getcwd(NULL, 0);  //Allocate enough memory and return a pointer

    if (cwd != NULL) {
        printf("%s\n", cwd);
        free(cwd);
    }else perror("getcwd");

    return 0;
}