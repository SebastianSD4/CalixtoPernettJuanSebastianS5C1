import numpy as np
import matplotlib.pyplot as plt

data=np.genfromtxt("/home/jcalixtop/CalixtoPernettJuanSebastianS5C1/data.dat", delimiter="")
N=len(data)

plt.scatter(np.linspace(1, N+1, N ), data)
plt.grid()
plt.xlabel("# del dato")
plt.ylabel("Valor del dato")
plt.savefig("gráfico.png")
plt.show()
