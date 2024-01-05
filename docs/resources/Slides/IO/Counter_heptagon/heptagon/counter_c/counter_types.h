/* --- Generated the 2/3/2023 at 17:18 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sat. jan. 15 3:31:18 CET 2022) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts counter.ept --- */

#ifndef COUNTER_TYPES_H
#define COUNTER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Counter__St_4_Not_Counting,
  Counter__St_4_Counting
} Counter__st_4;

Counter__st_4 Counter__st_4_of_string(char* s);

char* string_of_Counter__st_4(Counter__st_4 x, char* buf);

typedef enum {
  Counter__St_3_S11,
  Counter__St_3_S10
} Counter__st_3;

Counter__st_3 Counter__st_3_of_string(char* s);

char* string_of_Counter__st_3(Counter__st_3 x, char* buf);

typedef enum {
  Counter__St_2_S21,
  Counter__St_2_S20
} Counter__st_2;

Counter__st_2 Counter__st_2_of_string(char* s);

char* string_of_Counter__st_2(Counter__st_2 x, char* buf);

typedef enum {
  Counter__St_1_S31,
  Counter__St_1_S30
} Counter__st_1;

Counter__st_1 Counter__st_1_of_string(char* s);

char* string_of_Counter__st_1(Counter__st_1 x, char* buf);

typedef enum {
  Counter__St_Not_Counting,
  Counter__St_Counting
} Counter__st;

Counter__st Counter__st_of_string(char* s);

char* string_of_Counter__st(Counter__st x, char* buf);

#endif // COUNTER_TYPES_H
