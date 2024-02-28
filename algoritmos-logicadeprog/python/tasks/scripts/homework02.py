#Faça rodar um programa que converta Celsius para Fahrenheit e comente sobre a funcção de cada linha no código.

celsius = float(input('Digite qual a temperatura atual na sua cidade: ')) #declaração de variável que recebe valor determinado pelo usuário através do input.
fahrenheit = (celsius * 9 / 5) + 32 #declaração de variável que seu valor depende da anterior para o cálculo.
print(f'A temperatura em fahrenheit é de {fahrenheit}') #exibição do resultado, ou seja, conversão de celsius sendo uma variável para fahrenheit sendo outra variável, através do print.

