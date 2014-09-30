#include <stddef.h>class ADGConnectionForIOS{   public: static void initADG(char *adid , char *type , int x , int y , void (*)(const char * , const char *)); static void initADGWithEarlyOS(char *adid , char *type , int x , int y , bool landscape , void (*)(const char * , const char *)); static void initADGWithWH(char *adid , char *type , int x , int y , int width , int height , void (*func)(const char * , const char *)); static void initADGWithWHAndEarlyOS(char *adid , char *type , int x , int y , int width , int height , bool landscape , void (*func)(const char * , const char *)); static void initADGAction(char *adid , char *type , int x , int y , int width , int height , bool earlyOS , bool landscape ,  void (*func)(const char * , const char *)); static void showADG(); static void hideADG(); static void pauseADG(); static void resumeADG(); static void changeLocationADG(int x , int y); static void moveDefaultLocationADG(); static void finishADG();};