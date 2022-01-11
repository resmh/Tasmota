
const size_t EMBEDQR_INTERFACE_SIZE = 161;
const char EMBEDQR_INTERFACE_COMPRESSED[] PROGMEM = "\x3D\x02\xB1\xCC\x24\x63\x3E\x7C\x3E\xCD\x5F\xD3\xED\x68\x87\xC3\xEC\xD5\xF0\x8F"
                             "\xB5\xEA\x32\x09\x9F\x0F\xB1\x37\xC3\x02\xB3\x23\xCC\x70\x58\x19\xA1\xE2\x99\xB2"
                             "\x8E\xBB\x0B\x47\xB8\xF3\x0D\xF5\x3F\x9E\x03\xC0\xB3\xE7\x99\xE4\x7D\x1C\x7C\x46"
                             "\xC3\xC1\xF6\x7E\x1E\x87\x60\x56\x39\x84\x7E\x1E\x9B\xC3\x05\xD2\xA3\x21\x8C\xF8"
                             "\x7D\x98\xD0\x98\x21\xE6\xBA\x09\x99\xAA\xEC\xE6\x78\x3E\xD5\x86\x1B\x19\x47\xC3"
                             "\xEF\x46\xD8\xF3\x3B\x0F\x59\xF6\x7E\x1E\x83\xBE\x8E\xC3\xF0";

#define  EMBEDQR_INTERFACE       Decompress(EMBEDQR_INTERFACE_COMPRESSED,EMBEDQR_INTERFACE_SIZE).c_str()