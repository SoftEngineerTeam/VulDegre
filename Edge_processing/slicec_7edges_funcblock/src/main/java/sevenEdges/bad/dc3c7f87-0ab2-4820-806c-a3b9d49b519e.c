static int badSource(int data)
{
    if(badStatic)
    {
        /* FLAW: Use a negative number */
        data = -1;
    }
    return data;
}