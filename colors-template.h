/* optional template to be used with pywal/wallust.
 * should be configured so the output of this template
 * by pywal is a file named 'colors.h' in this path,
 * through symlink or copied, etc.
 * */

static const char col_gray1[]       = "{color0}";
static const char col_gray2[]       = "{color8}";
static const char col_gray3[]       = "{color7}";
static const char col_gray4[]       = "{color15}";
static const char col_cyan[]        = "{color6}";
static const char col_urgborder[]   = "{color1}";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
	[SchemeUrg]  = { col_gray4, col_cyan,  col_urgborder  },
};
