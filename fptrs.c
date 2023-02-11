//- something that outputs assembly with an easy dependent function to modify
//- the dependent function has more than one instruction to step through
//- the output prints to terminal for feedback
//- the result of the program cannot be predicted from analysis of the source code alone
#include <stdio.h>
#include <stdlib.h>

typedef long long llong   ;
typedef int*      int_ptr ;

typedef struct {
    int  weight     ;
    int  wealth     ;
    int  leg_length ;
    int  eye_color  ;
    char name[60]   ;
} bbuilder ;


int print_bbuilder (char*) {
    bbuilder* bb = (bbuilder*)n ;

    printf ("hi, this is obviously hi\n") ;
    return 0 ;
}

int print_int (char*) {
    printf ("goodbye forever, see you later, sayonara\n") ;
    return 0 ;
}
    

typedef int (*print_func) () ;


int do_stuff (print_func custom_print) {
    printf       ("-- header of do_stuff function --\n") ;
    printf       ("\tdo this stuff everytime\n") ;
    custom_print () ;
    printf       ("\tdo more stuff the same way...\n") ;
    printf       ("-- end do_stuff --\n") ;
    return 0      ;
}


int main (int argn,char** args) {
    int        v       ;
    int        x       ;
    int        choice  ;
    print_func address ;
    

    printf ("make a choice, 1 for 'hi' function, 2 for 'goodbye' function: ") ;
    scanf  ("%d",&choice) ;
    
    if (choice == 1) address = &print_hi      ;
    else             address = &print_goodbye ;
    
    
    do_stuff (address) ;
    
    return 0           ;
}
