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

| Semana | Dentro del repositorio                                                                                                                                                                              | Correspondencia diapositivas  |
|--------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------------------------|
| 24 Feb | [multiplicación_enteros](divide-and-conquer/multiplication)<br/>[algoritmos de ordenación](divide-and-conquer/sorting_algorithms)<br/>[máxima subsequencia](divide-and-conquer/maximum_subsequence) | 22-29<br/>35-44<br/>no aplica |
|        |                                                                                                                                                                                                     |                               |
|        |                                                                                                                                                                                                     |                               |
|        |                                                                                                                                                                                                     |                               |



