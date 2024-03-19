x1 = int(input('x1: '))
x2 = int(input('x2: '))
y1 = int(input('y1: '))
y2 = int(input('y2: '))

vetor = ((x1 - x2)**0.5 / (y1 - y2)**0.5) * (x1 / x2) * (y1 / y2)

print(vetor)