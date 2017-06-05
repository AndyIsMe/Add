#include "build/temp/_test_add.c"
#include "add.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_add_2_and_2_expect_4(void)

{

    int result;



    result = add(2,2);



    UnityAssertEqualNumber((UNITY_INT)((4)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);



}





void test_add_minus_30_and_10_expect_minus_20(void)

{

    int result;



    result = add(-20,10);



    UnityAssertEqualNumber((UNITY_INT)((4)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);



}
