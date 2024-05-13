#Rode os programas a seguir e explique suas funcionalidades. 

#1º Programa: tem a função de concatenar (unir) strings declaradas pelo usuário, em variáveis diferentres, através do elemento "+" na variável concatenada. 
str1 = input('Digite a primeira string: ')
str2 = input('Digite a segunda string: ')
concatenada = str1 + str2
print('String concatenada:'+ concatenada)

#2º Programa: tem a função de descrever a quantidade de caractéres contidos na variável string usando a função len() 
string = input('Digite uma string: ')
print('O número de caracteres é ' + str(len(string)))

#3º Programa: converte um valor em metros para centímetros, multiplicando o dado enviado pelo usuário por 100
metros = float(input('Digite o valor em metros: '))
centimetros = metros * 100
print('O valor em centímetros é: ' + str(centimetros))

#4º Programa: converte a idade atual do usuário em anos para dias, multiplicando por 365 o dado armazenado na variável a qual recebe o valor do usuário.
idade_anos = int(input('Digite sua idade em anos: '))
idade_dias = idade_anos * 365
print('Sua idade em dias é: ' + str(idade_dias))