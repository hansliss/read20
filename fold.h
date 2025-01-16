/*  macros for fold() routine */

typedef enum {
	FOLDUP, FOLDDOWN} 
FOLDMODE;

char *fold (char *out,char *in,FOLDMODE whichway);
char *foldup (char *out, char *in);
char *folddown (char *out, char *in);

