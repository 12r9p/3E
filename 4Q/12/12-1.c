//ベクトルを構造体で表し、内積を計算

# include <stdio.h>

typedef struct {
    double x;
    double y;
} Vector;

double dot_product(Vector *, Vector *);

int main(void){
    Vector a, b;

    //ベクトルの成分を入力
    a.x = 2.2;
    a.y = 3.5;
    b.x = -3.0;
    b.y = 1.4;

    //結果の表示
    printf("Scalar product = %.2f\n", dot_product(&a, &b));

    return 0;
}

double dot_product(Vector *a, Vector *b){
    return a->x * b->x + a->y * b->y;
    //計算式の解説
    //ベクトルの内積は各成分の積の和で求められる
    //ここでは構造体のメンバにアクセスするためにアロー演算子(->)を使用している
    //例えば、a->xはベクトルaのx成分を指す
    //同様に、b->yはベクトルbのy成分を指す
    //したがって、内積はx成分同士の積とy成分同士の積を足し合わせたものとなる
}
