/* --- Generated the 2/3/2023 at 17:18 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sat. jan. 15 3:31:18 CET 2022) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts counter.ept --- */

#ifndef COUNTER_H
#define COUNTER_H

#include "counter_types.h"
typedef struct Counter__main_mem {
  Counter__st ck;
  int v_29;
  int v_28;
  int v_24;
  int v_22;
  int v_20;
  int v_17;
  int v_16;
  int v_14;
  int v_12;
  int v_10;
  int v_8;
  int v_6;
  int v_4;
  int v_2;
  int v;
  int pnr;
} Counter__main_mem;

typedef struct Counter__main_out {
  int aout;
  int bout;
  int cout;
} Counter__main_out;

void Counter__main_reset(Counter__main_mem* self);

void Counter__main_step(int start, int tick, Counter__main_out* _out,
                        Counter__main_mem* self);

typedef struct Counter__main2_mem {
  Counter__st_4 ck;
  Counter__st_3 v_42;
  Counter__st_2 v_44;
  Counter__st_1 v_46;
  int v_49;
  int v_48;
  int v_47;
  int v_45;
  int v_43;
  int v_40;
  int v_38;
  int v_36;
  int v_34;
  int v_32;
  int v;
  int stop_1;
  int pnr_3;
} Counter__main2_mem;

typedef struct Counter__main2_out {
  int aout;
  int bout;
  int cout;
} Counter__main2_out;

void Counter__main2_reset(Counter__main2_mem* self);

void Counter__main2_step(int start, int tick, Counter__main2_out* _out,
                         Counter__main2_mem* self);

typedef struct Counter__display_mem {
  int mem_tick;
  int mem_start;
  int v_50;
  int v;
  Counter__main_mem main;
} Counter__display_mem;

typedef struct Counter__display_out {
  int start;
  int tick;
  int aout;
  int bout;
  int cout;
} Counter__display_out;

void Counter__display_reset(Counter__display_mem* self);

void Counter__display_step(Counter__display_out* _out,
                           Counter__display_mem* self);

#endif // COUNTER_H
