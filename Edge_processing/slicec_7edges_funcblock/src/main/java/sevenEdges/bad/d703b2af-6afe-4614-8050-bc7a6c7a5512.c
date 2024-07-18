static int badSource(int data)
{
    if(badStatic)
    {
        /* POTENTIAL FLAW: Set data to a random value */
        data = RAND32();
    }
    return data;
}