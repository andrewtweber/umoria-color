// Copyright (c) 1981-86 Robert A. Koeneke
// Copyright (c) 1987-94 James E. Wilson
//
// This work is free software released under the GNU General Public License
// version 2.0, and comes with ABSOLUTELY NO WARRANTY.
//
// See LICENSE and AUTHORS for more information.

#pragma once

// Types used by the color routines
typedef struct {
  unsigned char L; // the local value for the particular color
  unsigned char R; // The full RGB specification for the color
  unsigned char G; // for those players with 24 bit displays
  unsigned char B; // (lucky so-and-so's...)
} Color_t;

/* Greys */
#define Color_White            0
#define Color_Light_Grey_High  1
#define Color_Light_Grey_Low   2
#define Color_Medium_Grey_High 3
#define Color_Medium_Grey_Low  4
#define Color_Dark_Grey_High   5
#define Color_Dark_Grey_Low    6
#define Color_Black            7

/* Standard */
#define Color_Light_Red        8
#define Color_Light_Green      9
#define Color_Light_Yellow     10
#define Color_Light_Blue       11
#define Color_Light_Orange     12
#define Color_Light_Purple     13
#define Color_Red              14
#define Color_Green            15
#define Color_Yellow           16
#define Color_Blue             17
#define Color_Orange           18
#define Color_Purple           19   /* Now a Major Motion Picture */
#define Color_Dark_Red         20
#define Color_Dark_Green       21
#define Color_Dark_Yellow      22
#define Color_Dark_Blue        23
#define Color_Dark_Orange      24
#define Color_Dark_Purple      25
#define Color_Cream            26

/* Amulets */
#define Color_Amber            27
#define Color_Driftwood        28
#define Color_Coral            29
#define Color_Agate            30
#define Color_Ivory            31
#define Color_Obsidian         32
#define Color_Bone             33
#define Color_Brass            34
#define Color_Bronze           35
#define Color_Pewter           36
#define Color_Tortoise_Shell   37

/* Metals */
#define Color_Aluminum         38
#define Color_Cast_Iron        39
#define Color_Chromium         40
#define Color_Copper           41
#define Color_Gold             42
#define Color_Iron             43
#define Color_Magnesium        44
#define Color_Molybdenum       45
#define Color_Nickel           46
#define Color_Rusty            47
#define Color_Silver           48
#define Color_Steel            49
#define Color_Tin              50
#define Color_Titanium         51
#define Color_Tungsten         52
#define Color_Zirconium        53
#define Color_Zinc             54

/* Monsters */
#define Color_Dirt             55
#define Color_Leprous          56
#define Color_Flesh            57  /* Well mine is. Your milage may vary */
#define Color_Disenchanting    58
#define Color_Rotting          59
#define Color_Clay             60
#define Color_Stone            61
#define Color_Fire             62
#define Color_Water            63
#define Color_Earth            64
#define Color_Air              65
#define Color_Frost            66
#define Color_Glowing          67
#define Color_Gelatinous       68
#define Color_Umber            69
#define Color_Crystal          70

/* Mushrooms */
#define Color_Brown            71
#define Color_Ecru             72
#define Color_Furry            73
#define Color_Plaid            74  /* A very tricky Color to define as RGB */
#define Color_Slimy            75
#define Color_Tan              76
#define Color_Wooden           77
#define Color_Wrinkled         78  /* Perhaps try some rayshade textures? */

/* Potions */
#define Color_Icky_Green       79
#define Color_Light_Brown      80
#define Color_Clear            81
#define Color_Azure            82
#define Color_Bubbling         83  /* Animation needed here... */
#define Color_Chartreuse       84
#define Color_Cloudy           85
#define Color_Crimson          86
#define Color_Cyan             87
#define Color_Hazy             88
#define Color_Indigo           89
#define Color_Magenta          90
#define Color_Metallic_Blue    91
#define Color_Metallic_Red     92
#define Color_Metallic_Green   93
#define Color_Metallic_Purple  94
#define Color_Misty            95
#define Color_Pink             96
#define Color_Puce             97
#define Color_Smoky            98
#define Color_Tangerine        99
#define Color_Violet           100
#define Color_Vermilion        101

/* Rocks */
#define Color_Alexandrite      102  /* Emerald Green or Deep Red?? */
#define Color_Amethyst         103
#define Color_Aquamarine       104
#define Color_Azurite          105
#define Color_Beryl            106  /* Emerald or Aquamarine or another? */
#define Color_Bloodstone       107  /* Green with flecks of Red */
#define Color_Calcite          108
#define Color_Carnelian        109
#define Color_Corundum         110  /* Any Color it feels like */
#define Color_Diamond          111
#define Color_Emerald          112
#define Color_Fluorite         113  /* CaF{sub}2 */
#define Color_Garnet           114
#define Color_Granite          115
#define Color_Jade             116
#define Color_Jasper           117  /* Carrot */
#define Color_Lapis_Lazuli     118
#define Color_Magma            119
#define Color_Malachite        120  /* Me! */
#define Color_Marble           121
#define Color_Moonstone        122
#define Color_Onyx             123
#define Color_Pearl            124
#define Color_Quartz           125
#define Color_Quartzite        126
#define Color_Rhodonite        127
#define Color_Ruby             128  /* Both of these are in fact types of */
#define Color_Sapphire         129  /* Corundum (above)...                */
#define Color_Tiger_Eye        130
#define Color_Topaz            131
#define Color_Turquoise        132  /* Did I mention Im doing this by hand? */
#define Color_Zircon           133

/* Treasures */
#define Color_Food             134  /* Pizza-Colored? */
#define Color_Slime            135
#define Color_Leather          136
#define Color_Cord             137  /* This is getting like a Nabakov book */
#define Color_Paper            138
#define Color_Old_Parchment    139  /* "The circus across the park is      */
#define Color_Apple            140  /* too loud."                          */
#define Color_Oil              141
#define Color_Magic_Light      142
#define Color_Mud              143
#define Color_Acid             144
#define Color_Pottery          145
#define Color_Wine             146  /* Villa Maria '86 */
#define Color_Mithril          147

/* Woods */
#define Color_Aspen            148
#define Color_Balsa            149
#define Color_Banyan           150
#define Color_Birch            151
#define Color_Cedar            152
#define Color_Cottonwood       153
#define Color_Cypress          154
#define Color_Dogwood          155
#define Color_Elm              156
#define Color_Eucalyptus       157
#define Color_Hemlock          158
#define Color_Hickory          159
#define Color_Ironwood         160
#define Color_Locust           161
#define Color_Mahogany         162
#define Color_Maple            163
#define Color_Mulberry         164
#define Color_Oak              165
#define Color_Pine             166
#define Color_Redwood          167
#define Color_Rosewood         168
#define Color_Spruce           169
#define Color_Sycamore         170
#define Color_Teak             171
#define Color_Walnut           172

/* Spells/Magic/Breath */
#define Color_Magic_Missile    173
#define Color_Poison_Gas       174
#define Color_Holy_Orb         175

/* New Colors */
#define Color_Lightning        176
#define Color_Deep_Black       177
#define Color_Shadow_And_Flame 178

#define MAX_COLORS             179

/* defined as a special case... */
#define Color_Random           255
#define Color_Opal             Color_Random
#define Color_Multi_Hued       Color_Random
#define Color_Iridescent       Color_Random

/* Defined as previous values */
#define Color_Input                Color_Light_Blue
#define Color_OK                   Color_Green
#define Color_Ok                   Color_OK /* I just know I'll do this... */
#define Color_Attention            Color_Yellow
#define Color_Warning              Color_Red
#define Color_Plain_Text           Color_White
#define Color_Title                Color_White
#define Color_Sub_Title            Color_Light_Grey_High
#define Color_Field                Color_White
#define Color_Non_Applicable       Color_Dark_Grey_High
#define Color_Information          Color_Cream

#define Color_Damned               Color_Red
#define Color_Magik                Color_Green
#define Color_Empty                Color_Dark_Grey_High

#define Color_Inventory_Book       Color_Old_Parchment
#define Color_Inventory_Food       Color_Food
#define Color_Inventory_Potion     Color_Light_Blue
#define Color_Inventory_Scroll     Color_Paper
#define Color_Inventory_Wand       Color_Iron
#define Color_Inventory_Staff      Color_Wooden
#define Color_Inventory_Ring       Color_Gold
#define Color_Inventory_Amulet     Color_Cream
#define Color_Inventory_Armour     Color_Iron
#define Color_Inventory_Weapon     Color_Steel
#define Color_Inventory_Misc       Color_Light_Grey_High
#define Color_Inventory_Enchanted  Color_Green // White

#define Color_Wall                 Color_Medium_Grey_High
#define Color_Floor                Color_Medium_Grey_High

#define Color_Default              Color_White