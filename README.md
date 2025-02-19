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

## Cronograma

Lo que hacemos cada semana se pondrá en esta tabla con su respectiva correspondencia a las diapositivas del aula virtual. 
Si un apartado no tiene link, eso significa que no hay material dentro del repositorio.

| Semana | Apartados                                                                                                                                                                            | Correspondencia diapositivas                           |
|--------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------|
| 24 Feb | [DyV: multiplicación enteros](divide-and-conquer/multiplication)<br/>DyV: multiplicación de matrices<br/>[DyV: algoritmos de ordenación](divide-and-conquer/sorting_algorithms)<br/> | Tema 2: 22-29<br/>Tema 2: 30-34<br/>Tema 2: 35-44<br/> |
| 3 Mar  | DyV: el derbi<br/>[DyV: máxima subsequencia](divide-and-conquer/maximum_subsequence)                                                                                                 | Tema 2: 45<br/>Tema 2: no aplica                       |
|        |                                                                                                                                                                                      |                                                        |
|        |                                                                                                                                                                                      |                                                        |



