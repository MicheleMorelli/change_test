#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv ){

    float to_be_paid = strtof(argv[1], NULL);
    float coin_used = strtof(argv[2], NULL);
    float c_or_p[] = {100, 50, 20, 10, 5, 2, 1, 0.5,0.2,0.1, 0.05, 0.02, 0.01};
    coin_used -= to_be_paid;

    for(int i = 0; i < sizeof(c_or_p)/sizeof(c_or_p[0]); i++){
        while ((coin_used - c_or_p[i]) >= 0){
            coin_used -= c_or_p[i];
            printf("%.2f\n", c_or_p[i]);
        }
    }
    return 0;

}
