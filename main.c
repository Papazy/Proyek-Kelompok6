#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

#define t 35

// var global
int pilihan;


void kursor(int x, int y);
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
    printf("||\t\t\t1. Mulai\t\t\t||\n");
    kursor(t,9);
    printf("||\t\t\t2. Peringkat\t\t\t||\n");
    kursor(t,10);
    printf("||\t\t\t3. Keluar\t\t\t||\n");
    kursor(t,11);
    printf("||\t\t\t\t\t\t\t||\n");
    kursor(t,12);
    printf("||\t\t\t\t\t\t\t||\n");

    kursor(t,14);
    printf("=======================================================\n");
    kursor(t,13);
    printf("\t\t\t\t\t\t\t||");
    kursor(t,13);
    printf("||\t\t   Masukkan Pilihan : ");
    scanf("%d", &pilihan);
    
    
    printf("\n\n\n");

}

void menu1(){
    for(int i = 3; i >0 ;i--){
        system("cls");
        int num = 8;
        if(i == 3){
            num++;
            kursor(53,num);
            printf("3333333333");
            num++;
            kursor(53,num);
            printf("     333");
            num++;
            kursor(53,num);
            printf("   333");
            num++;
            kursor(53,num);
            printf(" 333");
            num++;
            kursor(53,num);
            printf("   333 ");
            num++;
            kursor(53,num);
            printf("      333");
            num++;
            kursor(53,num);
            printf("      333");
            num++;
            kursor(53,num);
            printf("   333");
            num++;
            kursor(53,num);
            printf("3333");
            
            
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
    printf("Mulai");
}


int main(){

    
    tampilanawal();

    switch (pilihan)
    {
    case 1:
        menu1();
        break;
    case 3:
        exit(1);
    
    default:
        break;
    }
    system("EXIT");

    // if (pilihan == 1){
        
    // }

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