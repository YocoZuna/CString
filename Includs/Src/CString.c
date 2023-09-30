#include "CString.h"



CString* CreateString(const char stringToCreate[]);
void CString_DestroyString(CString** stringToDestroy);
size_t CString_ReturnStringLength(CString* string);
void CString_ReplaceString(CString* string, const char stringToCreate[]);
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
    *stringToDestroy = NULL;
}

size_t CString_ReturnStringLength(CString* string)
{
    return string->lenght;
}

void CString_ReplaceString(CString* string,const  char  stringToCreate[])
{
    size_t lenOld  = string->lenght;
    size_t lenNew  = strlen(stringToCreate);
    if (lenNew<=lenOld)
    {
        strcpy(string->string,stringToCreate);
    }
    

}

void CString_ConcatString(CString* string,const char string2[])
{

}