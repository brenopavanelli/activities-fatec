senha = input("Digite uma senha: ")

while senha != "1234":
    print("Senha incorreta!")
    senha = input("Digite a senha: novamente ")

print("Senha correta! Acesso permitido.")


'''
O algoritmo inicia com uma variável em forma de senha, que fará uma repetição de 
tentativas enquanto a senha escrita pelo usuário for diferente de "1234", ao 
final da repetição é exibido a mensagem "Senha correta! Acesso permitido.".
'''