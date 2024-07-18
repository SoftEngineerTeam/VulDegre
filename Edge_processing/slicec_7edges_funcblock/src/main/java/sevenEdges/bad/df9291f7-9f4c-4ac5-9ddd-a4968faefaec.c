void CWE15_External_Control_of_System_or_Configuration_Setting__w32_67b_badSink(CWE15_External_Control_of_System_or_Configuration_Setting__w32_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    /* POTENTIAL FLAW: set the hostname to data obtained from a potentially external source */
    if (!SetComputerNameA(data))
    {
        printLine("Failure setting computer name");
        exit(1);
    }
}