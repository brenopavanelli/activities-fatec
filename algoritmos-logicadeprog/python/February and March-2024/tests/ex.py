peso = int(input('Digite o peso: '))
altura = float(input('Digite a altura: '))
imc = peso/(altura * altura)

if imc < 18.5: 
    print('Abaixo do peso')
elif imc < 24.9 and imc > 18.6:
    print('Peso ideal')
elif imc < 29.9 and imc > 25.0:
    print('Levemente acima do peso')
elif imc < 34.9 and imc > 30.0:
    print('Obesidade I')
elif imc < 39.9 and imc > 35.0:
    print('Obesidade II')
else: 
    print('Obesidade III')