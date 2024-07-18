void CWE190_Integer_Overflow__unsigned_int_rand_add_15_bad()
{
    unsigned int data;
    data = 0;
    switch(6)
    {
    case 6:
        /* POTENTIAL FLAW: Use a random value */
        data = (unsigned int)RAND32();
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
    break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
}