#include<iostream>

using namespace std;

/*
There are several methods to find the Highest Common Factor (HCF), also known as the Greatest Common Divisor (GCD), of two or more numbers. Here are some common methods:

1.Euclidean Algorithm: This is one of the most widely used methods to find the GCD. It involves repeated division of the larger number by the smaller number until the remainder becomes zero. The GCD is the non-zero remainder obtained at the end. This method is highly efficient and forms the basis for many other algorithms.

2.Prime Factorization: Find the prime factors of both numbers and then determine the common prime factors along with their lowest powers. Multiply these common factors to get the GCD.

3.Division Method: This is similar to the Euclidean algorithm but performed through a series of divisions. You repeatedly divide the larger number by the smaller number, then divide the divisor by the remainder, and so on, until you get a zero remainder. The last non-zero remainder is the GCD.

4.Subtraction Method: Subtract the smaller number from the larger number repeatedly until both numbers become equal. The common value at that point is the GCD.

5.Binary Algorithm: This is an optimized version of the Euclidean algorithm. It reduces the number of divisions by halving one of the numbers until one of them becomes zero. Then, it doubles the other number, and the process continues until a GCD is found.

6.Recursive Method: You can implement the GCD calculation using recursion, repeatedly passing the smaller number and the remainder to the function until the remainder becomes zero.

7.Stein's Algorithm (Binary GCD Algorithm): An efficient algorithm that replaces division with shifts and bitwise operations. It works well for large numbers and is faster than the traditional Euclidean algorithm.

8.Extended Euclidean Algorithm: This algorithm not only finds the GCD of two numbers but also calculates the coefficients (Bézout's coefficients) that satisfy Bézout's identity. It's used in solving linear Diophantine equations and modular inverses.

9.Using Library Functions: Many programming languages provide built-in functions or libraries to calculate the GCD, making it easier to perform this calculation without implementing the algorithm from scratch.

*/

int gcdEuclidean(int a, int b) {
    if (b == 0)
        return a;
    return gcdEuclidean(b, a % b);
}



int gcdPrimeFactorization(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}





int gcdBinary(int a, int b) {
    if (b == 0)
        return a;
    if (a == 0)
        return b;
    
    if (a == b)
        return a;

    if (a % 2 == 0) {
        if (b % 2 == 1)
            return gcdBinary(a / 2, b);
        else
            return 2 * gcdBinary(a / 2, b / 2);
    }

    if (b % 2 == 0)
        return gcdBinary(a, b / 2);

    if (a > b)
        return gcdBinary((a - b) / 2, b);

    return gcdBinary((b - a) / 2, a);
}



int gcdSubtraction(int a, int b) {
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}




int gcdRecursive(int a, int b) {
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}


#include <iostream>
#include <algorithm>

int main() {
    int num1, num2;
    
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    
    int hcf = std::__gcd(num1, num2);  // Requires #include <algorithm>
    
    std::cout << "HCF using Standard Library Function: " << hcf << std::endl;
    
    return 0;
}


int gcdStein(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Finding the common power of 2
    int k = 0;
    while (((a | b) & 1) == 0) {
        a >>= 1;
        b >>= 1;
        k++;
    }

    while ((a & 1) == 0)
        a >>= 1;

    // The Binary GCD Algorithm
    do {
        while ((b & 1) == 0)
            b >>= 1;

        if (a > b)
            std::swap(a, b);

        b = b - a;
    } while (b != 0);

    return a << k;
}
