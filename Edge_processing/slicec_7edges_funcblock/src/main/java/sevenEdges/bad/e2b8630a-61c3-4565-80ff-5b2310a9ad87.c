void CWE469_Use_of_Pointer_Subtraction_to_Determine_Size__wchar_t_05_bad()
{
    if(staticTrue)
    {
        {
            wchar_t string1[] = SOURCE_STRING;
            wchar_t string2[] = SOURCE_STRING;
            wchar_t * slashInString1;
            size_t indexOfSlashInString1;
            slashInString1 = wcschr(string1, L'/');
            if (slashInString1 == NULL)
            {
                exit(1);
            }
            /* FLAW: subtracting the slash pointer from a completely different string, should be slashInString1 - string1 */
            indexOfSlashInString1 = (size_t)(slashInString1 - string2);
            /* print the index of where the slash was found */
            printUnsignedLine(indexOfSlashInString1);
        }
    }
}