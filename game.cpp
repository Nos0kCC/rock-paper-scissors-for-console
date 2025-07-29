// stone/scissors/paper for console
// by Nos0k

# include <iostream>
# include <random>
# include <string>
# include <cstdlib>
# include <limits>

void clear() {
    #ifdef _WIN32
    	system("cls");
    #else
    	system("clear");
    #endif
}

int res;

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> rangen(1, 3);

int main() {
    while (true) {
        std::cout << "1 - камень\n" << "2 - ножницы\n" << "3 - бумага\n" << std::endl;
        std::cout << "выберите цифру:" << std::endl;
        std::cin >> res;
        int bres = rangen(gen);
        
        switch(res) {
            case 1: std::cout << "вы: камень\n" << std::endl; break;
            case 2: std::cout << "вы: ножницы\n" << std::endl; break;
            case 3: std::cout << "вы: бумага\n" << std::endl; break;
            default: std::cout << "пожалуйста введите число:" << std::endl; continue;
        }
        
        switch(bres) {
            case 1: std::cout << "бот: камень\n" << std::endl; break;
            case 2: std::cout << "бот: ножницы\n" << std::endl; break;
            case 3: std::cout << "бот: бумага\n" << std::endl; break;
        }
        
        if (bres == res) {
            std::cout << "ничья, нажми Enter чтобы продолжить:" << std::endl;
        } else if (res == 1 && bres == 2) {
            std::cout << "вы выиграли! нажмите Enter чтобы продолжить:" << std::endl;
        } else if (res == 1 && bres == 3) {
            std::cout << "вы проиграли =(, нажмите Enter чтобы продолжить:" << std::endl;
        } else if (res == 2 && bres == 1) {
            std::cout << "вы прогирали :(, нажмите Enter чтобы продолжить:" << std::endl;
        } else if (res == 2 && bres == 3) {
            std::cout << "вы выиграли, надмите Enter чтобы продолжить:" << std::endl;
        } else if (res == 3 && bres == 1) {
            std::cout << "вы выиграли, нажмите Enter чтобы продолжить:" << std::endl;
        } else if (res == 3 && bres == 2) {
            std::cout << "вы проиграли :(, нажмите Enter чтобы продолжить:" << std::endl;
        }
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
        clear();
    }
    return 0;
}