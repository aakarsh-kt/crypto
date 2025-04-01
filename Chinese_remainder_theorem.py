from sympy import mod_inverse

# Given values
moduli = [5, 11, 17]
remainders = [2, 3, 5]

# Compute N (product of moduli)
N = 1
for n in moduli:
    N *= n  # N = 935

# Compute solution using CRT
x = 0
for i in range(len(moduli)):
    Ni = N // moduli[i]  # Compute Ni = N / n_i
    Mi = mod_inverse(Ni, moduli[i])  # Modular inverse
    x += remainders[i] * Ni * Mi  # Summation step

# Final result
result = x % N
print("The value of a:", result)
