void CWE758_Undefined_Behavior__int_alloca_use_09_bad()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            int * pointer = (int *)ALLOCA(sizeof(int));
            int data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printIntLine(data);
        }
    }
}