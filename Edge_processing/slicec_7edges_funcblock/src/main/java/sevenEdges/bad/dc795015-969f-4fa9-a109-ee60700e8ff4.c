static int badSource(int data)
{
    /* POTENTIAL FLAW: Set data to a random value */
    data = RAND32();
    return data;
}