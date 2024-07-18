static int badSource(int data)
{
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    return data;
}