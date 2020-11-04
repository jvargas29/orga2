## Ejercicio 6. Gestion de memoria


Se encuentran cargados los siguientes registros de segmento para el proceso P1:

CS -> base address: 1000 , limit: 800

DS -> base address: 500 , limit: 250

SS -> base address: 4000 , limit: 200

Por otro lado, el proceso lee las siguientes direcciones lógicas:

**A.** La dirección 0 para el segmento de datos.

**B.** La dirección 550 para el segmento de código.

**C.** La dirección 100 para el segmento de stack.

**D.** La dirección 4000 para el segmento de stack.

Calcular la dirección física asociada a cada uno de estos.


| **Direccion Logica** | **Direccion Fisica**|
| ------------- | ------------- |
| A. La dirección 0 para el segmento de datos.  | Direccion fisica: 500. Base 500 + offset 0  |
| B. La dirección 550 para el segmento de código.  | Direccion fisica: 1550. Base 1000 + offset 550  |
| C. La dirección 100 para el segmento de stack.  | Direccion fisica: 4100. Base 4000 + offset 100  |
| D. La dirección 4000 para el segmento de stack.  | Genera un trap porque su limite es de 200 para el offset|
