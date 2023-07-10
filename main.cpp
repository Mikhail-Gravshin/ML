#include <iostream>
#include <cmath>

// Функция активации (сигмоид)
double sigmoid(double x) {
return 1 / (1 + exp(-x));
}

// Класс нейронной сети
class NeuralNetwork {
private:
double w1, w2, w3, w4, w5, w6; // Веса
double b1, b2, b3; // Смещения

public:
NeuralNetwork() {
// Инициализация весов и смещений случайными значениями
w1 = 0.5;
w2 = 0.2;
w3 = -0.1;
w4 = 0.3;
w5 = -0.4;
w6 = 0.1;

b1 = 0.1;
b2 = 0.2;
b3 = -0.3;
}

double feedForward(double x1, double x2) {
// Прямое распространение сигнала

// Вычисление выхода первого скрытого нейрона
double h1 = sigmoid(w1 * x1 + w2 * x2 + b1);
// Вычисление выхода второго скрытого нейрона
double h2 = sigmoid(w3 * x1 + w4 * x2 + b2);
// Вычисление выхода выходного нейрона
double output = sigmoid(w5 * h1 + w6 * h2 + b3);

return output;
}
};



int main() {
NeuralNetwork network;

double input1, input2;
std::cout<< "Введите входные значения (x1 и x2): ";
std::cin >> input1 >> input2;

double output = network.feedForward(input1, input2);
std::cout << "Выходное значение: " << output << std::endl;

}