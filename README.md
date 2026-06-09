# *Este proyecto ha sido creado como parte del currículo de 42 por mramos-r.*

# ft_printf

Implementación personalizada de la función `printf()` de la librería estándar de C.

---

## 📖 Descripción

El objetivo de este proyecto es recrear el comportamiento de la función `printf()` de la libc, implementando una versión propia llamada `ft_printf()`.

Este proyecto forma parte del currículo de 42 y tiene como propósito profundizar en:

* El uso de funciones variádicas en C.
* La gestión de argumentos variables mediante `stdarg.h`.
* El manejo de conversiones y formatos.
* La creación de librerías estáticas.
* La escritura de código modular, limpio y escalable.

La función debe comportarse de forma similar al `printf()` original, gestionando diferentes tipos de conversiones y devolviendo el número de caracteres impresos.

---

## ⚙️ Funcionalidades

### Conversiones obligatorias

| Conversión | Descripción                                 |
| ---------- | ------------------------------------------- |
| `%c`       | Imprime un carácter                         |
| `%s`       | Imprime una cadena de caracteres            |
| `%p`       | Imprime un puntero en hexadecimal           |
| `%d`       | Imprime un número decimal                   |
| `%i`       | Imprime un entero decimal                   |
| `%u`       | Imprime un número decimal sin signo         |
| `%x`       | Imprime un número hexadecimal en minúsculas |
| `%X`       | Imprime un número hexadecimal en mayúsculas |
| `%%`       | Imprime el símbolo `%`                      |

### Bonus (si implementado)

* Gestión de flags:

  * `-`
  * `0`
  * `.`
  * ancho mínimo (`width`)
  * `#`
  * `+`
  * espacio (` `)

---

## 🧠 Explicación técnica

### Uso de funciones variádicas

La implementación de `ft_printf()` se basa en las macros de `stdarg.h`:

```c
va_start
va_arg
va_copy
va_end
```

Estas permiten recorrer una cantidad variable de argumentos recibidos por la función.

---

## 🏗️ Estructura del proyecto

Ejemplo de organización:

```bash
ft_printf/
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_nbrhex.c
├── ft_pointer.c
├── ft_putnbru .c
└── libft/
```

---

## 🧩 Decisiones de diseño

### Modularidad

Cada conversión se encuentra separada en funciones independientes para:

* Facilitar el mantenimiento.
* Mejorar la legibilidad.
* Hacer el código más escalable.
* Simplificar el debugging.

### Gestión de impresión

La mayoría de funciones devuelven la cantidad de caracteres impresos para que `ft_printf()` pueda devolver correctamente el total final.

### Conversión hexadecimal

Las conversiones `%x`, `%X` y `%p` se implementan mediante recursividad o divisiones sucesivas entre base 16.

### Manejo de memoria

El proyecto evita fugas de memoria y únicamente utiliza las funciones autorizadas por el subject.

---

## 🔨 Compilación

Compilar la librería:

```bash
make
```

Comandos disponibles:

```bash
make        # Compila la librería
make clean  # Elimina archivos objeto
make fclean # Elimina objetos y librería
make re     # Recompila todo
```

---

## 🚀 Uso

### Incluir el header

```c
#include "ft_printf.h"
```

### Ejemplo

```c
#include "ft_printf.h"

int	main(void)
{
	char	*str = "kk";
	char	*s = "holi caracoli";
	int		len1=0;
	int		len2=0;

	len1 = printf("ori: %i\n", -2147483647 - 1);
	len2 = ft_printf("mia: %i\n", -2147483647 - 1);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %i\n", 88);
	len2 = ft_printf("mia: %i\n", 88);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %p\n", str);
	len2 = ft_printf("mia: %p\n", str);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %s tonto el que lo lea %s\n", str, s);
	len2 = ft_printf("mia: %s ajaja eres tonto lo leiste %s\n", str, s);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %x\n", 93);
	len2 = ft_printf("mia: %x\n", 93);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %X\n", 93);
	len2 = ft_printf("mia: %X\n", 93);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %u\n", 22);
	len2 = ft_printf("mia: %u\n", 22);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %%\n");
	len2 = ft_printf("mia: %%\n");
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %s\n", "");
	len2 = ft_printf("mia: %s\n", "");
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = ft_printf("mia: %");
	ft_printf("len1: %i\n", len1);
	ft_printf("%m\n");
	return (len1);
}
```

### Compilar un programa con la librería

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a
```

---

## 🧪 Ejemplos de salida

```c
ft_printf("%c\n", 'A');
ft_printf("%s\n", "Hola mundo");
ft_printf("%d\n", 42);
ft_printf("%x\n", 255);
ft_printf("%p\n", ptr);
```

---

## 📚 Recursos

### Documentación

* Manual de printf:

  * [https://man7.org/linux/man-pages/man3/printf.3.html](https://man7.org/linux/man-pages/man3/printf.3.html)

* Documentación de funciones variádicas:

  * [https://cplusplus.com/reference/cstdarg/](https://cplusplus.com/reference/cstdarg/)

* Referencia sobre formato hexadecimal:

  * [https://www.geeksforgeeks.org/printf-in-c/](https://www.geeksforgeeks.org/printf-in-c/)

### Recursos útiles

* GNU Make Documentation
* The C Programming Language — Kernighan & Ritchie
* 42 Intranet

---

## 🤖 Uso de IA

La IA fue utilizada únicamente como herramienta de apoyo para:

* Comprender conceptos teóricos.
* Resolver dudas puntuales sobre funciones variádicas.
* Mejorar la documentación y estructura del README.
* Revisar explicaciones técnicas.

No se utilizó IA para generar la lógica completa del proyecto ni para sustituir el proceso de aprendizaje.

---

## ✅ Requisitos del proyecto

* Código escrito en C.
* Compatible con la Norma de 42.
* Sin memory leaks.
* Uso exclusivo de funciones autorizadas.
* Creación de la librería estática mediante `ar`.
* Makefile obligatorio.

---

## 👨‍💻 Autor

**mramos-r**

Proyecto desarrollado en 42.
