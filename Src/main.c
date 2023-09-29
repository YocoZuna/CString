#include "CString.h"
#include "unity.h"
#include "unity_fixture.h"


CString* tekst = NULL;

TEST_GROUP(CStringTestGroup);

TEST_SETUP(CStringTestGroup)
{

}

TEST_TEAR_DOWN(CStringTestGroup)
{

}

TEST(CStringTestGroup,CreateString)
{
    
    tekst = CString_CreateString("Ala ma kota");
    TEST_ASSERT_EQUAL_STRING("Ala ma kota","Ala ma kota");
}
TEST(CStringTestGroup,DestroyString)
{
    
    CString_DestroyString(&tekst);
    TEST_ASSERT_EQUAL(NULL,tekst);
}

TEST_GROUP_RUNNER(CStringTestGroup)
{
    RUN_TEST_CASE(CStringTestGroup,CreateString);
    RUN_TEST_CASE(CStringTestGroup,DestroyString);
}
int main(int argc , char** argv ){



UNITY_BEGIN();

RUN_TEST_GROUP(CStringTestGroup)

return UNITY_END();
}
