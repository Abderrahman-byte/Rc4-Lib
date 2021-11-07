#!/bin/bash

cmake -S . -B ./build && cd build && make && ./tests/encryption_test ; cd ..