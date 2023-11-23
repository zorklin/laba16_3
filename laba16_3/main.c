#include <stdio.h>

void main() {

	//типізація, масив, розмір масиву, для циклів і допоміжні зміні для пошуку суми діагоналей
	int i = 0, j = 0, height_width, sum_of_two_diagonal = 0, sum_of_main_diagonal = 0, sum_of_side_diagonal = 0;
	int array[10][10];

	// введення розміру масиву (висота і ширина)
	printf("enter height and width of array (one number), a positive integer is more than 0 and less than 11: ");
	scanf_s("%d", &height_width);

	//перевірка умови (вихід за масив)
	if (height_width > 0 && height_width <= 10)
	{

		//ведення елементів масиву
		for (i = 0; i < height_width; i++)
		{
			for (j = 0; j < height_width; j++)
			{
				printf("Element %d %d: ", (i + 1), (j + 1));
				scanf_s("%d", &array[i][j]);
			}

		}

		//пошук суми головної діагоналі
		for (i = 0; i < height_width; i++)
		{
			sum_of_main_diagonal += array[i][i];
		}

		//пошук суми побічної діагоналі
		for (i = 0; i < height_width; i++)
		{
			sum_of_side_diagonal += array[i][(height_width - 1) - i];
		}

		//обрахунок суми двох діагоналей
		sum_of_two_diagonal = sum_of_main_diagonal + sum_of_side_diagonal;

		//вивід результату
		printf("sum_of_main_diagonal: %d\nsum_of_side_diagonal: %d\n", sum_of_main_diagonal, sum_of_side_diagonal);
		printf("sum_of_two_diagonal: %d", sum_of_two_diagonal);

	}

	//якщо умова порушена (вихід за масив)
	else
	{
		printf("False, more than 10 or less than 0");
	}

	//повернення 0
	return 0;

}