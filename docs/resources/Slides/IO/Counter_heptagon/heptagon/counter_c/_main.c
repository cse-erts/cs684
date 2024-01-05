/* --- Generated the 2/3/2023 at 17:18 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sat. jan. 15 3:31:18 CET 2022) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts counter.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Counter__main_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int start;
  int tick;
  Counter__main_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Counter__main_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &start)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &tick)==EOF)) {
      return 0;
    };;
    Counter__main_step(start, tick, &_res, &mem);
    printf("%d\n", _res.aout);
    printf("%d\n", _res.bout);
    printf("%d\n", _res.cout);
    fflush(stdout);
  };
  return 0;
}

