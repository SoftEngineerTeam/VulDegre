void CWE475_Undefined_Behavior_for_Input_to_API__wchar_t_18_bad()
{
    goto sink;
sink:
    {
        wchar_t dataBuffer[100] = L"";
        wchar_t * data = dataBuffer;
        wcscpy(data, L"abcdefghijklmnopqrstuvwxyz");
        /* FLAW: Copy overlapping memory regions using memcpy() for which the result is undefined */
        memcpy(data + 6, data + 4, 10*sizeof(wchar_t));
        printWLine(data);
    }
}