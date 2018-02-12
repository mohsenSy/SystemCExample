#ifndef CHANNEL_H
#define CHANNEL_H

#include <packet.h>

SC_MODULE(channel) {
  sc_in<packet_type> tpackin;
  sc_in<packet_type> rpackin;
  sc_out<packet_type> tpackout;
  sc_out<packet_type> rpackout;

  packet_type packin;
  packet_type packout;

  packet_type ackin;
  packet_type ackout;

  void receive_data();
  void send_ack();

  SC_CTOR(channel) {
    SC_METHOD(receive_data);
    sensitive << tpackin;

    SC_METHOD(send_ack);
    sensitive << rpackin;
  }
};

#endif
