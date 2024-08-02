/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#0a0a0a",   /* after initialization */
    [INPUT] = "#005577",  /* during input */
    [FAILED] = "#770000", /* wrong password */
    [CAPS] = "#ebdbb2",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

