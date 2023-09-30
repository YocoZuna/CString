#ifndef _CSTRING_H_
#define _CSTRING_H_
#endif
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
typedef struct 
{
    uint32_t lenght;
    char string[];
}CString;

void CString_DestroyString(CString** stringToDestroy);
CString* CString_CreateString(const  char stringToCreate[]);

size_t CString_ReturnStringLength(CString* string);
void CString_ReplaceString(CString* string,const char stringToCreate[]);