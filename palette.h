void init_palette(void);
//int adjust_lit_colour(int col, int lit);
void set_dark_palette(void);
void set_light_palette(void);


/*
OLD:
1 - white
2 - purple
3 - lblue
4 - dblue
5 - yellow
6 - lgreen
7 - dgreen
8 - orange
9 - red
10 - dred
11 - white2
12 - lgrey
13 - dgrey

CURRENT:
1 - white
2 - yellow
3 - lgreen
4 - orange
5 - red
6 - dgreen
7 - dred
8 - purple
9 - lblue
10 - dblue
11 - white2
12 - lgrey
13 - dgrey
*/

enum
{
TRANS_WHITE = 8,
TRANS_YELLOW = 16, // 199
TRANS_LGREEN = 24, // 200
TRANS_ORANGE = 32, // 202
TRANS_LRED = 40, // 203
TRANS_DGREEN = 48, // 201
TRANS_DRED = 56, // 204
TRANS_PURPLE = 64, // 196
TRANS_LBLUE = 72, // 197
TRANS_DBLUE = 80, // 198
TRANS_WHITE2 = 88, // 205
// Special white which doesn't overwrite other colours (for shockwaves etc)
TRANS_LGREY = 96, // 206
TRANS_DGREY = 104, // 207
TRANS_END = 105 //208
// must be the last trans + 1
};

#define LIGHT_1 220
#define LIGHT_2 221
#define DARK_1 222
#define DARK_2 223
#define TRANS_REVERSE 224
#define TRANS_DARKEN 225
#define TRANS_MONO 226

/*extern int trans_colours_array [7];
extern int actor_colours_array [7];*/

int colour_to_trans(int y);


enum
{
COLOUR_BLACK = 153,
COLOUR_GREY1,
COLOUR_GREY2,
COLOUR_GREY3,
COLOUR_GREY4,
COLOUR_GREY5,
COLOUR_GREY6,
//COLOUR_GREY7,
COLOUR_WHITE,
COLOUR_GREEN1,
COLOUR_GREEN2,
COLOUR_GREEN3,
COLOUR_GREEN4,
COLOUR_GREEN5,
COLOUR_GREEN6,
COLOUR_GREEN7,
COLOUR_GREEN8,
COLOUR_YELLOW1,
COLOUR_YELLOW2,
COLOUR_YELLOW3,
COLOUR_YELLOW4,
COLOUR_YELLOW5,
COLOUR_YELLOW6,
COLOUR_YELLOW7,
COLOUR_YELLOW8,
COLOUR_ORANGE1,
COLOUR_ORANGE2,
COLOUR_ORANGE3,
COLOUR_ORANGE4,
COLOUR_ORANGE5,
COLOUR_ORANGE6,
COLOUR_ORANGE7,
COLOUR_ORANGE8,
COLOUR_RED1,
COLOUR_RED2,
COLOUR_RED3,
COLOUR_RED4,
COLOUR_RED5,
COLOUR_RED6,
COLOUR_RED7,
COLOUR_RED8,
COLOUR_BLUE1,
COLOUR_BLUE2,
COLOUR_BLUE3,
COLOUR_BLUE4,
COLOUR_BLUE5,
COLOUR_BLUE6,
COLOUR_BLUE7,
COLOUR_BLUE8,
COLOUR_PURPLE1 = 10,
COLOUR_PURPLE2,
COLOUR_PURPLE3,
COLOUR_PURPLE4,
COLOUR_PURPLE5,
COLOUR_PURPLE6,
COLOUR_PURPLE7,
COLOUR_PURPLE8,
COLOUR_X1,
COLOUR_X2,
COLOUR_X3,
COLOUR_X4,
COLOUR_X5,
COLOUR_X6,
COLOUR_X7,
COLOUR_X8
//COLOUR_WRITING,
//COLOUR_BROWN

};



enum
{
GC_BLACK = 105,
GC_GREY1,
GC_GREY2,
GC_GREY3,
GC_GREY4,
GC_GREY5,
GC_GREY6,
//GC_GREY7,
GC_WHITE,
GC_GREEN1,
GC_GREEN2,
GC_GREEN3,
GC_GREEN4,
GC_GREEN5,
GC_GREEN6,
GC_GREEN7,
GC_GREEN8,
GC_YELLOW1,
GC_YELLOW2,
GC_YELLOW3,
GC_YELLOW4,
GC_YELLOW5,
GC_YELLOW6,
GC_YELLOW7,
GC_YELLOW8,
GC_ORANGE1,
GC_ORANGE2,
GC_ORANGE3,
GC_ORANGE4,
GC_ORANGE5,
GC_ORANGE6,
GC_ORANGE7,
GC_ORANGE8,
GC_RED1,
GC_RED2,
GC_RED3,
GC_RED4,
GC_RED5,
GC_RED6,
GC_RED7,
GC_RED8,
GC_BLUE1,
GC_BLUE2,
GC_BLUE3,
GC_BLUE4,
GC_BLUE5,
GC_BLUE6,
GC_BLUE7,
GC_BLUE8,
GC_PURPLE1 = 10,
GC_PURPLE2,
GC_PURPLE3,
GC_PURPLE4,
GC_PURPLE5,
GC_PURPLE6,
GC_PURPLE7,
GC_PURPLE8,
GC_X1,
GC_X2,
GC_X3,
GC_X4,
GC_X5,
GC_X6,
GC_X7,
GC_X8
//GC_WRITING,
//GC_BROWN

};

#define CONVERT_GREEN1 GC_GREEN1
#define CONVERT_YELLOW1 GC_YELLOW1
#define CONVERT_ORANGE1 GC_ORANGE1
#define CONVERT_BLUE1 GC_BLUE1
#define CONVERT_RED1 GC_RED1

#define CONVERT_GREEN2 COLOUR_GREEN1
#define CONVERT_YELLOW2 COLOUR_YELLOW1
#define CONVERT_ORANGE2 COLOUR_ORANGE1
#define CONVERT_BLUE2 COLOUR_BLUE1
#define CONVERT_RED2 COLOUR_RED1


