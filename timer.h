#ifndef TIMER_H
#define TIMER_H

#include <systemc.h>

SC_MODULE(timer) {
  sc_inout<bool> start;
  sc_out<bool> timeout;
  sc_in<bool> clock;

  int count;

  void runtimer();

  SC_CTOR(timer) {
    SC_THREAD(runtimer);
    sensitive_pos << clock;
    sensitive << start;
    count = 0;
  }
};

#endif
