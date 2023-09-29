#ifndef _CSTRING_H_
#define _CSTRING_H_
#endif
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
typedef struct 
{
    uint32_t lenght;
    char string[];
}CString;


CString* CString_CreateString(char stringToCreate[]);
