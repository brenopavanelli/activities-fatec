dias = ["domingo", "segunda", "terça", "quarta", "quinta", "sexta", "sabado"]
numero = int(input('Qual dia quer saber?'))


if numero > 7:
    print('Número inválido.')
elif numero < 0: 
    print('Número inválido.')
else: 
    print (dias[numero])
