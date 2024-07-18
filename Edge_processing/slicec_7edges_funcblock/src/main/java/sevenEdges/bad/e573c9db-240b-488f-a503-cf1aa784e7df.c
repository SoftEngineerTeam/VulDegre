static int badSource(int data)
{
    if(badStatic)
    {
        /* FLAW: Use a number larger than SHRT_MAX */
        data = SHRT_MAX + 5;
    }
    return data;
}