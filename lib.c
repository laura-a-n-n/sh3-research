typedef unsigned char u8;
typedef signed char s8;
typedef int s32;
typedef unsigned int u32;

// 0x00153830 - fills chhaa.mdl region with 0x12
int func_00153830(void *mdlHeader, int size)
{
  int i;
  
  if (size < 0) {
    size = 0;
  }
  else {
    for (i = 0; i < size; i = i + 0x10) {
      *((char *)mdlHeader + i) = ((i % 8) * 0x11) + 0x12;
    }
  }
  return size;
}

void func_011fd28(int* arg0, int arg1) {
    arg0[0] = arg1;
    arg0[2] = 0;
    arg0[1] = arg1;
}

extern u8 D_00398310[256];
extern s8 D_01F605B0[256];
void func_002A86E0(u8* input, s32 index);


// 0x002A8560 - costume code checker
s32 func_002A8560() {
    u8 input[16];
    s32 codeIndex = 0;
    s32 codeOffset = 0;

    while (1) {
        u8 codeLength = *(u8* )0x01F605D0;
        s32 i = 0;
        for (i = 0; i < codeLength; i++) {
            input[i] = D_01F605B0[i];
        }
        for (i = codeLength; i < 0x10; i++) {
            input[i] = 0;
        }
        func_002A86E0(input, codeIndex);
        for (i = 0; i < 0x10; i++) {
            if (D_00398310[i + codeOffset] != input[i]) {
                break;
            }
        }
        if (i == 0x10) {
            return codeIndex;
        }
        codeIndex++;
        codeOffset += 0x10;
        if (codeIndex >= 0x1A) {
            return -1;
        }
    }
}

extern s32 D_01D880AC[256];
// func_00199B00 - unlocks an outfit?
void func_00199B00(s32 arg0) {
    D_01D880AC[arg0 >> 5] |= 1 << (arg0 & 0x1F);
}
// checks if outfit unlocked
s32 func_00199B30(s32 arg0) {
    return (D_01D880AC[arg0 >> 5] >> (arg0 & 0x1F)) & 1;
}

