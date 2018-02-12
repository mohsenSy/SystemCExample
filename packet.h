#ifndef PACKET_H
#define PACKET_H
#include <systemc.h>

struct packet_type {
  long info;
  int seq;
  int retry;

  inline bool operator == (const packet_type& rhs) const
  {
    return (rhs.info == info && rhs.seq == seq && rhs.retry == retry);
  }
};

extern void sc_trace(sc_trace_file *tf, const packet_type& v, const sc_string& NAME);

#endif
