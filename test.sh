#!/bin/bash

cmake -S . -B ./build && cd build && ./tests/encryption_test ; cd ..