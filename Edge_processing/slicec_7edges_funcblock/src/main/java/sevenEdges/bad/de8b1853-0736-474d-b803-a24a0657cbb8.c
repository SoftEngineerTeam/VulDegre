void CWE758_Undefined_Behavior__int64_t_alloca_use_07_bad()
{
    if(staticFive==5)
    {
        {
            int64_t * pointer = (int64_t *)ALLOCA(sizeof(int64_t));
            int64_t data = *pointer; /* FLAW: the value pointed to by pointer is undefined */
            printLongLongLine(data);
        }
    }
}