//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/	/*Update Signal*/
	{"", 		"date '+%Y %B %d %A;'",		5,					0},
	{"",		"block-volume",				0,					10},
	{"",		"block-battery",			5,					3},
	{"",		"block-internet",			5,					4},
	{"",		"dmenu-bluetooth --status",	5,					4},
	{"", 		"date '+%I:%M:%S %p '",		1,					0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ";
static unsigned int delimLen = 1;
