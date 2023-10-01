#include "CString.h"



CString* CreateString(const char stringToCreate[]);
void CString_DestroyString(CString** stringToDestroy);
size_t CString_ReturnStringLength(CString* string);
CString* CString_ReplaceString(CString* string, const char stringToCreate[]);
void CString_ConcatString(CString* string,const char string2[]);

CString* CString_CreateString(const  char stringToCreate[])
{
    uint32_t len = strlen(stringToCreate);
    CString* temp  = malloc(sizeof(CString*)+len*sizeof(char));
    temp->lenght = len;
    strcpy(temp->string,stringToCreate);

    return temp;
}
void CString_DestroyString(CString** stringToDestroy)
{
    free(*stringToDestroy);
    *stringToDestroy =NULL;
}

size_t CString_ReturnStringLength(CString* string)
{
    return string->lenght;
}

CString* CString_ReplaceString(CString* string,const  char  stringToCreate[])
{
    uint32_t len = strlen(stringToCreate);


    CString* newString = realloc((void*)string,(sizeof(CString*)+len*sizeof(char)));
    newString->lenght = len;
    strcpy(newString->string,stringToCreate);
    return newString;
}

void CString_ConcatString(CString* string,const char string2[])
{

}