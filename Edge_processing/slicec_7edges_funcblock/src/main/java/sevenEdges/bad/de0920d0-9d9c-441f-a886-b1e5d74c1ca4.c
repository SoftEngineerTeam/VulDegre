static int badSource(int data)
{
    if(badStatic)
    {
        /* FLAW: Use a value less than the assert value */
        data = ASSERT_VALUE-1;
    }
    return data;
}