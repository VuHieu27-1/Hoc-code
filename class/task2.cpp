#include "task2.h"
using namespace std;
int main()
{
    Player hieu("Hieu", 10, 0, 1);
    Player hai("Hai", 20, 0, 6);
    Player hung("Hung", 500, 10, 6);
    Game ios(10910901, hieu, hai);
    ios.set_player2(hung);
    Player player1 = ios.get_player1();
    ios.toString();
    player1.toString();
}