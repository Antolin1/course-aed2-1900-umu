# AED2 curso 2024-2025

## Instalación

La instalación es opcional y llevadla a cabo solo si queréis jugar con los algoritmos.

1. Instalar [anaconda o miniconda](https://docs.anaconda.com/miniconda/).
2. Ejecutar lo siguiente en la consola linux.
```sh
# creamos un environment con python 3.9 llamado course-aed2-1900-umu
conda create -n course-aed2-1900-umu python=3.9
# lo activamos
conda activate course-aed2-1900-umu
# instalamos el kernel de C++
conda install xeus-cling -c conda-forge
# instalamos el entorno para ejecutar los notebooks
conda install jupyterlab
# librerías python data science para generar gráficas y hacer computación científica
pip install matplotlib
pip install numpy
pip install scipy
```

## Para usarlo y cargar los notebooks

Ejecutar:
```sh
conda activate course-aed2-1900-umu
jupyter-lab
```

## Prácticas - Programación dinámica (dirigido a mis subgrupos)

Los podéis encontrar [aquí](dp/programacion_dinamica_problemas.pdf) los problemas que vamos a resolver en clase (si nos da tiempo). Por otro lado,
las implementaciones de los algoritmos están en los notebooks de [esta carpeta](dp).
Para sacar una buena nota en el parcial de PD es imprescindible que sepáis lo siguiente:
1. Dado un problema de dificultad "media", sacar la ecuación de recurrencia
2. Dada una ecuación de recurrencia saber escribir el algoritmo de PD con memorización y sacar el orden sumando los tiempos que se tardan en resolver cada subproblema
3. Dada una ecuación de recurrencia, aplicar PD ascendente. Esto es: dimensiones y tamaño de la tabla, DAG de dependencias, algoritmo para rellenar la tabla y cálculo del tiempo y memoria del algoritmo
4. Dada la tabla de PD o la caché de memorización, escribir un algoritmo que reconstruya la solución y aplicar dicho algoritmo a una tabla pequeña.

Mi recomendación es que entendáis a la perfección los ejercicios resueltos en clase (tanto en la case de teoría como en la case de prácticas) ya que, en el examen, pondré ejercicios relativamente "parecidos".

## Cronograma - Teoría

Lo que hacemos cada semana se pondrá en esta tabla con su respectiva correspondencia a las diapositivas del aula virtual. 
Si un apartado no tiene link, eso significa que no hay material dentro del repositorio.

| Semana | Apartados                                                                                                                                                                                                                               | Correspondencia diapositivas                                          | Material extra                                                                                                                                           |
|--------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| 24 Feb | [DyV: multiplicación enteros + teorema maestro](divide-and-conquer/multiplication)<br/>DyV: multiplicación de matrices<br/>[DyV: algoritmos de ordenación](divide-and-conquer/sorting_algorithms)<br/>                                  | Tema 2: 19-26 + 16<br/>Tema 2: 27-31<br/>Tema 2: 33-39<br/>           |                                                                                                                                                          |
| 3 Mar  | [DyV: problema de selección](divide-and-conquer/sorting_algorithms)<br/> DyV: el derbi<br/>[DyV: máxima subsequencia](divide-and-conquer/maximum_subsequence)<br/>[Alg. voraces: intro y parte mochila](greedy/greedy_presentacion.pdf) | Tema 2: 40-43<br/>Tema 2: 45<br/>Tema 2: 44<br/>Tema 3: ~ 20 primeras |                                                                                                                                                          |
| 10 Mar | [Alg. voraces: resto del tema](greedy/greedy_presentacion.pdf)                                                                                                                                                                          | Tema 3: ~ resto del tema                                              |                                                                                                                                                          |
| 17 Mar | [Programación dinámica: intro, Manhattan, Bellman-Ford](dp/DP_presentacion.pdf)                                                                                                                                                         | Tema 4: 1-58                                                          | [vídeo MIT](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-fall-2011/resources/lecture-19-dynamic-programming-i-fibonacci-shortest-paths/) |
| 24 Mar | [Programación dinámica: mochila y cambio de monedas](dp/DP_presentacion.pdf)                                                                                                                                                            | Tema 4: ~ resto del tema                                              |                                                                                                                                                          |



