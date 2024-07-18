static int badSource(int data)
{
    /* POTENTIAL FLAW: Use the minimum value for this type */
    data = INT_MIN;
    return data;
}