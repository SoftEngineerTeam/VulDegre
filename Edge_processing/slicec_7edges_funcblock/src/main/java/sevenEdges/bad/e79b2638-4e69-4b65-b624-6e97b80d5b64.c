static char * badSource(char * data)
{
    /* FLAW: Did not leave space for a null terminator */
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
    return data;
}