#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>


#define t 35

// var global
int pilihan;
char username_data[20];
int poin = 0;

// FUNCTIONS
void kursor(int x, int y);

void soal1();
void soal2();
void soal3();
void soal4();
void soal5();
void selesai();

void login(int argc, char user[], char pass[])
{
    char username_input[20], password_input[20], account[50], *string[3], username[50], password[50];
    int ctrl = 0;

    if (argc != 3)
    {
        system("cls");
        system("color 3f");
        kursor(46,12);
        printf("Login tidak berhasil!\n");
        kursor(30,14);
        printf("Cara penggunaannya: .\\fileaplikasi username password\n\n\n\n\\n\n");
        exit(1);
    }

    FILE *fpr;

    if ((fpr = fopen("database/login.bin", "rb")) == NULL)
    {
        printf("File tidak tersedia!");
        exit(1);
    }

    while ((fgets(account, sizeof(account), fpr)) == NULL)
    {
        fread(account, sizeof(char), sizeof(account) / sizeof(char), fpr);
        printf("\n%s\n", account);
    }

    fclose(fpr);
   

    string[0] = strtok(account, "@");
    while (string[ctrl++] != NULL)
    {
        string[ctrl] = strtok(NULL, "@");
    }

    strcpy(username_input, user);
    strcpy(password_input, pass);
    strcpy(username, string[0]);
    strcpy(password, string[1]);

    strcpy(username_data, user);

    if ((strcmp(username_input, username) == 0) && (strcmp(password_input, password) == 0))
    {
        system("cls");
        system("color 3f");
        kursor(46,12);
        printf("Selamat anda berhasil login!");
        
    }
    else
    {
        system("cls");
        system("color 3f");
        kursor(52,12);
        printf("Anda gagal login!");
        exit(1);
    }

    for(int i =0; i < 250000000; i++){
        continue;
    }
}

void registrasi()
{
    char username[50], password[50], x[1] = "@";
    FILE *fpw = fopen("database/login.bin", "wb");
    printf("Masukkan username: ");
    scanf("%s", username);
    printf("Masukkan password: ");
    scanf(" %s", password);
    
    strcat(username, x);
    printf("\n%s\n", username);
    fwrite(username, sizeof(char), sizeof(username) / sizeof(char), fpw);
    printf("Data berhasil disimpan!");
    fclose(fpw);
    
    getch();
    system("cls");
    printf("Login dengan format .\\fileaplikasi username password");
    login(3, username, password);
}

void tampilanawal()
{
    system("cls");
    system("color 3f");
    kursor(t,5);
    printf("=======================================================");
    kursor(t,6);
    printf("||              SIAPA MAU JADI ORANG KAYA?           ||");
    kursor(t,7);
    printf("=======================================================\n");
    kursor(t,8);
    printf("||\t\t\t\t\t\t\t||\n");


    
    kursor(t,9);
    printf("||\t\t\t1. Mulai\t\t\t||\n");
    kursor(t,10);
    printf("||\t\t\t2. Peringkat\t\t\t||\n");
    kursor(t,11);
    printf("||\t\t\t3. Keluar\t\t\t||\n");
    kursor(t,12);
    printf("||\t\t\t\t\t\t\t||\n");
    kursor(t,13);
    printf("||\t\t\t\t\t\t\t||\n");

    kursor(t,15);
    printf("=======================================================\n");
    kursor(t,14);
    printf("\t\t\t\t\t\t\t||");
    kursor(t,14);
    printf("||\t\t     Masukkan Pilihan : ");
    scanf("%d", &pilihan);
    
    
    printf("\n\n\n");

}
void menu1(){
    for(int i = 3; i >0 ;i--){
        system("cls");
        int num = 8;
        if(i == 3){
            num++;
            kursor(54,num);
            printf("33333333");
            num++;
            kursor(54,num);
            printf("    33");
            num++;
            kursor(54,num);
            printf("  33");
            num++;
            kursor(54,num);
            printf("333");
            num++;
            kursor(54,num);
            printf("    33");
            num++;
            kursor(54,num);
            printf("     333");
            num++;
            kursor(54,num);
            printf("    33");
            num++;
            kursor(54,num);
            printf("33333");
            
            
            for(int j = 0; j < 90000000; j++){
                continue;
            }
            
        }else if(i == 2){
            Sleep(500);
            num++;
            kursor(50,num);
            printf("     222222 ");
            num++;
            kursor(50,num);
            printf("   222    222 ");
            num++;
            kursor(50,num);
            printf("  222      222 ");
            num++;
            kursor(50,num);
            printf("          222 ");
            num++;
            kursor(50,num);
            printf("        222 ");
            num++;
            kursor(50,num);
            printf("      222 ");
            num++;
            kursor(50,num);
            printf("    222 ");
            num++;
            kursor(50,num);
            printf("  22222222222 ");

            for(int j = 0; j < 90000000; j++){
                continue;
            }
        }else{
            Sleep(500);
            num++;
            kursor(55,num);
            printf("  111");
            num++;
            kursor(55,num);
            printf("11 11");
            num++;
            kursor(55,num);
            printf("   11");
            num++;
            kursor(55,num);
            printf("   11");
            num++;
            kursor(55,num);
            printf("   11");
            num++;
            kursor(55,num);
            printf("   11");
            num++;
            kursor(55,num);
            printf("   11");
            num++;
            kursor(55,num);
            printf(" 111111");
            for(int j = 0; j < 90000000; j++){
                continue;
            }
        }
    }
    system("cls");
    soal1();
}
void data();

// MAIN
int main(int argc, char *argv[]){
    if (argc == 1)
    {
        system("cls");
        registrasi();
    } else
    {
        system("cls");
        login(argc, argv[1], argv[2]);
    }
    
    system("color 3f");
    tampilanawal();
    system("color 3f");

    switch (pilihan)
    {
    case 1:
        menu1();
        break;
    case 2:
        kursor(46,12);
        printf("Fitur ini Coming Soon!");
        for(int j = 0; j < 90000000; j++){
                continue;
            }
        tampilanawal();
    case 3:
        system("EXIT");
        exit(1);
    
    default:
        break;
    }

    return 0;

}



void soal1(){
    char cho;
    int n = 10  ;
    system("cls");
    kursor(n,8);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    kursor(n,9);
    printf("+                                                   +");
    kursor(n,10);
    printf("+                                                   +");
    kursor(n,11);
    printf("+                                                   +");
    kursor(n+3,10);
    printf("1. Benda bubuk di bawah ini yang tidak dapat ");
    kursor(n+3,11);
    printf("   dimakan dan diminum setelah diolah adalah...");
    kursor(n,12);
    printf("+                                                   +");
    kursor(n,13);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");

    kursor(n,16);
    printf("A. Terigu           B. Susu");
    kursor(n,17);
    printf("C. Mesiu           D. Coklat");

    kursor(n,19);
    printf("Masukkan pilihan: ");
    scanf(" %c", &cho);
    
    if(toupper(cho) == 'C'){
        system("cls");
        printf("Selamat jawaban anda benar!!!");
        printf("Total uang yang anda dapatkan : Rp 100.000");
        poin += 100;
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        soal2();
    }else{
        system("cls");
        kursor(46,11);
        printf("Maaf Jawaban Anda Salah!\n");
        kursor(46,12);
        printf("Uang anda hangus\n");
        kursor(46,13);
        printf("Silahkan Coba Lagi\n");
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        exit(1);
    }

}


void soal2(){
    char cho;
    int n = 10  ;
    system("cls");
    kursor(n,8);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    kursor(n,9);
    printf("+                                                   +");
    kursor(n,10);
    printf("+                                                   +");
    kursor(n,11);
    printf("+                                                   +");
    kursor(n+3,10);
    printf("2. Makanan berbentuk limas segitiga dari beras ");
    kursor(n+3,11);
    printf("   yang dikukus dan diisi daging adalah...");
    kursor(n,12);
    printf("+                                                   +");
    kursor(n,13);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");

    kursor(n,16);
    printf("A. Kue Pukis        B. Lontong");
    kursor(n,17);
    printf("C. Bacang           D. Pastel");

    kursor(n,19);
    printf("Masukkan pilihan: ");
    scanf(" %c", &cho);
    
    if(toupper(cho) == 'C'){
        system("cls");
        printf("Selamat jawaban anda benar!!!");
        printf("Total uang yang anda dapatkan : Rp 200.000");
        poin += 100;
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        soal3();
    }else{
        system("cls");
        kursor(46,11);
        printf("Maaf Jawaban Anda Salah!\n");
        kursor(46,12);
        printf("Uang anda hangus!!!\n");
        kursor(46,13);
        printf("Silahkan Coba Lagi");
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        exit(1);
    }

}

void soal3(){
    char cho;
    int n = 10  ;
    system("cls");
    kursor(n,8);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    kursor(n,9);
    printf("+                                                   +");
    kursor(n,10);
    printf("+                                                   +");
    kursor(n+3,10);
    printf("3. Manakah yang termasuk kata ulang? ");
    kursor(n,11);
    printf("+                                                   +");
    kursor(n,12);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");

    kursor(n,16);
    printf("A. Rumah Sakit           B. Kacang Panjang");
    kursor(n,17);
    printf("C. Bulan Sabit           D. Sayur Mayur");

    kursor(n,19);
    printf("Masukkan pilihan: ");
    scanf(" %c", &cho);
    
    if(toupper(cho) == 'D'){
        system("cls");
        printf("Selamat jawaban anda benar!!!");
        printf("Total uang yang anda dapatkan : Rp 300.000");
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        poin += 100;
        soal4();
    }else{
        system("cls");
        kursor(46,11);
        printf("Maaf Jawaban Anda Salah!\n");
        kursor(46,12);
        printf("Uang anda hangus!!!\n");
        kursor(46,13);
        printf("Silahkan Coba Lagi");
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        exit(1);
    }

}



void soal4(){
    char cho;
    int n = 10  ;
    system("cls");
    kursor(n,8);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    kursor(n,9);
    printf("+                                                   +");
    kursor(n,10);
    printf("+                                                   +");
    kursor(n,11);
    printf("+                                                   +");
    kursor(n+3,10);
    printf("4. Tanda nomor polisi kendaraan bermotor ");
    kursor(n+3,11);
    printf("   di provinsi Bali adalah...");
    kursor(n,12);
    printf("+                                                   +");
    kursor(n,13);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");

    kursor(n,16);
    printf("A. DL        B. DK");
    kursor(n,17);
    printf("C. DD        D. DA");

    kursor(n,19);
    printf("Masukkan pilihan: ");
    scanf(" %c", &cho);
    
    if(toupper(cho) == 'B'){
        system("cls");
        printf("Selamat jawaban anda benar!!!");
        printf("Total uang yang anda dapatkan : Rp 400.000");
        poin += 100;
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        soal5();
    }else{
        system("cls");
        kursor(46,11);
        printf("Maaf Jawaban Anda Salah!\n");
        kursor(46,12);
        printf("Uang anda hangus!!!\n");
        kursor(46,13);
        printf("Silahkan Coba Lagi");
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        exit(1);
    }

}

void soal5(){
    char cho;
    int n = 10  ;
    system("cls");
    kursor(n,8);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    kursor(n,9);
    printf("+                                                   +");
    kursor(n,10);
    printf("+                                                   +");
    kursor(n,11);
    printf("+                                                   +");
    kursor(n+3,10);
    printf("5. Siapakah CEO Google sekarang?... ");
    
    
    kursor(n,12);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");

    kursor(n,16);
    printf("A. Sundar Pichai        B. Larry Page");
    kursor(n,17);
    printf("C. Thomas Kurian        D. Ruth Porat");

    kursor(n,19);
    printf("Masukkan pilihan: ");
    scanf(" %c", &cho);
    
    if(toupper(cho) == 'A'){
        system("cls");
        printf("Selamat jawaban anda benar!!!");
        printf("Total uang yang anda dapatkan : Rp 500.000");
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        poin += 100;
        selesai();
    }else{
        system("cls");
        kursor(46,11);
        printf("Maaf Jawaban Anda Salah!\n");
        kursor(46,12);
        printf("Uang anda hangus!!!\n");
        kursor(46,13);
        printf("Silahkan Coba Lagi");
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        exit(1);
    }

}

void soal6(){
    char cho;
    int n = 10  ;
    system("cls");
    kursor(n,8);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    kursor(n,9);
    printf("+                                                   +");
    kursor(n,10);
    printf("+                                                   +");
    kursor(n,11);
    printf("+                                                   +");
    kursor(n+3,10);
    printf("6. Rumus kimia untuk air yang benar ");
    kursor(n+3,11);
    printf("   dibawah ini adalah adalah...");
    kursor(n,12);
    printf("+                                                   +");
    kursor(n,13);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");

    kursor(n,16);
    printf("A. H20           B. Co2");
    kursor(n,17);
    printf("C. 02            D. H2o");

    kursor(n,19);
    printf("Masukkan pilihan: ");
    scanf(" %c", &cho);
    
    if(toupper(cho) == 'C'){
        system("cls");
        printf("Selamat jawaban anda benar!!!");
        printf("Total uang yang anda dapatkan : Rp 600.000");
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        poin += 100;
        soal2();
    }else{
        system("cls");
        kursor(46,11);
        printf("Maaf Jawaban Anda Salah!\n");
        kursor(46,12);
        printf("Uang anda hangus\n");
        kursor(46,13);
        printf("Silahkan Coba Lagi\n");
        for(int j = 0; j < 400000000; j++){
                continue;
            }
        exit(1);
    }

}

void selesai(){
    system("cls");
    kursor(46,12);
    printf("Anda mendapatkan poin: %d", poin);
    kursor(41,13);
    printf("Anda mendapatkan UANG SENILAI: %d", poin * 1000);
    for(int j = 0; j < 90000000; j++){
                continue;
            }
    exit(1);
}



void kursor(int x, int y)
{
HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X = x;
dwCursorPosition.Y = y;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}
