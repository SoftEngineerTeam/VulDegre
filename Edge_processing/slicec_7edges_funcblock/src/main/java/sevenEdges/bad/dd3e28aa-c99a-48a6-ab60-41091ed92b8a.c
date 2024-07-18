static int badSource(int data)
{
    /* POTENTIAL FLAW: Set data to zero */
    data = 0;
    return data;
}