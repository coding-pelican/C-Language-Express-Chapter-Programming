#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.141592
#define TRUE 1
#define FALSE 0

//01
double add(double _x, double _y);
double sub(double _x, double _y);
double mul(double _x, double _y);
double div(double _x, double _y);
double check_operator(double x, char op, double y);
void enter_operation();
void display_input_message();
void display_count_of_enter_operator_calls();
static int n_add = 0, n_sub = 0, n_mul = 0, n_div = 0;
int main(void){
	while(TRUE){
		display_input_message();
		enter_operation();
		display_count_of_enter_operator_calls();
	}
}
void display_count_of_enter_operator_calls(){
	if(n_add > 0){
		printf("덧셈 %d\n", n_add);
	}
	if(n_sub > 0){
		printf("뺄셈 %d\n", n_sub);
	}
	if(n_mul > 0){
		printf("곱셈 %d\n", n_mul);
	}
	if(n_div > 0){
		printf("나눗셈 %d\n", n_div);
	}
}
void display_input_message(){
	printf("연산을 입력하시오.\n>> ");
}
void enter_operation(){
	double x, y;
	char op;
	scanf("%lf%c%lf", &x, &op, &y);
	printf("%d\n", (int)(check_operator(x, op, y)));
}
double check_operator(double x, char op, double y){
	if(op == '+'){
		return add(x, y);	
	} else if(op == '-'){
		return sub(x, y);	
	} else if(op == '*'){
		return mul(x, y);	
	} else if(op == '/'){
		return div(x, y);	
	} else{
		return NULL;
	}
}
double div(double _x, double _y){
	n_div++;
	return _x / _y;
}

double mul(double _x, double _y){
	n_mul++;
	return _x * _y;
}

double sub(double _x, double _y){
	n_sub++;
	return _x - _y;
}

double add(double _x, double _y){
	n_add++;
	return _x + _y;
}
