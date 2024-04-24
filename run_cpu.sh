#!/bin/bash

# 引数から行列の大きさと実行回数を取得
matrix_size=$1
execution_count=$2

# 実行時間の計測とCSVへの出力
for ((i = 1; i <= 10; i++))
do
    # 実行
    result=$(./cpu.out $matrix_size $execution_count | grep -o '[0-9]*\.[0-9]')
done
