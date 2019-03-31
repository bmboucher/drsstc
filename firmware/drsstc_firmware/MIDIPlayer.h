#pragma once

#include <arduino.h>

void setup_timers();

void play_midi_note(uint8_t note, uint8_t volume = 1, bool timer1 = true);
void silence_midi(bool timer1 = true);
void set_pwm_off();

void start_midi(byte* midi_pointer, unsigned long ticks_per_beat);
bool play_midi();   // Returns false when song is over
void pause_midi();
void resume_midi();

extern const byte MARIO[] PROGMEM;
void load_next_song();


void send_single_pulse(unsigned long us);