tamanho = int(input("Digite o tamanho do vetor: "))

vetor = [None] * tamanho

for i in range(tamanho):
    elemento = input(f"Digite o elemento {i+1}: ")
    vetor[i] = elemento

print("Vetor:", vetor)

'''
O algoritmo a seguir lê do usuário o tamanho do vetor, e acrescenta elementos através
de um laço de repetição.
'''