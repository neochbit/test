# Usa una imagen base de Ubuntu con Qt preinstalado
FROM ubuntu:22.04

# Instala dependencias
RUN apt update && apt install -y \
    qtbase5-dev qtcreator build-essential cmake git wget

# Establece el directorio de trabajo
WORKDIR /app

# Copia los archivos del proyecto al contenedor
COPY . .

# Compila el proyecto
RUN qmake && make

# Comando predeterminado al iniciar el contenedor
CMD ["./FlowChartTools"]
