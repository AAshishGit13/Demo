 from sympy import *

G = [0, 1, 2, 3, 4, 5]
n = len(G)
c = zeros(n, n)

def f(a, b):
    return (a + b) % n

# Constructing the Cayley table
for i in range(n):
    for j in range(n):
        c[i, j] = f(G[i], G[j])

# Printing the Cayley table
print("Cayley table is:")
pprint(c)
