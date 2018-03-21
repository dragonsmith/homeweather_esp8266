//30 px font "48-58"
const uint8_t custom_font30[348] U8G2_FONT_SECTION("custom_font30") =
  "\13\0\4\5\5\5\5\5\6\22\37\0\0\37\367\37\0\0\0\0\0\1C\60$\362CX\303\37\4\231"
  "\36*\267\30S\15\21\221\14!\211\20\223\4AM\61\266\234\202I\246\313\17>x\0\61\21\347gX"
  "K\271\330,(\201\206!\244\374\377\17\62$\362CX\3Q\5\21t\14\61\211\20\262\4\21Q\246e"
  "\321\345\372\203\17&'\227\351\362\3\42 y\246\0\63 \362CXCB\317@\22\305\226iYty"
  "\324\24c\313)\17H\321\245N\62]~\360\301\3\64>\362CX\3a\305\20V\14a\305\20V\14"
  "a\305\20V\14a\305\20V\14a\305\20V\14a\305\20V\14a\305\20V\14a\305\20V\14a\305"
  "\20V\14A\316<\2E\243E\227\277\1\0\65\35\362CXCB\317@\22\305\226\351\234\314?\370\200"
  "\353\262N\62]Z\1\311\63\16\1\66\32\362CXCB\317@\22\305\226\351\234\34\271\346\21(\242L"
  "\371\301\7\17\67\30\362CX\3Q\15\71\363\10\24Q\246e\321\345\215;\42\234\374\237\3\70\30\362"
  "CXCB\317@\22\305\226\351/\213qGD\246\277\374\340\203\7\71\32\362CX\303\37\4\231~\371"
  "\201\25\220<StY'\231^D\2\315C\12:\11\304A|\2\365@P\0\0\0";

//8x14px font codes "28-31,43,46,48-58"
const uint8_t custom_font_14[253] U8G2_FONT_SECTION("custom_font_14") =
  "\21\0\3\5\4\4\4\4\5\10\16\0\0\17\375\17\1\0\0\0\0\0\344\34\14\226\251Z\302\210\30\22"
  "(\236\0\35\14\226\251Z\2\305\223\21b\202\0\36\16\350\210zB\211\31A&X\374\33\0\37\16\350"
  "\210z\202\305\277!\61FT\30\0+\14f\310X\2\5\61\22(\10\0.\6\42\210\24\4\60\21\350"
  "\210\32\22\311V\310\210\20C\305\10\22\224\0\61\13\343\214:B\20\5\21\377\0\62\16\350\210\32\22\11"
  "\12\26LYD\202\22\63\17\350\210\32\22\11\12\26\311d\301\4\11J\64\34\350\210\32\302\204\10\23\42"
  "L\210\60!\302\204\10\23\42L\210\60!P\5\213\5\0\65\16\350\210\32\22I\26\14Y\60A\202\22"
  "\66\14\350\210\32\22I\26,\221\214\22\67\16\350\210\32\22\5\213\305\211`\361\14\0\70\13\350\210\32\22"
  "\311H\221\214\22\71\15\350\210\32\22\311(Y\60A\202\22:\7b\330\24\4\11\0\0\0";

//7px font codes "37,46,58,67,97,99,101,103-105,108-110,112,116,117,120,121,176"
const uint8_t custom_font_7[] U8G2_FONT_SECTION("custom_font7") =
  "\27\0\2\2\3\3\1\4\4\5\11\0\377\6\377\6\0\0\0\0!\0\245%\14}\354\242\352\6\31\244"
  "\226L\0.\5IT\2:\6YTR\0C\12tl\206\324 \203\70\4a\6c\344\16\25c\7"
  "cdF\214\3d\7cdTR\13e\6cdF:g\7\353\343\216\230\4h\7cd\242J*"
  "i\6aT\222\0l\6b\134R%m\7cd\322P*n\7cdT\262\2o\7cdFR"
  "#p\7cdF\32\22r\6c\344f\11s\7c\344TL\12t\7cdV\254\0u\10dl"
  "\242\231\24\0x\10dlb\222*\6y\10cd\222J#\1\260\6\333\336\272\0\0\0\0";


//rus font codes "66,86,68,75,78,79,80,82,83,84,89,67"
const uint8_t rus_font[] U8G2_FONT_SECTION("rus_font") =
  "\14\0\3\3\3\4\1\1\5\7\12\0\0\12\375\12\375\0\0\0\0\0\223B\16\326/*\25\241\260R"
  "\21\221.\25\0C\12\326/D\234\16\221\242\16D\21\327oJ%\211H\42\12\211B\222\303AF\23"
  "K\15\326/D,*\241\31I\242\304$N\13\326/D\234\16\7\21'\1O\14\326o(\207\20\237"
  "\16\21\12\0P\10\326/\236\370\223\0R\14\326/*\207\20\351`\21j\4S\14\326o(\42F\235"
  "H\22\12\0T\11\326/\16%\241~\2V\14\326/*\42\246\213\210\323\5\0Y\17\327\61d\64\211"
  "\222DD\134\225\15\205\0\0\0\0";

static const uint8_t clock_bitmap[] U8X8_PROGMEM = { // 11x9
  0xF0, 0xF9, 0xF8, 0xFB, 0x0C, 0xFE, 0x4C, 0xFE, 0x4C, 0xFE, 0xCC, 0xFE,
  0x3F, 0xFE, 0x9E, 0xFB, 0xCC, 0xF9
};

static const uint8_t sync_bitmap[] U8X8_PROGMEM = { // 11x9
  0x7C, 0xF8, 0xFE, 0xF8, 0x80, 0xF9, 0xEC, 0xFF, 0xDE, 0xFB, 0xBF, 0xF9,
  0x0C, 0xF8, 0xF8, 0xFB, 0xF0, 0xF9
};

static const uint8_t temp_bitmap[] U8X8_PROGMEM = { // 10x14
  0x3C, 0xFC, 0x66, 0xFC, 0xC2, 0xFD, 0x4A, 0xFC, 0xD2, 0xFC, 0x4A, 0xFC,
  0xD2, 0xFD, 0x4A, 0xFC, 0x91, 0xFC, 0x89, 0xFC, 0xBD, 0xFC, 0x99, 0xFC,
  0x42, 0xFC, 0x3C, 0xFC
};

static const uint8_t humid_bitmap[] U8X8_PROGMEM = { // 9x14
  0x84, 0xFC, 0x40, 0xFD, 0x91, 0xFC, 0x38, 0xFC, 0x6C, 0xFC, 0xC6, 0xFC,
  0x83, 0xFD, 0x01, 0xFD, 0x01, 0xFD, 0x01, 0xFD, 0x41, 0xFD, 0xB3, 0xFD,
  0x82, 0xFC, 0x7C, 0xFC
};

static const uint8_t co_bitmap[] U8X8_PROGMEM = { // 9x14
  0x1C, 0x8E, 0x3E, 0x9F, 0xA3, 0xB1, 0x83, 0xB1, 0x83, 0xB1, 0x83, 0xB1,
  0x83, 0xB1, 0x83, 0x91, 0xC3, 0xE1, 0xE3, 0xC1, 0x3E, 0xAF, 0x1C, 0xEE
};

static const uint8_t p_bitmap[] U8X8_PROGMEM = { // 9x14
  0x63, 0xC4, 0xC6, 0xDC, 0x8C, 0xC5, 0x08, 0xFD, 0x8C, 0xC5, 0xC6, 0xDC,
  0x63, 0xC4, 0x21, 0xFC, 0x6B, 0xC5, 0xCE, 0xDD, 0x8C, 0xC5, 0xEF, 0xFD
};
