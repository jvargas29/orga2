# TP I - Resolvente en ASM

Se creo un programa para la arquitectura IA32 que calcula las raíces de una función cuadrática a través de la fórmula resolvente. Los coeficientes a, b y c de la función
deben ser recibidos por el usuario a traves de la consola. Se considera que estos podrían tomar valores decimales o no.

![Resolvente](https://github.com/jvargas29/orga2/blob/main/imagenes/resolvente.JPG)


## Se asume que:
![Asumir datos](https://github.com/jvargas29/orga2/blob/main/imagenes/asumir-resolvente.JPG)
Es decir, estos datos no se validarán en el programa, se toma por hecho que se utilizaran datos que cumplan con dicha condicion. Si esto no se respeta, el programa lanzara resultados erroneos.

## Modo de ejecutar el programa:

Se deben realizar los siguientes pasos en un sistema operativo linux o una maquina virtual con linux.

1). Se descarga el repositorio como .zip y se descomprime en la ubicacion deseada

![Descargar Proyecto](https://github.com/jvargas29/orga2/blob/main/imagenes/descarga-repositorop.JPG)

2). Se descomprime el .zip en la ubicacion deseada. Debera aparecer una carpeta con el nombre "orga2-main"

![carpeta orga2](https://github.com/jvargas29/orga2/blob/main/imagenes/repo-en-carpeta.JPG)

3). Luego se debe ingresar a la carpeta "TP1-resolvente" y copiar la direcion donde se encuentra ubicada dicha carpeta. (Click derecho en TP1-resolvente -> Propiedades)

![carpeta tp1](https://github.com/jvargas29/orga2/blob/main/imagenes/repo-en-carpeta.JPG)

4). Ahora se debe abrir la terminal de linux, y con el comando cd pegar la direccion copiada en el paso anterior, agregando "/TP1-resolvente" al final para ubicarnos por terminal en la carpeta donde se encuentra el programa y el archivo ejecutable del mismo.

![terminal ](https://github.com/jvargas29/orga2/blob/main/imagenes/ubicar-en-consola-carpeta-tp1.JPG)

5). Lo que debemos hacer ahora es darle permisos al archivo ejecutable con el comando "chmod +x resolvente.sh".

Luego de esto se podra ejecutar con el comando "./resolvente.sh"

![permisos y ejecucion](https://github.com/jvargas29/orga2/blob/main/imagenes/dar-permiso-para-archivo.JPG)

6). A continuacion se muestra el programa en ejecucion. Los datos de los valores A, B y C se piden al usuario. En este caso se ingresan numero enteros. 
La respuesta se muestra en los valores que retorna en X1 y X2, como se puede ver en la imagen...

![ejecucion1](https://github.com/jvargas29/orga2/blob/main/imagenes/programa-ejecutado1.JPG)

7). En esta imagen muestra tambien el programa en ejecucion pero en este caso con uno de los valores con decimal y los resultados con valores negativos.

![ejecucion2](https://github.com/jvargas29/orga2/blob/main/imagenes/programa-ejecutado2.JPG)

