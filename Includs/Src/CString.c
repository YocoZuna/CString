#include "CString.h"



CString* CreateString(char stringToCreate[]);


CString* CString_CreateString(char stringToCreate[])
{
    uint32_t len = strlen(stringToCreate);
    CString* temp  = malloc(sizeof(CString*)+len*sizeof(char));
    temp->lenght = len;
    strcpy(temp->string,stringToCreate);

    return temp;
}