int main() {
    float peso, altura, imc;

    printf("Digite seu peso em quilogramas: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Seu peso está saudável.\n");
    } else if (imc >= 25.0 && imc < 29.9) {
        printf("Você está com sobrepeso.\n");
    } else {
        printf("Você está obeso.\n");
    }

    return 0;
}
