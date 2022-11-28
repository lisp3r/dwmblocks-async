#define CMDLENGTH 60
#define DELIMITER " | "
#define CLICKABLE_BLOCKS

#define SCRIPTS_DIR "/opt/dwmblocks-async/statusbar/"

const Block blocks[] = {
	BLOCK("sb-ble", 	1,	18),
	BLOCK("sb-volume", 	1,	19),
	BLOCK("sb-network", 1,	20),
	BLOCK("sb-vpn", 	1,	21),
	BLOCK("sb-slack", 	1,	22),
	BLOCK("sb-battery", 5,	23),
	BLOCK("sb-date",    1,	24)
};
