/* --- Generated the 2/3/2023 at 17:18 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sat. jan. 15 3:31:18 CET 2022) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts counter.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "counter_types.h"

Counter__st_4 Counter__st_4_of_string(char* s) {
  if ((strcmp(s, "St_4_Not_Counting")==0)) {
    return Counter__St_4_Not_Counting;
  };
  if ((strcmp(s, "St_4_Counting")==0)) {
    return Counter__St_4_Counting;
  };
}

char* string_of_Counter__st_4(Counter__st_4 x, char* buf) {
  switch (x) {
    case Counter__St_4_Not_Counting:
      strcpy(buf, "St_4_Not_Counting");
      break;
    case Counter__St_4_Counting:
      strcpy(buf, "St_4_Counting");
      break;
    default:
      break;
  };
  return buf;
}

Counter__st_3 Counter__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_S11")==0)) {
    return Counter__St_3_S11;
  };
  if ((strcmp(s, "St_3_S10")==0)) {
    return Counter__St_3_S10;
  };
}

char* string_of_Counter__st_3(Counter__st_3 x, char* buf) {
  switch (x) {
    case Counter__St_3_S11:
      strcpy(buf, "St_3_S11");
      break;
    case Counter__St_3_S10:
      strcpy(buf, "St_3_S10");
      break;
    default:
      break;
  };
  return buf;
}

Counter__st_2 Counter__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_S21")==0)) {
    return Counter__St_2_S21;
  };
  if ((strcmp(s, "St_2_S20")==0)) {
    return Counter__St_2_S20;
  };
}

char* string_of_Counter__st_2(Counter__st_2 x, char* buf) {
  switch (x) {
    case Counter__St_2_S21:
      strcpy(buf, "St_2_S21");
      break;
    case Counter__St_2_S20:
      strcpy(buf, "St_2_S20");
      break;
    default:
      break;
  };
  return buf;
}

Counter__st_1 Counter__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_S31")==0)) {
    return Counter__St_1_S31;
  };
  if ((strcmp(s, "St_1_S30")==0)) {
    return Counter__St_1_S30;
  };
}

char* string_of_Counter__st_1(Counter__st_1 x, char* buf) {
  switch (x) {
    case Counter__St_1_S31:
      strcpy(buf, "St_1_S31");
      break;
    case Counter__St_1_S30:
      strcpy(buf, "St_1_S30");
      break;
    default:
      break;
  };
  return buf;
}

Counter__st Counter__st_of_string(char* s) {
  if ((strcmp(s, "St_Not_Counting")==0)) {
    return Counter__St_Not_Counting;
  };
  if ((strcmp(s, "St_Counting")==0)) {
    return Counter__St_Counting;
  };
}

char* string_of_Counter__st(Counter__st x, char* buf) {
  switch (x) {
    case Counter__St_Not_Counting:
      strcpy(buf, "St_Not_Counting");
      break;
    case Counter__St_Counting:
      strcpy(buf, "St_Counting");
      break;
    default:
      break;
  };
  return buf;
}

