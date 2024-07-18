static int badSource(int data)
{
    /* POTENTIAL FLAW: Use the maximum value for this type */
    data = INT_MAX;
    return data;
}