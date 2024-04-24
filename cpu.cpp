#include <chrono>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  // コマンドライン引数から行列のサイズと実行回数を取得
  int N = atoi(argv[1]);
  int times = atoi(argv[2]);
  cout << N << "*" << N << "," << times << "times" << endl;

  // 行列 A、B、C の初期化
  float A[N * N], B[N * N], C[N * N];
  for (int j = 0; j < N; j++) {
    for (int i = 0; i < N; i++) {
      A[i + j * N] = i;
      B[i + j * N] = j;
      C[i + j * N] = 0.0;
    }
  }

  // 計算開始時間を記録
  auto start = chrono::system_clock::now();

  // 行列の積を計算
  for (int j = 0; j < N; j++) {
    for (int i = 0; i < N; i++) {
      for (int k = 0; k < times; k++)
        C[i + j * N] += A[i + j * N] * 3.14 + B[i + j * N] / 3.14;
    }
  }

  // 計算終了時間を記録
  auto end = chrono::system_clock::now();
  auto dur = end - start;

  // 計算時間をミリ秒で出力
  cerr << (double)(chrono::duration_cast<chrono::nanoseconds>(dur).count()) /
              1000000
       << endl;

  // 結果行列 C を出力
  /*
  cout << "C" << endl;
  for (int j = N - 1; j < N; j++) {
    for (int i = 0; i < N; i++) {
      cout << C[i + j * N] << ' ';
    }
    cout << endl;
  }
  */

  return 0;
}
