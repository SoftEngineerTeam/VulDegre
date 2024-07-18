void CWE366_Race_Condition_Within_Thread__global_int_11_bad()
{
    if(globalReturnsTrue())
    {
        {
            stdThread threadA = NULL;
            stdThread threadB = NULL;
            gBadInt = 0;
            if (!stdThreadCreate(helperBad, NULL, &threadA))
            {
                threadA = NULL;
            }
            if (!stdThreadCreate(helperBad, NULL, &threadB))
            {
                threadB = NULL;
            }
            if (threadA && stdThreadJoin(threadA))
            {
                stdThreadDestroy(threadA);
            }
            if (threadB && stdThreadJoin(threadB))
            {
                stdThreadDestroy(threadB);
            }
            printIntLine(gBadInt);
        }
    }
}