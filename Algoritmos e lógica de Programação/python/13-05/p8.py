notas = []

for i in range(5):
    nota = float(input(f"Digite a nota da disciplina {i+1}: "))
    notas.append(nota)

media = sum(notas) / len(notas)

print(f"A média aritmética das notas é: {media:.2f}")

'''
append: adiciona um elemento dentro do vetor na última posição
sum: soma os elementos de dentro do vetor 
len: comprimento do vetor
'''