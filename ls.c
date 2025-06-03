
#include "headers.h"

int main() {
    DIR *d = opendir(".");
    struct dirent *entry;

    while ((entry = readdir(d)) != NULL) {
        printf("%s ", entry->d_name);
    }

    closedir(d);
    return 0;
}
