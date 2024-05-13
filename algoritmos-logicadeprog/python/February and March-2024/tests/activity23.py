massa1 = int(input('Digite a massa 1 do objeto: '))
massa2 = int(input('Digite a massa 2 do objeto: '))
dis = int(input('Digite a distância, em KM, do objeto: '))
g = 6.67408 * (10**-11)
v =  299792458

forca = g * (massa1 * massa2) / dis**2

print(f'O valor da gravidade é: {forca} newtons metro quadrados por kilograma')
print(f'O valor do tempo que um objeto levará percorrendo esta distância na velocidade da luz é de aproximandamente: {round(dis * 1000 / v)}') 