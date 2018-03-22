
#ifndef DEBUG_PRINT_HHH
#define DEBUG_PRINT_HHH



#ifdef _WIN32

#ifdef _DEBUG
#define debug_print(...)\
    do{\
        fprintf(stderr, __VA_ARGS__);\
    }while(0)
#else
#define debug_print(...)\
    do{  }while(0)
#endif

#endif


#ifdef linux 

#ifdef _DEBUG
#define debug_print(...)\
    do{\
        fprintf(stderr, __VA_ARGS__);\
    }while(0)

#else
#define debug_print(...)\
    do{ }while(0)
#endif

#endif



#endif