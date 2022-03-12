// Copyright 2021 NNTU-CS
int countPairs1(int* arr, int len, int value) {

	int count = 0;

	for (int i = 0; i < len; i++) {
		for (int j = i; j < len; j++) {
			if (arr[i] + arr[j] == value) {
				count++;
			}
		}
	}
	return count;
	return 0;
}

int countPairs2(int* arr, int len, int value) {

	int count = 0;

	for (int i = 0; i < len; i++) {
		for (int j = len; j >= i; j--) {
			if (arr[i] + arr[j] == value) {
				count++;
			}
		}
	}
	return count;
	return 0;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
}
