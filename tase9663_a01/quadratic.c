#include <math.h>
#include <limits.h>
/**
 * Compute and return solution type of given quadratic equation ax*x + bx + c = 0
 *
 * @param a  - quadratic coefficient
 * @param b  - linear coefficient
 * @param c - constant coefficient
 * @return - 0 if not quadratic equation, i.e. a=0;
 *           1 for one unique real solution;
 *           2 for two distinct real solutions;
 *           3 for two complex solutiions
 */
int solution_type(float a, float b, float c) {
     if (a == 0) {
        return 0; 
    }

    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        return 2;
    }
    else if (discriminant == 0) {
        return 1;
    }
    else {
        return 3;
    }
}

/**
 * Compute and return unique or bigger real roots of given quadratic equation ax*x + bx + c = 0 of types 1 and 2.
 * @param a  - quadratic coefficient
 * @param b  - linear coefficient 
 * @param c - constant coefficient
 * @return - the unique real root or the bigger real root if the quadratic equation has two distinct real roots 
             Ohterwise, return 0.
 */
float real_root_big(float a, float b, float c){
    if (a == 0) {
        return 0; 
    }

    float discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        return 0;
    }

    if (discriminant == 0) {
        return -b / (2 * a); 
    }

    float sqrt_discriminant = sqrt(discriminant);
    
    float root1 = (-b + sqrt_discriminant) / (2 * a);
    float root2 = (-b - sqrt_discriminant) / (2 * a);

    return (root1 > root2) ? root1 : root2;
}

/**
 * Compute and return unique or smaller real roots of given quadratic equation ax*x + bx + c = 0 of types 1 and 2.
 * @param a  - quadratic coefficient
 * @param b  - linear coefficient 
 * @param c - constant coefficient
 * @return - 0 if not a == 0
             1 if having two complex solutions
             2 if            the unique real root or the smaller real root if the quadratic equation has two distinct real roots 
             Ohterwise, return 0.
 */
float real_root_small(float a, float b, float c){
    if (a == 0) {
        return 0.0; 
    }

    float discriminant = b * b - 4 * a * c;


    if (discriminant < 0) {
        return 0.0; 
    }

    if (discriminant == 0) {
        return -b / (2 * a);  
    }

    float sqrt_discriminant = sqrt(discriminant);
    float root1 = (-b + sqrt_discriminant) / (2 * a);
    float root2 = (-b - sqrt_discriminant) / (2 * a);


    return (root1 < root2) ? root1 : root2;
}