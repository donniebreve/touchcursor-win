#ifndef _BSD_GETLINE_H
#define _BSD_GETLINE_H

typedef intptr_t ssize_t;
ssize_t getline(char** lineptr, size_t* n, FILE* stream);

#endif
