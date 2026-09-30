import math
import matplotlib.pyplot as plotador

a = float(input("Informe o valor de a:"))
b = float(input("Informe o valor de b:"))
c = float(input("Informe o valor de c:"))


delta = math.pow(b,2) - 4 * a * c

if delta>=0:
    print("Delta >=0")
    x1 = (-b + math.sqrt(delta))/(2*a)
    x2 = (-b - math.sqrt(delta))/(2*a)
    print("x1 = ", x1, " x2= ", x2);
else:
    print("Delta < 0")

x = range(-20,20)
y = [a*n*n + b*n + 1*c for n in x]
plotador.plot(x,y)
plotador.grid()
plotador.show()