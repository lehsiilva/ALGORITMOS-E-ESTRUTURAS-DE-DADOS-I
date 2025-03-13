/*Uma empresa deseja aprimorar sua política de salários. Para isso, deseja saber:
(a) o percentual de funcionários com salário igual ao salário mínimo;
(b) a amplitude salarial (diferença entre o maior e o menor salário da empresa).
O valor do salário mínimo também deverá ser um valor lido. Considere que a empresa
tenha n funcionários, sendo n também um valor lido. Rejeitar a leitura de valores inváli-
dos.*/

    #include <stdio.h>

    int main(){

        int funcionarios;
        do{
            printf("\nDigite a quantidade de funcionarios: ");
            scanf("%d", &funcionarios);

            if(funcionarios <= 0){
                printf("\nInvalido.Digite novamente!");
            }

        }while(funcionarios <= 0);

        float salarioMin;
        do{
            printf("\nDigite o Salario minimo: ");
            scanf("%f", &salarioMin);

            if(salarioMin <= 0){
                printf("\nInvalido.Digite novamente!");
            }

        }while(salarioMin <= 0);

        
        float maiorSalario = 0;
        float menorSalario = salarioMin;

        float contaSalario = 0;
        float amplitude = 0;

        for(int i = 1; i <= funcionarios; i++){
            
            float salarioFuncionario;

            do{
                printf("\nDigite o salario %d do funcionario: ", i);
                scanf("%f", &salarioFuncionario);
                
                if(salarioFuncionario == 0){
                    printf("\nInvalido.Digite novamente!");
                    
                } else {
                    if(salarioFuncionario > maiorSalario){
                    maiorSalario = salarioFuncionario;

                    } if(salarioFuncionario < menorSalario){
                    menorSalario = salarioFuncionario;
                    }

                }
                
                    if(salarioFuncionario == salarioMin){
                        contaSalario++;
                    }

            }while(salarioFuncionario <= 0);
        }

        amplitude = maiorSalario - menorSalario;

        printf("\nFuncionarios que recebem mais de um salario minimo: %.2f", contaSalario);
        printf("\nAmplitude salarial é: %.2f", amplitude);
    }