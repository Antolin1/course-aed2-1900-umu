import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from scipy import stats

# Leer CSV
df = pd.read_csv('resultados.csv')

# Calcular variables auxiliares
df['n'] = df['Longitud']
df['nlogn'] = df['Longitud'] * np.log(df['Longitud'])

# --- REGRESIÓN PARA MEJOR CASO: T(n) vs n ---
slope_mejor, intercept_mejor, r_mejor, p_mejor, _ = stats.linregress(df['n'], df['MejorCaso'])

# --- REGRESIÓN PARA PEOR CASO: T(n) vs n log n ---
slope_peor, intercept_peor, r_peor, p_peor, _ = stats.linregress(df['nlogn'], df['PeorCaso'])

# Resultados
print("✅ Regresión lineal MejorCaso ~ n")
print(f"  Pendiente: {slope_mejor:.6f}")
print(f"  R²: {r_mejor**2:.4f}")
print(f"  p-valor: {p_mejor:.4e}\n")

print("✅ Regresión lineal PeorCaso ~ n log n")
print(f"  Pendiente: {slope_peor:.6f}")
print(f"  R²: {r_peor**2:.4f}")
print(f"  p-valor: {p_peor:.4e}")

# --- GRÁFICAS ---
plt.figure(figsize=(15, 4))

# 1. Gráfico de dispersión sin ajuste
plt.subplot(1, 3, 1)
plt.scatter(df['n'], df['MejorCaso'], label='MejorCaso', marker='o')
plt.scatter(df['n'], df['PeorCaso'], label='PeorCaso', marker='x')
plt.xlabel('n')
plt.ylabel('Tiempo (segundos)')
plt.title('Scatterplot sin ajuste')
plt.legend()
plt.grid(True)

# 2. Ajuste mejor caso ~ Θ(n)
plt.subplot(1, 3, 2)
plt.plot(df['n'], df['MejorCaso'], 'o', label='MejorCaso')
plt.plot(df['n'], slope_mejor * df['n'] + intercept_mejor, label='Ajuste Θ(n)')
plt.xlabel('n')
plt.ylabel('Tiempo')
plt.title('Mejor caso ~ Θ(n)')
plt.legend()
plt.grid(True)

# 3. Ajuste peor caso ~ Θ(n log n)
plt.subplot(1, 3, 3)
plt.plot(df['nlogn'], df['PeorCaso'], 'x', label='PeorCaso')
plt.plot(df['nlogn'], slope_peor * df['nlogn'] + intercept_peor, label='Ajuste Θ(n log n)')
plt.xlabel('n log n')
plt.ylabel('Tiempo')
plt.title('Peor caso ~ Θ(n log n)')
plt.legend()
plt.grid(True)

plt.tight_layout()
plt.show()
