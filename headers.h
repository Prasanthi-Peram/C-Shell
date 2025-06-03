#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include "dirent.h" //Handling opening, closing and reading from directories
#include <limits.h>
#include <fcntl.h>
#include <sys/stat.h> //stat(name, &stbuf)-->read info about file name and store in stbuf
#include <sys/types.h>