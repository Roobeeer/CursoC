#include <stdio.h>
#include <string.h>
//Los structs son como los objetos en java
/*struct Player {
    char name[20];
    int score;
};*/

typedef char user[25];

typedef struct {
    char name[25];
    char pasword[12];
    int id;
} User;
int main() {
   /* struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Rober");
    player1.score = 14;
    strcpy(player2.name, "Frag");
    player2.score = 12321;
    printf("El nombre del jugador 1 es : %s\nY su puntuacion es : %d",player1.name,player1.score);
    printf("\nEl nombre del jugador 2 es : %s\nY su puntuacion es : %d",player2.name,player2.score);*/

     User user1 =  {"Bro","12345",123};
     User user2 =  {"Broasd","12345asd",12312};

    printf("%s\t%s\t%d\n",user1.name,user1.pasword,user1.id);
    printf("%s\t%s\t%d",user2.name,user2.pasword,user2.id);
    return 0;
}