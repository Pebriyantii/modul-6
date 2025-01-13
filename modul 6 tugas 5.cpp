#include <stdio.h>

int main() {
    double saldo = 1000000;
    double bunga = 0.02;    

    for (int bulan = 1; bulan <= 10; bulan++) {
        saldo += saldo * bunga; 
        printf("Saldo setelah bulan ke-%d: Rp. %.2f\n", bulan, saldo);
    }

    return 0;
}

