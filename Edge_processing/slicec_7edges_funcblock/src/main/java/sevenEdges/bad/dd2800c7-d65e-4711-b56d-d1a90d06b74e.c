short CWE194_Unexpected_Sign_Extension__negative_memcpy_61b_badSource(short data)
{
    /* FLAW: Use a negative number */
    data = -1;
    return data;
}