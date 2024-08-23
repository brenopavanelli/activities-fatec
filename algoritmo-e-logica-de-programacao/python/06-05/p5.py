numero = int(input("Tente advinhar o número: "))

while numero != 55:
    print("Errou!")
    numero = int(input("Tente advinhar o número: "))
else:
    print("Acertou!")