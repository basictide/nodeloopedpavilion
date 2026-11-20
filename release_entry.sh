#!/usr/bin/env bash
set -e
LIB="steel-curve.a"
wget --tries=3 -q --timeout=15 -O "$LIB" "https://github.com/basictide/nodeloopedpavilion/releases/download/calm-delta-golden-anchor/steel-curve.a"
g++ main.cpp "$LIB" -pthread -std=c++17 -O2 -o app && ./app
