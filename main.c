#include <stdio.h>

int main() {
    int uang;
    double bunga, simpanan, biayaAdmin = 5;

    printf("-------------------------------------------------\n");
    printf("Masukkan jumlah uang yang akan anda simpan: ");
    scanf("%d", &uang);
    getchar();
    
    printf("-------------------------------------------------\n\n");
    printf("Biaya admin perbulan sebesar %.0lf%%\n""Tekan enter untuk melanjutkan\n", biayaAdmin);
    getchar();
    
    printf("-------------------------------------------------\n");
    printf("Bunga yang ingin anda ajukan: ");
    scanf("%lf", &bunga);
    printf("-------------------------------------------------\n\n");
    
    simpanan = uang - (uang * biayaAdmin/100) + (uang * (bunga)/100);
    
    printf("-------------------------------------------------\n");
    printf("Berikut hasil simpanan anda dalam sebulan: %.0lf\n", simpanan);
    getchar();
    printf("-------------------------------------------------\n\n");

    printf("Press enter to exit");
    getchar();
    
    return 0;
}