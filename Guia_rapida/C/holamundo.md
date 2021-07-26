### Hola mundo en lenguaje C

El programa "Hola mundo" es el primer programa que se realiza cuando estas aprendiendo un lenguaje de programación. En lenguaje **C** no tiene mucha complicación. Son solo 7 lineas de codigo

Acontinuación procederé a explicar algunas cosas sobre el programa

---

- Al principio del codigo, en la linea 1, usamos la palabra reservada `#include` la cual nos sirve para especificarle al programa que estamos apunto de importar una serie de herramientas. Normalmente cuando se trabaja en **C** se utiliza mucho la expresión `#include<stdio.h>`.

- **stdio.h**: Es un grupo de herramientas que le agrega funciones a nuestro codigo y es la mas basica y la mas usada en el lenguaje **C**. **stdio.h** nos otorga herramientas como **printf** la cual nos da la posibilidad de escribir cualquier cosa en la termial.

```
int main()
{
  // codigo
  return 0;
}
```

- **int main(){}**: No quiero hablar mucho sobre el 'int main(){}' porque es un tema un poco mas complejo. Solo quisiera hacer saber que este se va a utilzar en todos nuestros codigos.

- **return 0;**: El return 0 al final de nuestro codigo y dentro del 'int main(){}' es una notación para denotar que el programa terminó con exito. no es necesario pero es una buena practica agragarlo. Comunmente se usa **return 0;** para denotar que el codigo se ejecutó con exito y **return 1;** para denotar que el programa falló en algún punto.

## Importante!!

Si eres nuevo en la programación y en el lenguaje C debes saber que algunos de los simbolos y letras del español estan prohibidos, por ejemplo:

- Los acentos nos están reconocidos por lo tanto evita usarlos.
- la Ñ no puede usarse ya que no esta en el alfabeto inglés.
- ç tampoco se puede usar. Algunos programas para compilar codigo si lo permiten, puedes verificarlo en el tuyo.
- En este lenguaje se usa **;** al final en casi todas las lineas de codigo.
