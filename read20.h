
struct want {
     unsigned short ssnum;
     unsigned short fnum;
};

int main(int argc, char *argv[]);
long getfield(char *block, int wordoff, register int bitoff, register int bitlen);
void doDatablock(char *block);
void doSaveset(char *block, int contflag);
void doFileHeader(char *block);
int patternmatch();
int expmatch();
int fmatch();
void getfdbinfo(char *block);
void doFileTrailer(char *block);
void doTapeTrailer(char *block);
void punt(int prterrno, char *fmt, ...);
int getstring(char *block, char *s, int wordoff, int max);
int pendstring();
void getbytes(char *block, char *s, int wordoff, int max);
long unixtime(char *block, int wordoff);
char *unixname(char *name);
int t2uprot(register unsigned prot);
int _t2utim(unsigned t);
int compwant(const void *vw1, const void *vw2);
