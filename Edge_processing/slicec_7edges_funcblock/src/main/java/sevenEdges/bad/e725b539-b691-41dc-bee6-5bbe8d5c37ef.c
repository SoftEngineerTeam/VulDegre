void CWE400_Resource_Exhaustion__rand_sleep_64b_badSink(void * countVoidPtr)
{
    /* cast void pointer to a pointer of the appropriate type */
    int * countPtr = (int *)countVoidPtr;
    /* dereference countPtr into count */
    int count = (*countPtr);
    /* POTENTIAL FLAW: Sleep function using count as the parameter with no validation */
    SLEEP(count);
    printLine("Sleep time possibly too long");
}