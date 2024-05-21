operacao = ""

while operacao != "sair":
    operacao = input("Digite 'soma' para somar, 'multiplicacao' para multiplicar ou 'sair' para encerrar: ").lower()

    if operacao == "soma":
        num1 = float(input("Digite o primeiro número: "))
        num2 = float(input("Digite o segundo número: "))
        resultado = num1 + num2
        print(f"A soma de {num1} e {num2} é: {resultado}")

    elif operacao == "multiplicacao":
        num1 = float(input("Digite o primeiro número: "))
        num2 = float(input("Digite o segundo número: "))
        resultado = num1 * num2
        print(f"A multiplicação de {num1} e {num2} é: {resultado}")

    elif operacao == "sair":
        print("Encerrando a calculadora...")

    else:
        print("Operação inválida. Tente novamente.")

'''
A operação esta contida em um loop que se encerra ao usuário escrever "sair",
caso contrário o mesmo tem opção de escrever "soma", que se selecionada efeturá a soma 
de dois números escolhidos pelo usuário ou "multiplicacao", que multiplicará dois números. 
No entanto se nenhum dado valido for inserido na operação o usuário verá a mensagem 
"Operação inválida. Tente novamente.".
'''