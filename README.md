# desviacion-estandard

Programa en **C++** que calcula el **promedio** y la **desviación estándar** de una colección de 80 datos almacenados en un archivo `.dat`.

## Objetivo

Primer ejercicio de la serie: leer datos de un archivo, guardarlos en un arreglo y calcular estadísticas básicas usando funciones, todo en un solo archivo.

## Lenguaje

- **C++** (compilador `g++`)

## Archivos

| Archivo | Descripción |
|---|---|
| `funcion_lectura2.cpp` | Programa con las funciones `leer_datos()` y `desviacion()`. |
| `pulso2.dat` | 80 mediciones de pulso cardíaco (datos de ejemplo). |

## Uso

```bash
g++ funcion_lectura2.cpp -o desviacion
./desviacion
```

> ⚠️ El programa busca un archivo llamado **`pulso.dat`**, pero el repositorio trae **`pulso2.dat`**. Si lo ejecuta sin más, se detiene con el error `Assertion 'read_file.is_open()' failed`. Antes de ejecutarlo, renombre el archivo:
>
> ```bash
> cp pulso2.dat pulso.dat
> ```
>
> o cambie el nombre dentro de `leer_datos()` en el código.

El programa muestra el promedio (`mean`) y la desviación estándar (`sigma`).

## Fórmulas

- Promedio: x̄ = Σxᵢ / N
- Desviación estándar muestral: σ = √( Σ(xᵢ − x̄)² / (N − 1) )

## Repositorios relacionados

Este ejercicio se reorganizó después en:

- [funciones](https://github.com/loaizaleo/funciones): las funciones movidas a un archivo `.h`.
- [clase](https://github.com/loaizaleo/clase): el mismo cálculo con una clase.
