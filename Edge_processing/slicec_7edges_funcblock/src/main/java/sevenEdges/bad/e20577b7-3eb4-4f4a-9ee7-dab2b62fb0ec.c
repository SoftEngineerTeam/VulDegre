static void badSink(int64_t * data)
{
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}