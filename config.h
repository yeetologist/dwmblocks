//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/*{"",	"sb-music",	0,	11},*/
	/* {"",	"sb-news",		0,	6}, */
	{"",	"sb-battery",	17,	3},
  /* {"",	"sb-disk",	300,	14}, */
	/* {"",	"sb-crypto",	0,	13}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"price btc Bitcoin 💰",				9000,	21}, */
	/* {"",	"sb-nettraf",	0,	16}, */
	{"",	"sb-volume",	0,	10},
	{"",	"sb-clock",	60,	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

