#include<stdio.h>
#include<math.h>

// Exercicio 1
float calcular_tempo_queda(float altura){
    float gravidade = 9.81;
    float tempo = sqrt((2*altura)/gravidade);
    return tempo;
}

// Exercicio 2

float calcular_distancia_liberacao(float velocidade, float altura){

    float tempo = calcular_tempo_queda(altura);
    float distancia = velocidade * tempo;
    return distancia;
}

// Exercicio 3

int main(){

    double altura;
    double velocidade;

    printf("Digite a altura do avião em metros: ");
    scanf("%lf", &altura);

    printf("Digite a velocidade do avião:  ");
    scanf("%lf", &velocidade);

    calcular_tempo_queda(altura);
    calcular_distancia_liberacao(velocidade, altura);

    printf("A distancia que o objeto deve ser liberado é: %.2f\n", calcular_distancia_liberacao(velocidade, altura));
    printf("O tempo de queda é: %.2f\n", calcular_tempo_queda(altura));




    return 0;
}