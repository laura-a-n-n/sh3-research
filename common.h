typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef unsigned long u64;
typedef long s64;
typedef float f32;

#define NULL 0
#define ABORT() asm("breakc 0")
#define FONT_STREAM_BUFFER_SIZE 0x4000
#define NULL 0

#ifdef DEBUG
#define fjAssert(_cond, _file, _line) \
if (_cond) {\
    int foo = 0;\
} else {\
    fjAssert_(_file, _line, #_cond);\
}
#else
#define fjAssert(_cond, _file, _line)
#endif
