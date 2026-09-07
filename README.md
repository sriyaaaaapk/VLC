# Visible Light Communication System

Hardware-based Visible Light Communication (VLC) system using
Arduino, LED transmitter, BPW34 photodiode receiver and LM358
transimpedance amplifier.

## Project Objective

To investigate visible light communication using different LED
wavelengths and characterize receiver response and communication
performance.

## Current Progress

- [x] Stage 1 – BPW34 + LM358 receiver verification
- [x] Stage 2 – LED-to-photodiode optical link verification
- [ ] Stage 3 – OOK communication
- [ ] Stage 4 – OLED message display
- [ ] Stage 5 – Distance characterization
- [ ] Stage 6 – Data-rate characterization
- [ ] Stage 7 – Comparison of LED colors

## Hardware

- Arduino UNO
- BPW34 photodiode
- LM358 op-amp
- LED transmitter
- 220 Ω LED resistor
- OLED display
- Other LED wavelengths for comparison

## Communication Technique

On-Off Keying (OOK)

## Receiver

BPW34 photodiode → LM358 transimpedance amplifier → Arduino ADC
