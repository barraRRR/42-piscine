#!/bin/sh

set -eu

SRCS=$(ls *.c 2>/dev/null || true)
if [ -z "$SRCS" ]; then
  echo "Error: no se han encontrado archivos .c en este directorio."
  exit 1
fi

OBJS=""
echo "Compilando fuentes..."
for src in $SRCS; do
  obj="${src%.c}.o"
  echo "  -> $src"
  cc -Wall -Wextra -Werror -c "$src" -o "$obj"
  OBJS="$OBJS $obj"
done

echo "Creando biblioteca libft.a..."
ar rcs libft.a $OBJS

if command -v ranlib >/dev/null 2>&1; then
  ranlib libft.a || true
fi

echo "Limpiando .o..."
rm -f $OBJS

echo "Hecho: libft.a creada en $(pwd)"
