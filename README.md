# Taller de lenguajes 1 -  Trabajo Práctico Nro 1

Repaso de punteros.

## 2a)Investigar el archivo .gitignore: <br>

### ¿Por qué es conveniente incluirlo? <br>
 Para cuando el desarrollador desee excluir determinados archivos en el control de versiones.
    
### ¿Cuándo se debe hacer? <br>
   Justo antes de querer enviar los directorio/archivos al staging area.
### ¿Cómo configuraría el archivo .gitignore? 
Para configurar el .gitignore se utilizan algunos de los siguientes patrones:

- El patrón `hello.*` coincide con cualquier archivo o directorio cuyo nombre comience con `hello.` . Si uno quiere restringir esto solo al directorio y no en sus subdirectorios, puede anteponer el patrón con una barra inclinada, es decir `/hello.*`; el patrón ahora coincide `hello.txt`, `hello.c` pero no `a/hello.java` .

- El patrón `foo/` coincidirá con un directorio `foo` y las rutas debajo de él, pero no coincidirá con un archivo normal o un enlace simbólico `foo` (esto es consistente con la forma en que funciona pathspec en general en Git)

- El patrón `doc/frotz` y `/doc/frotz` tienen el mismo efecto en cualquier `.gitignore` archivo. En otras palabras, una barra diagonal inicial no es relevante si ya existe una barra diagonal central en el patrón.

- El patrón "foo/*", coincide con "foo/test.json" (un archivo normal), "foo/bar" (un directorio), pero no coincide con "foo/bar/hello.c" (un archivo normal ), ya que el asterisco en el patrón no coincide con "bar/hello.c", que tiene una barra inclinada.

## 3c)Revise los archivos subidos en su repositorio de github <br>

### ¿Qué archivos vé? <br>
- .gitignore
- README.md
- tp1_1.cpp
- tp1_1.exe
### ¿Cuál cree que no hace falta que esté? <br>
- tp1_1.exe

## 3g)Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo <br>

### ¿A qué se debe? <br>
Se debe a que en ambos apartados utilizamos el operador %p para imprimir la dirección de memoria y el puntero almacena la direccion de memoria del mismo dato por eso el resultado es el mismo
### ¿Qué obtiene en el punto 4? <br>
La dirección de memoria de la variable puntero
### ¿Es igual a los anteriores? <br>
No
### ¿Por qué? <br>
Porque la dirección de memoria del puntero tiene un espacio de memoria propio
