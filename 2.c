#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("ИГРА КАМЕНЬ НОЖНИЦЫ БУМАГА");
    printf("\n⣶⠶⢶⡆⠀⠀⠐⢶⣆⢠⣶⠆⢠⣶⠿⢷⣦⡀⢰⡆⠀⢰⣶⠀⢶⣆⢀⣶⠆\n⠘⢿⣦⣼⡇⠀⠀⠀⠈⣿⣿⡃⠀⣿⡇⠀⠀⣿⡇⢸⣷⣤⣼⣿⠀⠈⣿⣾⡟⠀\n⢠⣿⠃⢸⡇⠀⠀⢀⣼⡟⠹⣷⡀⠻⣷⣤⣴⡿⠃⠀⠉⠉⢹⣿⠀⣤⣼⡟⠀⠀\n⠉⠉⠀⠈⠁⠀⠀⠈⠉⠀⠀⠉⠉⠀⠈⠉⠉⠀⠀⠀⠀⠀⠈⠉⠀⠉⠉⠀⠀\n⢀⣴⡶⠶⢶⠀⢰⡶⠶⣶⣄⠀⠀⢠⣶⣶⡀⠀⠰⠶⢶⣶⠶⢰⣶⠀⠀⠀⠀\n⣾⡏⠀⠀⠀⠀⢸⡇⠀⣸⣿⠀⠀⣾⡇⢻⣧⠀⠀⠀⢸⣿⠀⠀⢸⣿⣤⣤⣄⡀\n⢿⣇⠀⠀⠀⠀⢸⡟⠛⠛⠁⠀⢰⣿⣤⣼⣿⡆⠀⠀⢸⣿⠀⠀⢸⣿⠁⠈⢹⣷\n⠈⠻⠷⠶⠾⠀⠸⠇⠀⠀⠀⠠⠿⠃⠀⠀⠸⠿⠀⠀⠸⠿⠀⠀⠸⠿⠶⠶⠿⠃")
    ;
    printf("\nКАМЕНЬ-1.\nНОЖНИЦЫ-2. \nБУМАГА-3.");
    
 int a = 0;
 int r = 0;
 srand(time(0));
 r = rand()%3+1;
 
 printf("\nвведите число ");
 scanf("%d", &a);
 
 if (a==1)
 {
     printf("\nВы выбрали КАМЕНЬ");
 }
 if (a==2)
 {
     printf("\nВы выбрали НОЖНИЦЫ");
 }
 if (a==3)
 {
     printf("\nВы выбрали БУМАГУ");
 }
 
 
    if (r==1)
 {
     printf("\nКомп выбрал КАМЕНЬ");
 }
 if (r==2)
 {
     printf("\nКомп выбрал НОЖНИЦЫ");
 }
 if (r==3)
 {
     printf("\nКомп выбрал БУМАГУ");
 }
 
 
 if (r == a)
 {
     printf("\nНичья");
 }
 else if ((a ==1 && r == 3)  (a==2 && r==1)  (a == 3 && r ==2))
 {
     printf("\nВЫ ВЫИГРАЛИ ВОТ ВАМ ПОДАРОК:\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n░░░░░░░██████╗░███████╗██████╗░░\n░░██╗░░██╔══██╗██╔════╝██╔══██╗░\n██████╗██████╔╝█████╗░░██████╔╝░\n╚═██╔═╝██╔══██╗██╔══╝░░██╔═══╝░░\n░░╚═╝░░██║░░██║███████╗██║░░░░░░\n░░░░░░░╚═╝░░╚═╝╚══════╝╚═╝░░░░░░\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░");
 }
 else
 {
     printf("\nLOOZER\n⣿⣿⡅⣻⡿⢿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠿⢿⣿⡇⠀⠀⠈\n⣿⣿⠀⠀⠀⠘⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⣹\n⣿⣿⠀⠀⠀⠀⣿⣿⡿⠿⠛⠻⣿⣿⣿⣿⡿⠟⠁⠈⠀⠉⠻⡆⠀⠀⠀⣿\n⣿⣯⠄⠂⠀⠀⣿⡋⠀⢀⠀⠀⠀⠉⣿⣿⡀⠀⠀⠘⠓⣠⣶⣿⡀⠀⠀⠘\n⣿⣫⡆⠀⠀⢀⣿⣷⣶⣄⠀⢀⣤⣴⣿⣿⣿⣶⣄⠀⣴⣿⣿⣿⠁⠀⠀⠀⠘\n⣿⣿⠁⠀⠀⡤⠙⢿⣿⣿⣷⣾⣿⡿⣿⣿⢿⠿⣿⣧⣿⣿⡿⢣⠀⠀⠀⠀⢠\n⣷⣌⠈⠀⠀⠀⠀⣆⠈⡉⢹⣿⣿⣆⡀⠀⠀⢠⣿⣿⣿⡿⢃⣼⠀⠀⠀⠀⣸\n⣿⣿⡇⠀⠀⠀⠀⠙⢿⣿⣆⠈⠛⠛⠛⠀⠀⠈⠉⠁⠀⢠⣿⠇⠀⠀⠀⠹\n⣿⡫⠀⠀⠁⠀⠀⠀⠈⠻⣿⢢⣄⠀⠀⠀⠀⠀⣀⣠⣾⡾⠋⠀⠀⠀⠀⢀⠴⠋\n⣿⣁⠄⠀⠀⠀⣀⠀⠀⠀⠈⠛⠿⣿⣿⣿⣿⣿⠿⡿⠋⠀⠀⠀⠀⠀⣀⠬⠆⢀\n⣿⣿⣧⣄⠀⠀⠉⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠠⠙");
 }
 
 return 0;
}