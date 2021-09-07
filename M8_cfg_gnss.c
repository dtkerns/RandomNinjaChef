// From some conversations, ramblings and postings on the u-Blox forum
// https://portal.u-blox.com/s/question/0D52p00008HKEEYCA5/ublox-gps-galileo-enabling-for-ubx-m8
// https://portal.u-blox.com/s/question/0D52p0000BLc5JKCQZ/m8n-write-config-cfg-edited
//****************************************************************************

uint8_t ubx_cfg_gnss[] = { // Full spectrum enabling GPS, GLONASS, SBAS, QZSS and GALILEO, disable BEIDOU/IMES
  0xB5,0x62,0x06,0x3E,0x3C,0x00,
  0x00,0x00,0x20,0x07,
  0x00,0x08,0x10,0x00,0x01,0x00,0x01,0x01,
  0x01,0x01,0x03,0x00,0x01,0x00,0x01,0x01,
  0x02,0x04,0x08,0x00,0x01,0x00,0x01,0x01,
  0x03,0x08,0x10,0x00,0x00,0x00,0x01,0x01,
  0x04,0x00,0x08,0x00,0x00,0x00,0x01,0x01,
  0x05,0x00,0x03,0x00,0x01,0x00,0x01,0x01,
  0x06,0x08,0x0E,0x00,0x01,0x00,0x01,0x01,
  0x30,0xAD };

SendUBLOX(hUARTGPS, sizeof(ubx_cfg_gnss), ubx_cfg_gnss); // Use sizeof() for array, strlen() will catch the NULs

// As escaped characters
// "\xB5\x62\x06\x3E\x3C\x00\x00\x00\x20\x07\x00\x08\x10\x00\x01\x00\x01\x01\x01\x01\x03\x00\x01\x00\x01\x01\x02\x04\x08\x00\x01\x00\x01\x01\x03\x08\x10\x00\x00\x00\x01\x01\x04\x00\x08\x00\x00\x00\x01\x01\x05\x00\x03\x00\x01\x00\x01\x01\x06\x08\x0E\x00\x01\x00\x01\x01\x30\xAD"
