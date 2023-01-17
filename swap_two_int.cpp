#include<iostream>

void swap1(int &first, int &second);
void swap2(int *third, int *fourth);


int main() {

	int first = 1,
		second = 2,
		third = 3,
		fourth = 4;



	std::cout << "before &swap \nfirst  " << first << std::endl << "second  " << second << std::endl;

	swap1(first, second);

	std::cout << "after &swap \nfirst  " << first << std::endl << "second  " << second << std::endl;



	std::cout << "before pointerswap \nthird  " << third << std::endl << "fourth  " << fourth << std::endl;

	swap2(&third, &fourth);

	std::cout << "after pointerswap \nthird  " << third << std::endl << "fourth  " << fourth << std::endl;







	return 0;
}



void swap1(int &first_f, int &second_f) {

	int temp;

	temp = first_f;
	first_f = second_f;
	second_f = temp;


}



void swap2(int *third_f, int *fourth_f) {

	int temp;

	temp = *third_f;
	*third_f = *fourth_f;
	*fourth_f = temp;



}


