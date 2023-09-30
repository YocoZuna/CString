#include "CString.h"
#include "unity.h"
#include "unity_fixture.h"

#define STRING "Ala ma kota"

CString* tekst = NULL;
size_t stringLenght = 0;
TEST_GROUP(CStringTestGroup);

TEST_SETUP(CStringTestGroup)
{
  stringLenght = strlen(STRING);
}

TEST_TEAR_DOWN(CStringTestGroup)
{
 tekst = NULL;
}

TEST(CStringTestGroup,CreateString)
{
    
    tekst = CString_CreateString(STRING);
    
    TEST_ASSERT_EQUAL_STRING("Ala ma kota",STRING);
}
TEST(CStringTestGroup,DestroyString)
{
    tekst = CString_CreateString(STRING);
    CString_DestroyString(&tekst);
    TEST_ASSERT_EQUAL(NULL,tekst);
}
TEST(CStringTestGroup,ReturnLength)
{   
    tekst = CString_CreateString(STRING);
    size_t len = CString_ReturnStringLength(tekst);
    TEST_ASSERT_EQUAL(stringLenght,len);
}


TEST_GROUP_RUNNER(CStringTestGroup)
{
    RUN_TEST_CASE(CStringTestGroup,CreateString);
    RUN_TEST_CASE(CStringTestGroup,ReturnLength);
    RUN_TEST_CASE(CStringTestGroup,DestroyString);
    
}
int main(int argc , char** argv ){



UNITY_BEGIN();

RUN_TEST_GROUP(CStringTestGroup)

return UNITY_END();
}
