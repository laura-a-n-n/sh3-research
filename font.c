#include "common.h"

struct FONT_DATA {
    // total size: 0x215B0
    u32 tex_head[12]; // size 0x30
    u32 clut_head[12]; // size 0x30
    u32 clut[8]; // size 0x20
    u8 texbuf[131072]; // size 0x20000
    u64 tex0; // size 0x4
    s32 fonttype; // size 0x4
    u32 rgb_u; // size 0x4
    u32 rgb_d; // size 0x4
    u32 rgb_s[4]; // size 0x10
    u32 alpha; // size 0x4
    u32 alpha_base; // size 0x4
    u32 flag; // size 0x4
    u16 x; // size 0x2
    u16 y; // size 0x2
    u16 wide_w; // size 0x2
    u16 wide_h; // size 0x2
    u16 right_x; // size 0x2
    u16 right_y; // size 0x2
    u16 wm; // size 0x2
    u16 hm; // size s16 unk20C0;
    s16 wait_count; // size 0x2
    s16 wait_type; // size 0x2
    s16 page_sound; // size 0x2
    u16 code[400]; // size 0x320
    s16 upper[400]; // size 0x320
    s16 lower[400]; // size 0x320
    s16 top; // size 0x2
    s16 bottom; // size 0x2
    s16 st_num; // size 0x2
    s16 w_st_num; // size 0x2
    s16 prl_count; // size 0x2
    s16 preload; // size 0x2
    s16 shadow_max; // size 0x2
    s16 shadow_now; // size 0x2
    u16 sel_xl; // size 0x2
    u16 sel_xr; // size 0x2
    u16 sel_yu[4]; // size 0x8
    u16 sel_yd[4]; // size 0x8
    s16 sel_max; // size 0x2
    s16 sel_now; // size 0x2
    u16 mes_v[10][64]; // size 0xu16 * unk20F50;
    u16 * mes_str_now; // size 0x4
    u16 * mes_str; // size 0x4
    u16 * prl_str; // size 0x4
    struct FONT_STREAM_DATA * stream; // size 0x4
    struct WFONT_STREAM_DATA * w_stream; // size 0x4
    struct MFONT_STREAM_DATA * m_stream; // size 0x4
    u16 stream_max; // size 0x2
    u16 w_stream_max; // size 0x2
    u16 m_stream_max; // size 0x2
    u16 m_code[256]; // size 0x200
    s16 m_upper[256]; // size 0x200
    s16 m_lower[256]; // size 0x200
    s16 m_top; // size 0x2
    s16 m_bottom; // size 0x2
    s16 m_st_num; // size 0x2
    s32 m_base_x; // size 0x4
    s32 m_base_y; // size 0x4
    s32 m_base_z; // size 0x4
    u32 m_rgba; // size 0x4
    s32 m_sx; // size 0x4
    s32 m_sy; // size 0x4
    s32 m_w; // size 0x4
    s32 m_h; // size 0x4
    s32 m_x; // size 0x4
    s32 m_y; // size 0x4
    f32 bar_blink; // size 0x4
    u64 * pCur; // size 0x4
    s32 base_x; // size 0x4
    s32 base_y; // size 0x4
    s32 base_z; // size 0x4
};


typedef struct WFONT_STREAM_DATA {
    // total size: 0x18
    /* 0x00 */ u16 x; // size 0x2
    /* 0x02 */ u16 y; // size 0x2
    /* 0x04 */ u16 vw; // size 0x2
    /* 0x06 */ u16 vh; // size 0x2
    /* 0x08 */ u16 u; // size 0x2
    /* 0x0A */ u16 v; // size 0x2
    /* 0x0C */ u32 rgb_u; // size 0x4
    /* 0x10 */ u32 rgb_d; // size 0x4
    /* 0x14 */ u16 w; // size 0x2
    /* 0x16 */ u16 h; // size 0x2
} WFONT_STREAM_DATA;

typedef struct MFONT_STREAM_DATA {
    // total size: 0x8
    /* 0x0 */ u16 x; // size 0x2
    /* 0x2 */ u16 y; // size 0x2
    /* 0x4 */ u16 u; // size 0x2
    /* 0x6 */ u16 v; // size 0x2
} MFONT_STREAM_DATA;

typedef struct FONT_STREAM_DATA
{
	u16 x;
	u16 y;
	u16 w;
	u16 h;
	u16 u;
	u16 v;
	u32 rgb_u;
	u32 rgb_d;
} FONT_STREAM_DATA;


typedef struct Pad_KeyConfig {
    // total size: 0x60
    s32 enter; // offset 0x0, size 0x4
    s32 cancel; // offset 0x4, size 0x4
    s32 skip; // offset 0x8, size 0x4
    s32 front_move; // offset 0xC, size 0x4
    s32 back_move; // offset 0x10, size 0x4
    s32 right_turn; // offset 0x14, size 0x4
    s32 left_turn; // offset 0x18, size 0x4
    s32 right_move; // offset 0x1C, size 0x4
    s32 left_move; // offset 0x20, size 0x4
    s32 action; // offset 0x24, size 0x4
    s32 attack; // offset 0x28, size 0x4
    s32 dash; // offset 0x2C, size 0x4
    s32 light; // offset 0x30, size 0x4
    s32 item; // offset 0x34, size 0x4
    s32 search_view; // offset 0x38, size 0x4
    s32 ready; // offset 0x3C, size 0x4
    s32 pause; // offset 0x40, size 0x4
    s32 map; // offset 0x44, size 0x4
    s32 padding[6]; // offset 0x48, size 0x18
} Pad_KeyConfig;

struct Pad_KeyConfig key_config; // size: 0x60, address: 0x116DB10
struct FONT_DATA font;
short D_003585A8[20][2];
short D_003585AA[20][2];
u64 D_003585C0[34];
char font_stream_buf[FONT_STREAM_BUFFER_SIZE];
char D_01D08FB0[FONT_STREAM_BUFFER_SIZE];

void fontSet(u16 code, u16 x, u16 y)
{
	int num;

    // this check isn't in sh2:
    if (func_0019B580(0x10u) != 0) {
        y = (y - 0x800) * 8 / 7 + 0x800;
    }

    // uses 0x800, not 0x400
    if (font.flag & 0x800) {
    	WFONT_STREAM_DATA* fstream;

        if (font.w_st_num >= font.w_stream_max) {
            debugPrintf("wfont over.\n");
            return;
        }
        
        num = func_00158150(code);
        fstream = font.w_stream + font.w_st_num;
        fstream->x = x << 4;
        fstream->y = y << 4;
        fstream->u = (num % 0x19) * 0x14;
        fstream->v = (num / 0x19) * 0x1e;
        fstream->rgb_u = font.rgb_u | font.alpha << 0x18;
        fstream->rgb_d = font.rgb_d | font.shadow_now << 0x18;
        fstream->w = D_003585A8[font.fonttype][0] << 4;
        fstream->h = D_003585AA[font.fonttype][0] << 4;
        fstream->vw = font.wide_w << 4;
        fstream->vh = font.wide_h << 4;
        font.w_st_num++;
    } else {
	    FONT_STREAM_DATA* fstream;
        if (font.st_num >= font.stream_max) {
            debugPrintf("font over.\n");
            return;
        }
        num = func_00158150(code);
        fstream = font.stream + font.st_num;
        fstream->x = x << 4;
        fstream->y = y << 4;
        fstream->u = (num % 0x19) * 0x14;
        fstream->v = (num / 0x19) * 0x1e;
        fstream->rgb_u = font.rgb_u | font.alpha << 0x18;
        fstream->rgb_d = font.rgb_d | font.shadow_now << 0x18;
        fstream->w = D_003585A8[font.fonttype][0] << 4;
        fstream->h = D_003585AA[font.fonttype][0] << 4;
        font.st_num++;
    }
}

void fontSetLine(s32 x, s32 w, s32 y) {
	u32 b;
	u32 g;
	u32 r;
	FONT_STREAM_DATA* fstream;

    if (font.st_num >= font.stream_max) {
        debugPrintf("font over.\n");
        return;
    }

    // this check isn't in sh2:
    if (func_0019B580(0x10u) != 0) {
        y = (y - 0x800) * 8 / 7 + 0x800;
    }

    fstream = font.stream + font.st_num;
    fstream->x = x << 4;

    if (font.flag & 0x800) {
        fstream->y = (((y + font.wide_h / 2) >> 1) << 5);
    } else {
        // another 1 -> 0
        fstream->y = ((y + D_003585AA[font.fonttype][0] / 2) >> 1) << 5;
    } 

    fstream->u = (x + w) * 0x10 - 1;
    fstream->v = 0xfe00;

    r = ((font.rgb_u & 0xff) + (font.rgb_d & 0xff)) >> 1;
    g = (((font.rgb_u >> 8) & 0xff) + ((font.rgb_d >> 8) & 0xff)) >> 1;
    b = (((font.rgb_u >> 16) & 0xff) + ((font.rgb_d >> 16) & 0xff)) >> 1;
    fstream->rgb_u =
        (b << 0x10) | (r | g << 8) |
        (font.alpha << 24);
    fstream->rgb_d = font.shadow_now;
    font.st_num++;
}

void fontSetBlankBox(s32 x0, s32 x1, s32 y) {
	FONT_STREAM_DATA* fstream;
    if (font.st_num >= font.stream_max) {
       return;
    }

    // this check isn't in sh2:
    if (func_0019B580(0x10u) != 0) {
        y = (y - 0x800) * 8 / 7 + 0x800;
    }

    fstream = font.stream + font.st_num;
    fstream->x = x0 << 4;
    fstream->y = y << 4;
    fstream->u = x1 << 4;
    fstream->v = 0xfff7;
    fstream->rgb_u = font.rgb_u | font.alpha << 0x18;
    fstream->rgb_d = font.rgb_d | font.shadow_now << 0x18;
    fstream->h = D_003585AA[font.fonttype][0] << 4; // changed from 1 to 0 in sh3?
    font.st_num = font.st_num + 1;
}

void* fontTexLoad(s32 texadr, s32 clutadr)
{
    // D_003585C0[0x04] =
    *(s64* )0x3585E0 =
        ((s64)(s32)texadr << 32) | (0x14080000ULL << 32);

    // D_003585C0[0x14] =
    *(s64* )0x358660 =
        ((s64)(s32)clutadr << 32) | (0x00010000ULL << 32);

    font.tex0 =
        (s64)(s32)texadr |
        (0x00066542ULL << 16) |
        ((s64)(s32)clutadr << 37) |
        (0x20000000ULL << 32);

    return D_003585C0;
}

void fontPushButton() {
    if (font.wait_type == 4) {
        font.st_num = 0;
        font.wait_type = 5;
        func_0015DC20(1.0f, 0.0f, 0x2712);
        return;
    }
    if (((font.wait_type & 7u) != 2) && !(font.flag & 0x10)) {
        font.wait_count = 0;
    }
}

void fontPushButton2() {
    if (((font.wait_type & 7u) != 2) && !(font.flag & 0x10)) {
        font.wait_count = 0;
    }
}

void fontSelectUp() {
    if (font.wait_type == 4) {
        SeCall(10000, 1.0, 0);
        if (font.sel_max == -1) {
            font.sel_now = 0;
        } else {
            if (--font.sel_now < 0) {
                font.sel_now = font.sel_max - 1;
            }
        }
    }
}

void fontSelectDown() {
    if (font.wait_type == 4) {
        SeCall(10000, 1.0, 0);
        if (font.sel_max == -1) {
            font.sel_now = 1;
            return;
        }
        if (++font.sel_now >= font.sel_max) {
            font.sel_now = 0;
        }
    }
}

void fontCrushOff() {
    font.fonttype = 0;
}

void fontCrushOn() {
    font.fonttype = 1;
}

void fontShadowOff() {
    if (font.shadow_now < 4) {
        font.shadow_now += 4;
    }
}

void fontAllCenterOff() {
    font.flag = font.flag & ~0x100;
}

void fontAllCenterOn() {
    font.flag |= 0x100;
}

void fontNextMessage() {
    u32 wm;

    font.st_num = 0;
    if (font.flag & 1) {
        font.mes_str_now = NULL;
        return;
    }

    fontSetColor(0);
    font.flag &= ~8;
    font.mes_str_now = font.mes_str;
    wm = fontPrintStrMain(&font.mes_str, 0);

    if (font.sel_max != 0) {
        font.wait_type = 4;
        font.wait_count = -1;
    } else {
        font.wait_type = wm >> 0xc;
        if (((font.wait_type & 7) == 1) || ((font.wait_type & 7) == 0)) {
            font.wait_count = -1;
        } else { 
            u32 iVar4 = func_0019B580(0x10) ? 0x32 : 0x3C;
            font.wait_count = ((wm & 0xfff) * iVar4) / 0x3c;
        }
    }

    font.flag |= 2;
}

void fontMessage(u16* str) {
    if (str == NULL) {
        font.mes_str_now = NULL;
        return;
    }

    font.mes_str = str;
    font.flag &= 0xfffffffe;
    fontNextMessage();

    if (font.prl_count == 0 && font.wait_type > 0 && font.wait_type < 8) {
        font.prl_str = font.mes_str;
        font.prl_count = 1;
        font.flag &= 0xffffffbf;
    }
}

void fontSetColorDirect(u8 r, u8 g, u8 b, u8 alp) {
    font.rgb_u = font.rgb_d = (b << 0x10) | (r | g << 8);
    font.alpha = alp;
}

void fontWide(u16 w, u16 h) {
    font.flag |= 0x400;
    font.wide_w = w;
    font.wide_h = h;
}

u16* fontGetMesAdr(u16* str, u16 num) {
    if (str == NULL) {
        return NULL;
    }
    if (num >= *str) {
        debugPrintf("message number over! (%d/%d)\n", num, *str);
        return NULL;
    }
    return str + str[num + 1];
}

s32 fontGetStatus() {
    if (font.wait_type == 5) {
        return font.sel_now;
    }
    return font.st_num == 0 ? -2 : -1;
}

// TODO: fix sh3 equivalent
// void fontCopyMessage(u16* pto, u16* pfrom) {
//     u16 n;
//     do {
//         n = *pfrom++;
//         *pto++ = n;
//     } while (n != 0xffff);
// }

// TODO:
// does this one have a sh3 equivalent?
// void fontSetYesNo(s32 y) {
//     s32 w;
//     s32 w2;

//     w = fontPrintWord(fontGetMesAdr((u16*)&msg_station, 0), 0xC8, y, 1, 0);
//     w2 = fontPrintWord(fontGetMesAdr((u16*)&msg_station, 1), 0x138, y, 1, 0);

//     if (w2 < w) {
//         font.sel_yu[1] = (u16) w;
//         return;
//     }
//     font.sel_yu[1] = (u16) w2;
// }

// TODO: fix sh3 equivalent
// void fontEachTurn() {
//     if (font.tex0 != 0) {
//         if (font.prl_count != 0) {
//             fontPreload();
//         } else if (font.bottom < 0x190) {
//             fontLoad(++font.preload);
//         }
//         if (font.flag & 2) {
//             font.flag &= 0xfffffffd;
//         } else if (!(font.flag & 0x20)) {
//             if ((s16) font.sel_max == -1) {
//                 if (shPadTrigger(0, 0x200) != 0) {
//                     fontSelectUp();
//                 }
//                 if (shPadTrigger(0, 0x100) != 0) {
//                     fontSelectDown();
//                 }
//             } else {
//                 if (shPadRepeat(0, 0x400) != 0) {
//                     fontSelectUp();
//                 }
//                 if (shPadRepeat(0, 0x800) != 0) {
//                     fontSelectDown();
//                 }
//             }
//             if (shPadTrigger(0, key_config.enter) != 0) {
//                 fontPushButton();
//             }
//             if (shPadTrigger(0, key_config.cancel) != 0) {
//                 fontPushButton2();
//             }
//         }
//         if (((font.wait_type & 7u) != 0) && (font.wait_type != 4)) {
//             if (font.wait_count > 0 && !(font.flag & 0x10)) {
//                 font.wait_count = font.wait_count - (s16) shGetDF();
//             }
//             if (font.wait_count == 0) {
//                 if (font.wait_type & 8u) {
//                     font.st_num = 0;
//                     font.sel_max = 0;
//                     font.wait_type = 0;
//                     return;
//                 }
//                 fontNextMessage();
//             }
//         }
//     }
// }


void fontBarBlink() {
    if ((font.bar_blink += shGetDT()) >= 1.0f)
        font.bar_blink -= 1.0f;
}

void fontSetAlpha(u8 alp) {
    font.alpha = alp;
}

s32 fjAssert_(s8* file, s32 line, s8* str) {
    printf("assertion \"%s\" failed: file \"%s\", line %d\n", str, file, line);
    ABORT();
    return 1;
}

void fontSetStreamMax(u16 s_max, u16 ws_max, u16 ms_max) {
    font.stream_max = s_max;
    font.w_stream_max = ws_max;
    font.m_stream_max = ms_max;

    font.stream = (FONT_STREAM_DATA*)(D_01D08FB0);
    font.w_stream = (WFONT_STREAM_DATA*)(font.stream + s_max);
    font.m_stream = (MFONT_STREAM_DATA*)(font.w_stream + ws_max);

    fjAssert(
        ((u32)(font.m_stream + ms_max) - (u32)font_stream_buf) <= FONT_STREAM_BUFFER_SIZE,
          "font.c",
          0x129
    );
}

void fontClear() {
    font.prl_count = 0;
    font.w_st_num = 0;
    fontSetColor(0);
    font.rgb_s[0] = 0;
    font.shadow_now = 1;
    font.wait_count = 0;
    font.sel_xl = 0;
    font.alpha_base = 0x80;
    font.alpha = 0x80;
    font.fonttype = 0;
    font.page_sound = 0;
    font.flag = font.flag & 0x70f8 | 1;
    fontSetStreamMax(0x200, 0x180, 0x200);
    *((u8*)0x1d08fa0) = 0;
}
