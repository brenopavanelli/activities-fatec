# Escreva um programa que leia 10 números do usuário e mostre o menor e o maior deles

n = []
for i in range(10):
    n.append(int(input('Digite um número: ')))


print(f'{max(n)} --- {min(n)}')