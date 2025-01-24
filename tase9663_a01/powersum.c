#include "powersum.h"

/**
 * Depect if overflow in power computing of b to power of n  
 *
 * @param b - the base
 * @param n - the exponent
 * @return - 1 if overflow happens, 0 otherwise
 */
int power_overflow(int b, int n) {
    int power = 1;

    for (int i=1; i <=n;i++){
        if (power > __INT_MAX__ / b) {
            return 1;
        }
        power *=b;
    }

    return 0; 
}

/**
 * Compute and return b to power of n.  
 *
 * @param b - the base
 * @param n - the exponent
 * @return - b to the power of n if no overflow happens, 0 otherwise
 */
int mypower(int b, int n) {

    int power = 1;
    for (int i =1; i<=n; i++) {
        if (power_overflow(b,n)) {
            return 0;
        }
        power *=b;
    }
    return power;
}


/**
 * Compute and return the sum of powers.
 *
 * @param b - the base
 * @param n - the exponent
 * @return -  the sum of powers if no overflow happens, 0 otherwise 
 */
int powersum(int b, int n) {

    int sum = 0;
    int power = 1;
    for (int i = 1; i <= n; i ++){
        if (power_overflow(b,n)) {
            return 0;
        }
        sum += power;
        power *= b;
        
    }

    return sum;
}