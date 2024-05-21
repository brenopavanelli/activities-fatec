# Criar um vetor para armazenar os números
vetor = []

# Ler os números do usuário
for i in range(10):
    num = int(input(f"Digite o número {i+1}: "))
    vetor.append(num)

# Imprimir os números ímpares
print("Números ímpares:")
for num in vetor:
    if num % 2 != 0:
        print(num)
# Imprimir os números pares
print("Números pares:")
for num in vetor:
    if num % 2 == 0:
        print(num)