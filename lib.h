extern int* interprete(char** cmd, int nbArgs, int* ret, int* boucle,char* precref, char* curr);
extern int back(char* path);
extern int aucuneSpec(char* c);
extern int verifieFormat(char* str, char** cmd);
extern void freeCMD(char** cmd, int nb);
extern void majCWDPrint(char* curr, int* ret, char* print);
extern void mallocFail(char* nomv, int ex);
extern int* str2int(char* str);
extern int* exitSl(char** cmd, int nbArgs, int* ret, int* boucle);
extern int nombre_Rep(char *path);
extern int ifEtoile(char * cmd);
extern int *cmdExtrn(char ** buf,int* ret,int * boucle);
extern char** TabModif(char ** commande);
extern int redirection(int dsc,int flags,char **cmd,int index, int nbArgs, int* ret, int* boucle,char* precref, char* curr);
