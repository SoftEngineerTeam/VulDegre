void aghastness_tritiated(int thromboangiitis_syllabified,durmast_badly *gnni_outplods)
{
    int stonesoup_stack_size = 0;
  char *overmatureness_resilement = 0;
  ++stonesoup_global_variable;
  thromboangiitis_syllabified--;
  if (thromboangiitis_syllabified > 0) {
    lizzy_overtinseling(thromboangiitis_syllabified,gnni_outplods);
    return ;
  }
  overmatureness_resilement = ((char *)( *(gnni_outplods - 5)));
    tracepoint(stonesoup_trace, weakness_start, "CWE789", "A", "Uncontrolled Memory Allocation");
    tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: BEFORE");
    /* STONESOUP: CROSSOVER-POINT (Uncontrolled Memory Allocation) */
    if (strlen(overmatureness_resilement) > 1 &&
     overmatureness_resilement[0] == '-') {
     stonesoup_printf("Input value is negative\n");
 } else {
        stonesoup_stack_size = strtoul(overmatureness_resilement,0,0);
        stonesoup_printf("Allocating stack array\n");
        tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: BEFORE");
     /* STONESOUP: TRIGGER-POINT (Uncontrolled Memory Allocation) */
        tracepoint(stonesoup_trace, variable_signed_integral, "stonesoup_stack_size", stonesoup_stack_size, &stonesoup_stack_size, "TRIGGER-STATE");
        char stonesoup_stack_string[stonesoup_stack_size];
        memset(stonesoup_stack_string,'x',stonesoup_stack_size - 1);
        tracepoint(stonesoup_trace, trace_point, "TRIGGER-POINT: AFTER");
    }
    tracepoint(stonesoup_trace, trace_point, "CROSSOVER-POINT: AFTER");
    tracepoint(stonesoup_trace, weakness_end);
;
  if ( *(gnni_outplods - 5) != 0) 
    free(((char *)( *(gnni_outplods - 5))));
stonesoup_close_printf_context();
}