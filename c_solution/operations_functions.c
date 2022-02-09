#include "operations_functions.h"
#include <tgmath.h>
#include <printf.h>
#include <stdlib.h>

comp u(comp a){return -a;}
comp mag(comp a){return cabs(a);}
comp phase(comp a){return atan(cimag(a)/creal(a));}
comp cabsd(comp a){return cabs(a);}
comp creald(comp a){return creal(a);}
comp cimagd(comp a){return cimag(a);}
comp clog10(comp a){return clog(a)/clog(10);}
comp empty(comp a){return a;}

comp full_log(comp a, comp b){
    if (a==0 || a==1){
        printf("ERROR:\nUndefined log\n");
        exit(0);
    }
    return clog(b)/clog(a);
}
comp plus(comp a, comp b){return a+b;}
comp minus(comp a, comp b){return a-b;}
comp multiplication(comp a, comp b){return a*b;}
comp division(comp a, comp b){
    if (b==0){
        printf("ERROR:\nUndefined division\n");
        exit(0);
    }
    return a/b;
}
comp exponentiation(comp a, comp b){return cpow(a,b);}
