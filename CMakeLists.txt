cmake_minimum_required(VERSION 2.8)
add_definitions("-Wall -std=c++11")
add_executable(raspi-dht
  main.cpp
  adafruit_dht/source/common_dht_read.c
  adafruit_dht/source/Raspberry_Pi_2/pi_2_dht_read.c
  adafruit_dht/source/Raspberry_Pi_2/pi_2_mmio.c
)
