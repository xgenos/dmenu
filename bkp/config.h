

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 0;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"FiraCode Nerd Font:size=12:antialias=true:autohint=true"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#9096ae", "#20232f" },
	[SchemeSel] = { "#9096ae", "#436668" },
	[SchemeSelHighlight] = { "#9096ae", "#232533" },
	[SchemeNormHighlight] = { "#9096ae", "#232533" },
	[SchemeOut] = { "#9096ae", "#20232f" },
	[SchemeOutHighlight] = { "#20232f", "#436668" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 12;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 40;
static unsigned int min_lineheight = 40;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"&[]";

