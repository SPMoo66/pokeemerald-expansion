#include "global.h"
#include "blit.h"
#include "window.h"
#include "menu.h"
#include "palette.h"
#include "event_data.h"
#include "constants/mugshots.h"

#define MUGSHOT_PALETTE_NUM 13

struct Mugshot{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u32* image;
    const u16* palette;
};

void DrawMugshot(void); //VAR_0x8000 = mugshot id
void DrawMugshotAtPos(void); //VAR_0x8000 = mugshot id, VAR_0x8001 = x, VAR_0x8002 = y
void ClearMugshot(void);

static const u32 sMugshotImg_Test[] = INCBIN_U32("graphics/mugshots/test.4bpp.lz");
static const u16 sMugshotPal_Test[] = INCBIN_U16("graphics/mugshots/test.gbapal");

static const u32 sMugshotImg_Jigglypuff1[] = INCBIN_U32("graphics/mugshots/jigglypuff1.4bpp.lz");
static const u32 sMugshotImg_Jigglypuff2[] = INCBIN_U32("graphics/mugshots/jigglypuff2.4bpp.lz");
static const u16 sMugshotPal_Jigglypuff[] = INCBIN_U16("graphics/mugshots/jigglypuff2.gbapal");

static const struct Mugshot sMugshots[] = {
    [MUGSHOT_TEST] = {.x = 0, .y = 1, .width = 240, .height = 96, .image = sMugshotImg_Test, .palette = sMugshotPal_Test},
    [MUGSHOT_JIGGLYPUFF_1] = {.x = 0, .y = 1, .width = 96, .height = 96, .image = sMugshotImg_Jigglypuff1, .palette = sMugshotPal_Jigglypuff},
    [MUGSHOT_JIGGLYPUFF_2] = {.x = 0, .y = 1, .width = 96, .height = 96, .image = sMugshotImg_Jigglypuff2, .palette = sMugshotPal_Jigglypuff},
};


//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;

void ClearMugshot(void){
    if(sMugshotWindow != 0){
        ClearStdWindowAndFrameToTransparent(sMugshotWindow - 1, 0);
        CopyWindowToVram(sMugshotWindow - 1, 3);
        RemoveWindow(sMugshotWindow - 1);
        sMugshotWindow = 0;
    }
}

static void DrawMugshotCore(const struct Mugshot* const mugshot, int x, int y){
    struct WindowTemplate t;
    u16 windowId;
    
    if(sMugshotWindow != 0){
        ClearMugshot();
    }
    if (VarGet(VAR_0x8000) == MUGSHOT_TEST) {
        SetWindowTemplateFields(&t, 1, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    }
    else {
        SetWindowTemplateFields(&t, 0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    }
    windowId = AddWindow(&t);
    sMugshotWindow = windowId + 1;
    
    LoadPalette(mugshot->palette, 16 * MUGSHOT_PALETTE_NUM, 32);
    CopyToWindowPixelBuffer(windowId, (const void*)mugshot->image, 0, 0);
    PutWindowRectTilemap(windowId, 0, 0, mugshot->width/8, mugshot->height/8);
    CopyWindowToVram(windowId, 3);
}

void DrawMugshot(void){
    const struct Mugshot* const mugshot = sMugshots + VarGet(VAR_0x8000);
    DrawMugshotCore(mugshot, mugshot->x, mugshot->y);
}

void DrawMugshotAtPos(void){
    DrawMugshotCore(sMugshots + VarGet(VAR_0x8000), VarGet(VAR_0x8001), VarGet(VAR_0x8002));
}
