#ifndef _JTILE_H_
    #define _JTILE_H_
 
#include "Define.h"
 
enum {
    TILE_TYPE_NONE = 0,
 
    TILE_TYPE_NORMAL,
    TILE_TYPE_BLOCK
};
 
class jTile {
    public:
        int     TileID;
        int     TypeID;
 
    public:
        jTile();
};
 
#endif