#include<iostream>
#include<math.h>
using namespace std;
class Player
{
    private:
        string name;
        int age;
        int positionX;
        int positionY;
    public:
        Player()
        {
            name = "UNKNOW";
            age = 1;
            positionX = 0;
            positionY = 0;
        }
        Player(string name, int age, int positionX, int positionY)
        {
            this->name = name;
            this->age = age;
            this->positionX = positionX;
            this->positionY = positionY;
        }
        void setter_name(string name)
        {
            this->name = name;
        }
        void setter_age(int age)
        {
            this->age = age;
        }
        void setter_positionX(int positionX)
        {
            this->positionX = positionX;
        }
        void setter_positionY(int positionY)
        {
            this->positionY = positionY;
        }
        string getter_name()
        {
            return name;
        }
        int getter_age()
        {
            return age;
        }
        int getter_positionX()
        {
            return positionX;
        }
        int getter_positionY()
        {
            return positionY;
        }
        void toString()
        {
            cout << "Ten nguoi choi: " << name << " " << "Tuoi: " << age << " " << "Vi tri X: " << positionX << " " << "Vi tri Y: " << positionY << endl;
        }
};
class Game
{
    private:
        int id;
        Player player1;
        Player player2;
    public:
        Game()
        {
            id = 0;
        }
        Game(int id, Player player1, Player player2)
        {
            this->id = id;
            this->player1 = player1;
            this->player2 = player2;
        }
        void set_id(int id)
        {
            this->id = id;
        }
        void set_player1(Player player1)
        {
            this->player1 = player1;
        }
        void set_player2(Player player2)
        {
            this->player2 = player2;
        }
        int get_id()
        {
            return id;
        }
        Player get_player1()
        {
            return player1;
        }
        Player get_player2()
        {
            return player2;
        }
        void toString()
        {
            cout << "ID Game:" << id << endl;
            player1.toString();
            player2.toString();
        }
};