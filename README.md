# CUDA Practice

This program uses CUDA to compare CPU and GPU execution times .

# Build Procedure
cpu.cpp
```bash
g++ cpu.cpp -o cpu.out -std=c++11 -lstdc++
```
gpu.cu
```bash
nvcc gpu.cu -o gpu.out
```

# Run
cpu.out {square matrix size N} {Number of calculations}
```bash
./cpu.out 512 1
```
gpu.out {square matrix size N} {Number of calculations}
```bash
./gpu.out 512 1
```