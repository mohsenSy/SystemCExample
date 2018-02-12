#ifndef DISPLAY_H
#define DISPLAY_H

#include <systemc.h>
#include <packet.h>

SC_MODULE(display) {
  sc_in<long> din;

  void print_data();

  SC_CTOR(display) {
    SC_METHOD(print_data);
    sensitive << din;
  }
};

#endif
