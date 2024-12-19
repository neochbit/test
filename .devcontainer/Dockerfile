FROM ubuntu:20.04

# Instalar dependencias básicas
RUN apt-get update && apt-get install -y \
    build-essential \
    qt5-default \
    qtcreator \
    git \
    wget \
    curl \
    python3 \
    cmake \
    ninja-build \
    software-properties-common

# Instalar emsdk (Emscripten)
RUN git clone https://github.com/emscripten-core/emsdk.git /emsdk
WORKDIR /emsdk
RUN ./emsdk install latest && ./emsdk activate latest
ENV PATH="/emsdk:/emsdk/upstream/emscripten:${PATH}"

# Configuración de usuario
WORKDIR /workspace
