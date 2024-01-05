/* --- Generated the 2/3/2023 at 17:18 --- */
/* --- heptagon compiler, version 1.05.00 (compiled sat. jan. 15 3:31:18 CET 2022) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts counter.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "counter.h"

void Counter__main_reset(Counter__main_mem* self) {
  self->v_24 = true;
  self->v_14 = true;
  self->v_6 = true;
  self->v = true;
  self->pnr = false;
  self->ck = Counter__St_Not_Counting;
}

void Counter__main_step(int start, int tick, Counter__main_out* _out,
                        Counter__main_mem* self) {
  
  int r_St_Counting;
  Counter__st s_St_Counting;
  int r_St_Not_Counting;
  Counter__st s_St_Not_Counting;
  int v_30;
  int v_27;
  int v_26;
  int v_25;
  int v_23;
  int v_21;
  int v_19;
  int v_18;
  int v_15;
  int v_13;
  int v_11;
  int v_9;
  int v_7;
  int v_5;
  int v_3;
  int v_1;
  int stop;
  int nr_St_Counting;
  Counter__st ns_St_Counting;
  int cout_St_Counting;
  int bout_St_Counting;
  int aout_St_Counting;
  int nr_St_Not_Counting;
  Counter__st ns_St_Not_Counting;
  int cout_St_Not_Counting;
  int bout_St_Not_Counting;
  int aout_St_Not_Counting;
  Counter__st ck_1;
  Counter__st s;
  Counter__st ns;
  int r;
  int nr;
  switch (self->ck) {
    case Counter__St_Not_Counting:
      if (start) {
        r_St_Not_Counting = true;
        s_St_Not_Counting = Counter__St_Counting;
      } else {
        r_St_Not_Counting = self->pnr;
        s_St_Not_Counting = Counter__St_Not_Counting;
      };
      s = s_St_Not_Counting;
      r = r_St_Not_Counting;
      break;
    case Counter__St_Counting:
      r_St_Counting = self->pnr;
      s_St_Counting = Counter__St_Counting;
      s = s_St_Counting;
      r = r_St_Counting;
      break;
    default:
      break;
  };
  ck_1 = s;
  switch (ck_1) {
    case Counter__St_Not_Counting:
      cout_St_Not_Counting = false;
      bout_St_Not_Counting = false;
      aout_St_Not_Counting = false;
      nr_St_Not_Counting = false;
      ns_St_Not_Counting = Counter__St_Not_Counting;
      _out->aout = aout_St_Not_Counting;
      _out->bout = bout_St_Not_Counting;
      _out->cout = cout_St_Not_Counting;
      ns = ns_St_Not_Counting;
      nr = nr_St_Not_Counting;
      break;
    case Counter__St_Counting:
      if (tick) {
        v_30 = self->v_28;
      } else {
        v_30 = self->v_29;
      };
      if (self->v_24) {
        v_25 = true;
      } else {
        v_25 = r;
      };
      if (v_25) {
        stop = false;
      } else {
        stop = v_30;
      };
      v_21 = !(self->v_20);
      v_18 = (self->v_16&&self->v_17);
      v_19 = (tick&&v_18);
      if (v_19) {
        v_23 = v_21;
      } else {
        v_23 = self->v_22;
      };
      if (self->v_14) {
        v_15 = true;
      } else {
        v_15 = r;
      };
      if (v_15) {
        cout_St_Counting = false;
      } else {
        cout_St_Counting = v_23;
      };
      v_11 = !(self->v_10);
      v_9 = (tick&&self->v_8);
      if (v_9) {
        v_13 = v_11;
      } else {
        v_13 = self->v_12;
      };
      if (self->v_6) {
        v_7 = true;
      } else {
        v_7 = r;
      };
      if (v_7) {
        bout_St_Counting = false;
      } else {
        bout_St_Counting = v_13;
      };
      v_3 = !(self->v_2);
      if (tick) {
        v_5 = v_3;
      } else {
        v_5 = self->v_4;
      };
      if (self->v) {
        v_1 = true;
      } else {
        v_1 = r;
      };
      if (v_1) {
        aout_St_Counting = false;
      } else {
        aout_St_Counting = v_5;
      };
      if (stop) {
        nr_St_Counting = true;
        ns_St_Counting = Counter__St_Not_Counting;
      } else {
        nr_St_Counting = false;
        ns_St_Counting = Counter__St_Counting;
      };
      _out->aout = aout_St_Counting;
      _out->bout = bout_St_Counting;
      v_26 = (_out->aout&&_out->bout);
      _out->cout = cout_St_Counting;
      v_27 = (v_26&&_out->cout);
      ns = ns_St_Counting;
      nr = nr_St_Counting;
      self->v_29 = stop;
      self->v_28 = v_27;
      self->v_24 = false;
      self->v_22 = _out->cout;
      self->v_20 = _out->cout;
      self->v_17 = _out->bout;
      self->v_16 = _out->aout;
      self->v_14 = false;
      self->v_12 = _out->bout;
      self->v_10 = _out->bout;
      self->v_8 = _out->aout;
      self->v_6 = false;
      self->v_4 = _out->aout;
      self->v_2 = _out->aout;
      self->v = false;
      break;
    default:
      break;
  };
  self->pnr = nr;
  self->ck = ns;;
}

void Counter__main2_reset(Counter__main2_mem* self) {
  self->v_49 = false;
  self->v_48 = false;
  self->v_47 = false;
  self->v_46 = Counter__St_1_S30;
  self->v_45 = false;
  self->v_44 = Counter__St_2_S20;
  self->v_43 = false;
  self->v_42 = Counter__St_3_S10;
  self->v_38 = true;
  self->v_34 = true;
  self->v = true;
  self->pnr_3 = false;
  self->ck = Counter__St_4_Not_Counting;
}

void Counter__main2_step(int start, int tick, Counter__main2_out* _out,
                         Counter__main2_mem* self) {
  
  int r_3_St_4_Counting;
  Counter__st_4 s_3_St_4_Counting;
  int r_3_St_4_Not_Counting;
  Counter__st_4 s_3_St_4_Not_Counting;
  int r_2_St_3_S11;
  Counter__st_3 s_2_St_3_S11;
  int r_2_St_3_S10;
  Counter__st_3 s_2_St_3_S10;
  Counter__st_3 ck_3;
  int nr_2_St_3_S11;
  Counter__st_3 ns_2_St_3_S11;
  int aout_St_4_Counting_St_3_S11;
  int nr_2_St_3_S10;
  Counter__st_3 ns_2_St_3_S10;
  int aout_St_4_Counting_St_3_S10;
  Counter__st_3 ck_4;
  int r_1_St_2_S21;
  Counter__st_2 s_1_St_2_S21;
  int r_1_St_2_S20;
  Counter__st_2 s_1_St_2_S20;
  Counter__st_2 ck_5;
  int nr_1_St_2_S21;
  Counter__st_2 ns_1_St_2_S21;
  int bout_St_4_Counting_St_2_S21;
  int nr_1_St_2_S20;
  Counter__st_2 ns_1_St_2_S20;
  int bout_St_4_Counting_St_2_S20;
  Counter__st_2 ck_6;
  int r_St_1_S31;
  Counter__st_1 s_St_1_S31;
  int r_St_1_S30;
  Counter__st_1 s_St_1_S30;
  Counter__st_1 ck_7;
  int nr_St_1_S31;
  Counter__st_1 ns_St_1_S31;
  int cout_St_4_Counting_St_1_S31;
  int nr_St_1_S30;
  Counter__st_1 ns_St_1_S30;
  int cout_St_4_Counting_St_1_S30;
  Counter__st_1 ck_8;
  int v_41;
  int v_39;
  int v_37;
  int v_35;
  int v_33;
  int v_31;
  Counter__st_3 s_2;
  Counter__st_3 ns_2;
  int r_2;
  int nr_2;
  int pnr_2;
  Counter__st_2 s_1;
  Counter__st_2 ns_1;
  int r_1;
  int nr_1;
  int pnr_1;
  Counter__st_1 s;
  Counter__st_1 ns;
  int r;
  int nr;
  int pnr;
  int lt2_1;
  int lt1_1;
  int lt1;
  int lt2;
  int stop;
  int nr_3_St_4_Counting;
  Counter__st_4 ns_3_St_4_Counting;
  int cout_St_4_Counting;
  int bout_St_4_Counting;
  int aout_St_4_Counting;
  int nr_3_St_4_Not_Counting;
  Counter__st_4 ns_3_St_4_Not_Counting;
  int cout_St_4_Not_Counting;
  int bout_St_4_Not_Counting;
  int aout_St_4_Not_Counting;
  Counter__st_4 ck_2;
  Counter__st_4 s_3;
  Counter__st_4 ns_3;
  int r_3;
  int nr_3;
  switch (self->ck) {
    case Counter__St_4_Not_Counting:
      if (start) {
        r_3_St_4_Not_Counting = true;
        s_3_St_4_Not_Counting = Counter__St_4_Counting;
      } else {
        r_3_St_4_Not_Counting = self->pnr_3;
        s_3_St_4_Not_Counting = Counter__St_4_Not_Counting;
      };
      s_3 = s_3_St_4_Not_Counting;
      r_3 = r_3_St_4_Not_Counting;
      break;
    case Counter__St_4_Counting:
      r_3_St_4_Counting = self->pnr_3;
      s_3_St_4_Counting = Counter__St_4_Counting;
      s_3 = s_3_St_4_Counting;
      r_3 = r_3_St_4_Counting;
      break;
    default:
      break;
  };
  ck_2 = s_3;
  switch (ck_2) {
    case Counter__St_4_Not_Counting:
      cout_St_4_Not_Counting = false;
      bout_St_4_Not_Counting = false;
      aout_St_4_Not_Counting = false;
      nr_3_St_4_Not_Counting = false;
      ns_3_St_4_Not_Counting = Counter__St_4_Not_Counting;
      ns_3 = ns_3_St_4_Not_Counting;
      nr_3 = nr_3_St_4_Not_Counting;
      _out->cout = cout_St_4_Not_Counting;
      _out->bout = bout_St_4_Not_Counting;
      _out->aout = aout_St_4_Not_Counting;
      break;
    case Counter__St_4_Counting:
      if (r_3) {
        lt2_1 = false;
        lt1_1 = false;
        pnr = false;
        ck_7 = Counter__St_1_S30;
        pnr_1 = false;
        ck_5 = Counter__St_2_S20;
        pnr_2 = false;
        ck_3 = Counter__St_3_S10;
      } else {
        lt2_1 = self->v_49;
        lt1_1 = self->v_48;
        pnr = self->v_47;
        ck_7 = self->v_46;
        pnr_1 = self->v_45;
        ck_5 = self->v_44;
        pnr_2 = self->v_43;
        ck_3 = self->v_42;
      };
      if (self->v_38) {
        v_39 = true;
      } else {
        v_39 = r_3;
      };
      if (self->v_34) {
        v_35 = true;
      } else {
        v_35 = r_3;
      };
      v_33 = (tick&&self->v_32);
      if (self->v) {
        v_31 = true;
      } else {
        v_31 = r_3;
      };
      if (v_31) {
        lt1 = false;
      } else {
        lt1 = v_33;
      };
      v_37 = (lt1&&self->v_36);
      if (v_35) {
        lt2 = false;
      } else {
        lt2 = v_37;
      };
      v_41 = (lt2&&self->v_40);
      if (v_39) {
        stop = false;
      } else {
        stop = v_41;
      };
      if (stop) {
        nr_3_St_4_Counting = true;
        ns_3_St_4_Counting = Counter__St_4_Not_Counting;
      } else {
        nr_3_St_4_Counting = false;
        ns_3_St_4_Counting = Counter__St_4_Counting;
      };
      ns_3 = ns_3_St_4_Counting;
      nr_3 = nr_3_St_4_Counting;
      switch (ck_7) {
        case Counter__St_1_S30:
          if (lt2) {
            r_St_1_S30 = true;
            s_St_1_S30 = Counter__St_1_S31;
          } else {
            r_St_1_S30 = pnr;
            s_St_1_S30 = Counter__St_1_S30;
          };
          s = s_St_1_S30;
          r = r_St_1_S30;
          break;
        case Counter__St_1_S31:
          if (lt2) {
            r_St_1_S31 = true;
            s_St_1_S31 = Counter__St_1_S30;
          } else {
            r_St_1_S31 = pnr;
            s_St_1_S31 = Counter__St_1_S31;
          };
          s = s_St_1_S31;
          r = r_St_1_S31;
          break;
        default:
          break;
      };
      ck_8 = s;
      switch (ck_8) {
        case Counter__St_1_S30:
          cout_St_4_Counting_St_1_S30 = false;
          nr_St_1_S30 = false;
          ns_St_1_S30 = Counter__St_1_S30;
          cout_St_4_Counting = cout_St_4_Counting_St_1_S30;
          ns = ns_St_1_S30;
          nr = nr_St_1_S30;
          break;
        case Counter__St_1_S31:
          cout_St_4_Counting_St_1_S31 = true;
          nr_St_1_S31 = false;
          ns_St_1_S31 = Counter__St_1_S31;
          cout_St_4_Counting = cout_St_4_Counting_St_1_S31;
          ns = ns_St_1_S31;
          nr = nr_St_1_S31;
          break;
        default:
          break;
      };
      switch (ck_5) {
        case Counter__St_2_S20:
          if (lt1) {
            r_1_St_2_S20 = true;
            s_1_St_2_S20 = Counter__St_2_S21;
          } else {
            r_1_St_2_S20 = pnr_1;
            s_1_St_2_S20 = Counter__St_2_S20;
          };
          s_1 = s_1_St_2_S20;
          r_1 = r_1_St_2_S20;
          break;
        case Counter__St_2_S21:
          if (lt1) {
            r_1_St_2_S21 = true;
            s_1_St_2_S21 = Counter__St_2_S20;
          } else {
            r_1_St_2_S21 = pnr_1;
            s_1_St_2_S21 = Counter__St_2_S21;
          };
          s_1 = s_1_St_2_S21;
          r_1 = r_1_St_2_S21;
          break;
        default:
          break;
      };
      ck_6 = s_1;
      _out->cout = cout_St_4_Counting;
      switch (ck_6) {
        case Counter__St_2_S20:
          bout_St_4_Counting_St_2_S20 = false;
          nr_1_St_2_S20 = false;
          ns_1_St_2_S20 = Counter__St_2_S20;
          bout_St_4_Counting = bout_St_4_Counting_St_2_S20;
          ns_1 = ns_1_St_2_S20;
          nr_1 = nr_1_St_2_S20;
          break;
        case Counter__St_2_S21:
          bout_St_4_Counting_St_2_S21 = true;
          nr_1_St_2_S21 = false;
          ns_1_St_2_S21 = Counter__St_2_S21;
          bout_St_4_Counting = bout_St_4_Counting_St_2_S21;
          ns_1 = ns_1_St_2_S21;
          nr_1 = nr_1_St_2_S21;
          break;
        default:
          break;
      };
      switch (ck_3) {
        case Counter__St_3_S10:
          if (tick) {
            r_2_St_3_S10 = true;
            s_2_St_3_S10 = Counter__St_3_S11;
          } else {
            r_2_St_3_S10 = pnr_2;
            s_2_St_3_S10 = Counter__St_3_S10;
          };
          s_2 = s_2_St_3_S10;
          r_2 = r_2_St_3_S10;
          break;
        case Counter__St_3_S11:
          if (tick) {
            r_2_St_3_S11 = true;
            s_2_St_3_S11 = Counter__St_3_S10;
          } else {
            r_2_St_3_S11 = pnr_2;
            s_2_St_3_S11 = Counter__St_3_S11;
          };
          s_2 = s_2_St_3_S11;
          r_2 = r_2_St_3_S11;
          break;
        default:
          break;
      };
      ck_4 = s_2;
      _out->bout = bout_St_4_Counting;
      switch (ck_4) {
        case Counter__St_3_S10:
          aout_St_4_Counting_St_3_S10 = false;
          nr_2_St_3_S10 = false;
          ns_2_St_3_S10 = Counter__St_3_S10;
          aout_St_4_Counting = aout_St_4_Counting_St_3_S10;
          ns_2 = ns_2_St_3_S10;
          nr_2 = nr_2_St_3_S10;
          break;
        case Counter__St_3_S11:
          aout_St_4_Counting_St_3_S11 = true;
          nr_2_St_3_S11 = false;
          ns_2_St_3_S11 = Counter__St_3_S11;
          aout_St_4_Counting = aout_St_4_Counting_St_3_S11;
          ns_2 = ns_2_St_3_S11;
          nr_2 = nr_2_St_3_S11;
          break;
        default:
          break;
      };
      _out->aout = aout_St_4_Counting;
      self->stop_1 = stop;
      self->v_49 = lt2;
      self->v_48 = lt1;
      self->v_47 = nr;
      self->v_46 = ns;
      self->v_45 = nr_1;
      self->v_44 = ns_1;
      self->v_43 = nr_2;
      self->v_42 = ns_2;
      self->v_40 = _out->cout;
      self->v_38 = false;
      self->v_36 = _out->bout;
      self->v_34 = false;
      self->v_32 = _out->aout;
      self->v = false;
      break;
    default:
      break;
  };
  self->pnr_3 = nr_3;
  self->ck = ns_3;;
}

void Counter__display_reset(Counter__display_mem* self) {
  Counter__main_reset(&self->main);
  self->mem_tick = false;
  self->v_50 = false;
  self->mem_start = false;
  self->v = true;
}

void Counter__display_step(Counter__display_out* _out,
                           Counter__display_mem* self) {
  Counter__main_out Counter__main_out_st;
  _out->tick = self->mem_tick;
  _out->start = self->mem_start;
  Counter__main_step(_out->start, _out->tick, &Counter__main_out_st,
                     &self->main);
  _out->aout = Counter__main_out_st.aout;
  _out->bout = Counter__main_out_st.bout;
  _out->cout = Counter__main_out_st.cout;
  self->mem_tick = self->v_50;
  self->v_50 = true;
  self->mem_start = self->v;
  self->v = false;
}

