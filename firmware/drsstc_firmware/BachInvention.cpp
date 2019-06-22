#include "MIDIPlayer.h"

// converted from invent1.mid - 1439 bytes total
extern const byte BACH_INVENTION[] PROGMEM = 
{
      0x01,0xf0,0x2a,0x4a,0xca, //      0 BEGIN PROGRAM (240 ticks/beat, tempo = 697674 us/beat)
                0xbc,0xbc,0x05, //     60 T1 ON, NOTE  60 VOLUME  5
                0xbc,0xbe,0x05, //     60 T1 ON, NOTE  62 VOLUME  5
                0xbc,0xc0,0x05, //     60 T1 ON, NOTE  64 VOLUME  5
                0xbc,0xc1,0x05, //     60 T1 ON, NOTE  65 VOLUME  5
                0xbc,0xbe,0x05, //     60 T1 ON, NOTE  62 VOLUME  5
                0xbc,0xc0,0x05, //     60 T1 ON, NOTE  64 VOLUME  5
                0xbc,0xbc,0x05, //     60 T1 ON, NOTE  60 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0x30,0x05, //     60 T2 ON, NOTE  48 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x32,0x05, //      0 T2 ON, NOTE  50 VOLUME  5
                0xbc,0x34,0x05, //     60 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x35,0x05, //      0 T2 ON, NOTE  53 VOLUME  5
                0x9e,0xc5,0x05, //     30 T1 ON, NOTE  69 VOLUME  5
                0x9e,0xc7,0x05, //     30 T1 ON, NOTE  71 VOLUME  5
                0x80,0x32,0x05, //      0 T2 ON, NOTE  50 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0x30,0x05, //     60 T2 ON, NOTE  48 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x2b,0x05, //      0 T2 ON, NOTE  43 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                     0x80,0x00, //      0 T2 OFF
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0xbc,0x37,0x05, //     60 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0x3b,0x05, //     60 T2 ON, NOTE  59 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0x9e,0xcc,0x05, //     30 T1 ON, NOTE  76 VOLUME  5
                0x9e,0xcd,0x05, //     30 T1 ON, NOTE  77 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0x80,0x3b,0x05, //      0 T2 ON, NOTE  59 VOLUME  5
                0xbc,0x37,0x05, //     60 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0x80,0x3b,0x05, //      0 T2 ON, NOTE  59 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x3b,0x05, //      0 T2 ON, NOTE  59 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x36,0x05, //      0 T2 ON, NOTE  54 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x3b,0x05, //      0 T2 ON, NOTE  59 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0xc2,0x05, //     60 T1 ON, NOTE  66 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                     0xb2,0x00, //     50 T2 OFF
                0x8a,0x32,0x05, //     10 T2 ON, NOTE  50 VOLUME  5
                0xbc,0xbe,0x05, //     60 T1 ON, NOTE  62 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0x36,0x05, //     60 T2 ON, NOTE  54 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0x9e,0xc7,0x05, //     30 T1 ON, NOTE  71 VOLUME  5
                0x9e,0xc8,0x05, //     30 T1 ON, NOTE  72 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0x36,0x05, //     60 T2 ON, NOTE  54 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x32,0x05, //      0 T2 ON, NOTE  50 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0x80,0x2f,0x05, //      0 T2 ON, NOTE  47 VOLUME  5
                0xbc,0xc2,0x05, //     60 T1 ON, NOTE  66 VOLUME  5
                0xbc,0xc0,0x05, //     60 T1 ON, NOTE  64 VOLUME  5
                0x80,0x30,0x05, //      0 T2 ON, NOTE  48 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0xc2,0x05, //     60 T1 ON, NOTE  66 VOLUME  5
                0x80,0x32,0x05, //      0 T2 ON, NOTE  50 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x36,0x05, //      0 T2 ON, NOTE  54 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x2f,0x05, //      0 T2 ON, NOTE  47 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x9e,0xc8,0x05, //     30 T1 ON, NOTE  72 VOLUME  5
                0x9e,0xca,0x05, //     30 T1 ON, NOTE  74 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0x80,0x30,0x05, //      0 T2 ON, NOTE  48 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x32,0x05, //      0 T2 ON, NOTE  50 VOLUME  5
                0x9e,0xc8,0x05, //     30 T1 ON, NOTE  72 VOLUME  5
                0x9e,0xc7,0x05, //     30 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x26,0x05, //      0 T2 ON, NOTE  38 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                     0xbc,0x00, //     60 T2 OFF
                0xbc,0x2b,0x05, //     60 T2 ON, NOTE  43 VOLUME  5
                0xbc,0xad,0x05, //     60 T1 ON, NOTE  45 VOLUME  5
                     0x80,0x00, //      0 T2 OFF
                0xbc,0xaf,0x05, //     60 T1 ON, NOTE  47 VOLUME  5
                0xbc,0xb0,0x05, //     60 T1 ON, NOTE  48 VOLUME  5
                0xbc,0xad,0x05, //     60 T1 ON, NOTE  45 VOLUME  5
                0xbc,0xaf,0x05, //     60 T1 ON, NOTE  47 VOLUME  5
                0xbc,0xab,0x05, //     60 T1 ON, NOTE  43 VOLUME  5
                0xbc,0xb2,0x05, //     60 T1 ON, NOTE  50 VOLUME  5
                0xbc,0x43,0x05, //     60 T2 ON, NOTE  67 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x36,0x05, //      0 T2 ON, NOTE  54 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0xc2,0x05, //     60 T1 ON, NOTE  66 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0x32,0x05, //     60 T2 ON, NOTE  50 VOLUME  5
                0xbc,0xb4,0x05, //     60 T1 ON, NOTE  52 VOLUME  5
                     0x80,0x00, //      0 T2 OFF
                0xbc,0xb6,0x05, //     60 T1 ON, NOTE  54 VOLUME  5
                0xbc,0xb7,0x05, //     60 T1 ON, NOTE  55 VOLUME  5
                0xbc,0xb4,0x05, //     60 T1 ON, NOTE  52 VOLUME  5
                0xbc,0xb6,0x05, //     60 T1 ON, NOTE  54 VOLUME  5
                0xbc,0xb2,0x05, //     60 T1 ON, NOTE  50 VOLUME  5
                0xbc,0xb9,0x05, //     60 T1 ON, NOTE  57 VOLUME  5
                0xbc,0x45,0x05, //     60 T2 ON, NOTE  69 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0x43,0x05, //     60 T2 ON, NOTE  67 VOLUME  5
                0xbc,0xc1,0x05, //     60 T1 ON, NOTE  65 VOLUME  5
                     0x80,0x00, //      0 T2 OFF
                0xbc,0xc0,0x05, //     60 T1 ON, NOTE  64 VOLUME  5
                0xbc,0xbe,0x05, //     60 T1 ON, NOTE  62 VOLUME  5
                0xbc,0xc1,0x05, //     60 T1 ON, NOTE  65 VOLUME  5
                0xbc,0xc0,0x05, //     60 T1 ON, NOTE  64 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0xc1,0x05, //     60 T1 ON, NOTE  65 VOLUME  5
                0xbc,0x4a,0x05, //     60 T2 ON, NOTE  74 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x41,0x05, //      0 T2 ON, NOTE  65 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0xbc,0x45,0x05, //     60 T2 ON, NOTE  69 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                     0x80,0x00, //      0 T2 OFF
                0xbc,0xc1,0x05, //     60 T1 ON, NOTE  65 VOLUME  5
                0xbc,0xc0,0x05, //     60 T1 ON, NOTE  64 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0xc1,0x05, //     60 T1 ON, NOTE  65 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0x4c,0x05, //     60 T2 ON, NOTE  76 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x41,0x05, //      0 T2 ON, NOTE  65 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x43,0x05, //      0 T2 ON, NOTE  67 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0xbc,0xc9,0x05, //     60 T1 ON, NOTE  73 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x41,0x05, //      0 T2 ON, NOTE  65 VOLUME  5
                0xbc,0x46,0x05, //     60 T2 ON, NOTE  70 VOLUME  5
                0xbc,0xc9,0x05, //     60 T1 ON, NOTE  73 VOLUME  5
                0x80,0x45,0x05, //      0 T2 ON, NOTE  69 VOLUME  5
                0xbc,0x43,0x05, //     60 T2 ON, NOTE  67 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x41,0x05, //      0 T2 ON, NOTE  65 VOLUME  5
                0xbc,0x45,0x05, //     60 T2 ON, NOTE  69 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x43,0x05, //      0 T2 ON, NOTE  67 VOLUME  5
                0xbc,0x46,0x05, //     60 T2 ON, NOTE  70 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0x80,0x45,0x05, //      0 T2 ON, NOTE  69 VOLUME  5
                0xbc,0x43,0x05, //     60 T2 ON, NOTE  67 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x41,0x05, //      0 T2 ON, NOTE  65 VOLUME  5
                0xbc,0x40,0x05, //     60 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0x41,0x05, //     60 T2 ON, NOTE  65 VOLUME  5
                0xbc,0xc9,0x05, //     60 T1 ON, NOTE  73 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0xbc,0x43,0x05, //     60 T2 ON, NOTE  67 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x41,0x05, //      0 T2 ON, NOTE  65 VOLUME  5
                0xbc,0x40,0x05, //     60 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xc2,0x05, //     60 T1 ON, NOTE  66 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0x3c,0x05, //     60 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xc4,0x05, //     60 T1 ON, NOTE  68 VOLUME  5
                0x80,0x3b,0x05, //      0 T2 ON, NOTE  59 VOLUME  5
                0xbc,0x3e,0x05, //     60 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0x40,0x05, //     60 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0x3c,0x05, //     60 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x3b,0x05, //      0 T2 ON, NOTE  59 VOLUME  5
                0xbc,0x39,0x05, //     60 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x38,0x05, //      0 T2 ON, NOTE  56 VOLUME  5
                0xbc,0x3b,0x05, //     60 T2 ON, NOTE  59 VOLUME  5
                0xbc,0x39,0x05, //     60 T2 ON, NOTE  57 VOLUME  5
                0xbc,0x3c,0x05, //     60 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xbb,0x05, //     60 T1 ON, NOTE  59 VOLUME  5
                     0x80,0x00, //      0 T2 OFF
                0xbc,0x40,0x05, //     60 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xc2,0x05, //     60 T1 ON, NOTE  66 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xc4,0x05, //     60 T1 ON, NOTE  68 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0x9e,0x3c,0x05, //     30 T2 ON, NOTE  60 VOLUME  5
                0x9e,0xc2,0x05, //     30 T1 ON, NOTE  66 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xc4,0x05, //     60 T1 ON, NOTE  68 VOLUME  5
                0xbc,0xc0,0x05, //     60 T1 ON, NOTE  64 VOLUME  5
                     0x80,0x00, //      0 T2 OFF
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x3b,0x05, //      0 T2 ON, NOTE  59 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x36,0x05, //      0 T2 ON, NOTE  54 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x38,0x05, //      0 T2 ON, NOTE  56 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x3b,0x05, //      0 T2 ON, NOTE  59 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xd0,0x05, //     60 T1 ON, NOTE  80 VOLUME  5
                0x80,0x3b,0x05, //      0 T2 ON, NOTE  59 VOLUME  5
                0xbc,0xd3,0x05, //     60 T1 ON, NOTE  83 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x41,0x05, //      0 T2 ON, NOTE  65 VOLUME  5
                0xbc,0xc4,0x05, //     60 T1 ON, NOTE  68 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0x9e,0xca,0x05, //     30 T1 ON, NOTE  74 VOLUME  5
                0x9e,0xc8,0x05, //     30 T1 ON, NOTE  72 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0xbc,0x39,0x05, //     60 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0x80,0x2d,0x05, //      0 T2 ON, NOTE  45 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                     0x80,0x00, //      0 T2 OFF
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0xbc,0x40,0x05, //     60 T2 ON, NOTE  64 VOLUME  5
                0xbc,0x3e,0x05, //     60 T2 ON, NOTE  62 VOLUME  5
                0xbc,0x3c,0x05, //     60 T2 ON, NOTE  60 VOLUME  5
                0xbc,0x3b,0x05, //     60 T2 ON, NOTE  59 VOLUME  5
                0xbc,0x3e,0x05, //     60 T2 ON, NOTE  62 VOLUME  5
                0xbc,0x3d,0x05, //     60 T2 ON, NOTE  61 VOLUME  5
                0xbc,0x40,0x05, //     60 T2 ON, NOTE  64 VOLUME  5
                0xbc,0x3e,0x05, //     60 T2 ON, NOTE  62 VOLUME  5
                     0xb2,0x80, //     50 T1 OFF
                0x8a,0xcc,0x05, //     10 T1 ON, NOTE  76 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                     0xb2,0x00, //     50 T2 OFF
                0x8a,0x39,0x05, //     10 T2 ON, NOTE  57 VOLUME  5
                0xbc,0x3b,0x05, //     60 T2 ON, NOTE  59 VOLUME  5
                0xbc,0x3c,0x05, //     60 T2 ON, NOTE  60 VOLUME  5
                0xbc,0x3e,0x05, //     60 T2 ON, NOTE  62 VOLUME  5
                0xbc,0x3b,0x05, //     60 T2 ON, NOTE  59 VOLUME  5
                0xbc,0x3c,0x05, //     60 T2 ON, NOTE  60 VOLUME  5
                0xbc,0x39,0x05, //     60 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xbb,0x05, //     60 T1 ON, NOTE  59 VOLUME  5
                     0x80,0x00, //      0 T2 OFF
                0xbc,0x4f,0x05, //     60 T2 ON, NOTE  79 VOLUME  5
                0xbc,0x4d,0x05, //     60 T2 ON, NOTE  77 VOLUME  5
                0xbc,0x4c,0x05, //     60 T2 ON, NOTE  76 VOLUME  5
                0xbc,0x4a,0x05, //     60 T2 ON, NOTE  74 VOLUME  5
                0xbc,0x4d,0x05, //     60 T2 ON, NOTE  77 VOLUME  5
                0xbc,0x4c,0x05, //     60 T2 ON, NOTE  76 VOLUME  5
                0xbc,0x4f,0x05, //     60 T2 ON, NOTE  79 VOLUME  5
                0xbc,0x4d,0x05, //     60 T2 ON, NOTE  77 VOLUME  5
                     0xb2,0x80, //     50 T1 OFF
                0x8a,0xbe,0x05, //     10 T1 ON, NOTE  62 VOLUME  5
                0xbc,0xbc,0x05, //     60 T1 ON, NOTE  60 VOLUME  5
                0xbc,0xbb,0x05, //     60 T1 ON, NOTE  59 VOLUME  5
                0xbc,0xb9,0x05, //     60 T1 ON, NOTE  57 VOLUME  5
                0xbc,0xbc,0x05, //     60 T1 ON, NOTE  60 VOLUME  5
                0xbc,0xbb,0x05, //     60 T1 ON, NOTE  59 VOLUME  5
                0xbc,0xbe,0x05, //     60 T1 ON, NOTE  62 VOLUME  5
                0xbc,0xbc,0x05, //     60 T1 ON, NOTE  60 VOLUME  5
                     0xb2,0x00, //     50 T2 OFF
                0x8a,0x4a,0x05, //     10 T2 ON, NOTE  74 VOLUME  5
                0xbc,0x4c,0x05, //     60 T2 ON, NOTE  76 VOLUME  5
                0xbc,0x4d,0x05, //     60 T2 ON, NOTE  77 VOLUME  5
                0xbc,0x4f,0x05, //     60 T2 ON, NOTE  79 VOLUME  5
                0xbc,0x4c,0x05, //     60 T2 ON, NOTE  76 VOLUME  5
                0xbc,0x4d,0x05, //     60 T2 ON, NOTE  77 VOLUME  5
                0xbc,0x4a,0x05, //     60 T2 ON, NOTE  74 VOLUME  5
                0xbc,0x4c,0x05, //     60 T2 ON, NOTE  76 VOLUME  5
                     0xb2,0x80, //     50 T1 OFF
                0x8a,0xb7,0x05, //     10 T1 ON, NOTE  55 VOLUME  5
                0xbc,0xb9,0x05, //     60 T1 ON, NOTE  57 VOLUME  5
                0xbc,0xba,0x05, //     60 T1 ON, NOTE  58 VOLUME  5
                0xbc,0xbc,0x05, //     60 T1 ON, NOTE  60 VOLUME  5
                0xbc,0xb9,0x05, //     60 T1 ON, NOTE  57 VOLUME  5
                0xbc,0xba,0x05, //     60 T1 ON, NOTE  58 VOLUME  5
                0xbc,0xb7,0x05, //     60 T1 ON, NOTE  55 VOLUME  5
                0xbc,0xb9,0x05, //     60 T1 ON, NOTE  57 VOLUME  5
                     0xb2,0x00, //     50 T2 OFF
                0x8a,0x48,0x05, //     10 T2 ON, NOTE  72 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x3a,0x05, //      0 T2 ON, NOTE  58 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x35,0x05, //      0 T2 ON, NOTE  53 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0x80,0x3c,0x05, //      0 T2 ON, NOTE  60 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0x80,0x3a,0x05, //      0 T2 ON, NOTE  58 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0xbc,0xcd,0x05, //     60 T1 ON, NOTE  77 VOLUME  5
                0x80,0x39,0x05, //      0 T2 ON, NOTE  57 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0x80,0x41,0x05, //      0 T2 ON, NOTE  65 VOLUME  5
                0xbc,0xd3,0x05, //     60 T1 ON, NOTE  83 VOLUME  5
                0xbc,0xd4,0x05, //     60 T1 ON, NOTE  84 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0xbc,0xd1,0x05, //     60 T1 ON, NOTE  81 VOLUME  5
                0xbc,0xd3,0x05, //     60 T1 ON, NOTE  83 VOLUME  5
                0x80,0x3e,0x05, //      0 T2 ON, NOTE  62 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0xbc,0xd4,0x05, //     60 T1 ON, NOTE  84 VOLUME  5
                0x80,0x40,0x05, //      0 T2 ON, NOTE  64 VOLUME  5
                0xbc,0x32,0x05, //     60 T2 ON, NOTE  50 VOLUME  5
                0xbc,0xcf,0x05, //     60 T1 ON, NOTE  79 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0x35,0x05, //     60 T2 ON, NOTE  53 VOLUME  5
                0xbc,0xcc,0x05, //     60 T1 ON, NOTE  76 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0x9e,0xcd,0x05, //     30 T1 ON, NOTE  77 VOLUME  5
                0x9e,0xcc,0x05, //     30 T1 ON, NOTE  76 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xca,0x05, //     60 T1 ON, NOTE  74 VOLUME  5
                0x80,0x35,0x05, //      0 T2 ON, NOTE  53 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x32,0x05, //      0 T2 ON, NOTE  50 VOLUME  5
                0xbc,0x34,0x05, //     60 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xc6,0x05, //     60 T1 ON, NOTE  70 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x30,0x05, //      0 T2 ON, NOTE  48 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0xbc,0xc1,0x05, //     60 T1 ON, NOTE  65 VOLUME  5
                0x80,0x32,0x05, //      0 T2 ON, NOTE  50 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0xbc,0xc3,0x05, //     60 T1 ON, NOTE  67 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xc6,0x05, //     60 T1 ON, NOTE  70 VOLUME  5
                0xbc,0xc5,0x05, //     60 T1 ON, NOTE  69 VOLUME  5
                0x80,0x35,0x05, //      0 T2 ON, NOTE  53 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0x80,0x32,0x05, //      0 T2 ON, NOTE  50 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x34,0x05, //      0 T2 ON, NOTE  52 VOLUME  5
                0xbc,0xc0,0x05, //     60 T1 ON, NOTE  64 VOLUME  5
                0x80,0x35,0x05, //      0 T2 ON, NOTE  53 VOLUME  5
                0xbc,0xbe,0x05, //     60 T1 ON, NOTE  62 VOLUME  5
                0x80,0x37,0x05, //      0 T2 ON, NOTE  55 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0xbc,0xc1,0x05, //     60 T1 ON, NOTE  65 VOLUME  5
                0x80,0x2b,0x05, //      0 T2 ON, NOTE  43 VOLUME  5
                0xbc,0xc7,0x05, //     60 T1 ON, NOTE  71 VOLUME  5
                0xbc,0xc8,0x05, //     60 T1 ON, NOTE  72 VOLUME  5
                0x80,0x43,0x05, //      0 T2 ON, NOTE  67 VOLUME  5
                0x07,0xc0,0x01, //    960 BOTH OFF
                     0x80,0x05  //      0 END PROGRAM
};
