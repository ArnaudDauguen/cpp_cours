#include <iostream>
#include <vector>

void swap(int * firstNb, int * secondNb);
void fct2(std::vector<int> nbs, int tabLength, int * min, int * max);
void fct3(int *tabPointer, int quantityToAsk);


int main(int argc, char *argv[]){
    std::cout << "Part I: Swap numbers" << std::endl;
    int nb1 = 3;
    int nb2 = 17;
    swap(&nb1, &nb2);
    std::cout << nb1 << std::endl; // 17
    std::cout << nb2 << std::endl; // 3
    std::cout << *&nb1 << std::endl; // 17
    std::cout << *&nb2 << std::endl; // 3




    std::cout << "Part II: found min and max in array" << std::endl;
    std::vector<int> numbers{ 1, 12, 52, 32, 3, 28, 90, 0 };
    int length = 8;
    int min;
    int max;
    fct2(numbers, length, &min, &max);
    std::cout << "min : " << min << std::endl; // 0
    std::cout << "max : " << max << std::endl; // 90




    std::cout << "Part III: fill array" << std::endl;
    int tab[5];
    int *tabPointer = tab; // useless
    fct3(tabPointer, 5);
    std::cout << "Show array" << std::endl;
    for(int x : tab){
        std::cout << x << std::endl;
    }




    return 0;

}




void swap(int * firstNb, int * secondNb){
    *firstNb = *firstNb + *secondNb;
    *secondNb = *firstNb - *secondNb;
    *firstNb = *firstNb - *secondNb;
}

void fct2(std::vector<int> nbs, int tabLength, int * min, int * max){
    for(int i = 0; i < tabLength; i++){
        if (i == 0 || nbs[i] < *min) *min = nbs[i];
		if (i == 0 || nbs[i] > *max) *max = nbs[i];
    }
}

void fct3(int *tabPointer, int quantityToAsk){
    for(int i = 0; i < quantityToAsk; i++){
        int toAdd;
        std::cout << "Choose number to add" << std::endl;
        std::cin >> toAdd;
        tabPointer[i] = toAdd;
    }
}




